from setuptools import setup
from Cython.Build import cythonize

setup(
    ext_modules=cythonize(
        "Path/**/*.py",  # Recursively finds all .py files
        exclude=["Path/**/__init__.py"], # Exclude init files to keep package structure
    )
)
