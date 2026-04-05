from trackperf import track_perf

if __name__ == "__main__":
    with track_perf("main"):
        
        with track_perf("import FreeCAD"):
            import FreeCAD

        with track_perf("work"):
            doc = "D:/repos/gh/jb-workshop-designs/furniture/rocker-chair/tww-guild/seat.FCStd"
            docobj = FreeCAD.openDocument(doc)

            with track_perf("after_open"):
                obj1 = docobj.getObjectsByLabel("Surface002")[0]
                obj2 = docobj.getObjectsByLabel("Surface003")[0]
                obj3 = docobj.getObjectsByLabel("Surface004")[0]
                du = docobj.getObjectsByLabel("DressupPathBoundary")[0]

                with track_perf("loop"):
                    for i in range(3):
                        obj1.recompute()
                        obj2.recompute()
                        obj3.recompute()

                with track_perf("cleanup"):
                    obj3 = None
                    obj2 = None
                    obj1 = None
                    du = None
                    docobj = None
