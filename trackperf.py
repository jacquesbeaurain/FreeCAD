import atexit
import time
from contextlib import contextmanager

from collections import namedtuple

# Define the namedtuple
Metrics = namedtuple('Metrics', ['num_calls', 'total_time_ns'])

__g_total_times = None

def report_durations():
    if __g_total_times is not None:
        for name, metrics in __g_total_times.items():
            total_time_s = metrics.total_time_ns * 1e-9 
            print(f"{name} : {metrics.num_calls} calls : {total_time_s:.4f} seconds")

@contextmanager
def track_perf(name): 
    start_time_ns = time.perf_counter_ns() 
    try:
        yield start_time_ns
    finally:
        global __g_total_times
    
        end_time_ns = time.perf_counter_ns()
        duration_ns = end_time_ns - start_time_ns
        
        if __g_total_times is None:
            __g_total_times = {}
            atexit.register(report_durations)
    
        
        num_calls = 1
        total_time_ns = duration_ns
        if name in __g_total_times:
            metrics = __g_total_times[name]
            num_calls = metrics.num_calls + 1
            total_time_ns = metrics.total_time_ns + duration_ns

        __g_total_times[name] = Metrics(total_time_ns=total_time_ns, num_calls=num_calls)


