/***************************************************************************
 *   Copyright (c) 2008 Jürgen Riegel <juergen.riegel@web.de>              *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#pragma once

#include <FCConfig.h>

// standard
#include <cassert>
#include <cmath>
#include <iostream>

// STL
#include <algorithm>
#include <bitset>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

// boost
#include <boost/algorithm/string.hpp>
#include <boost/bind/bind.hpp>
#include <boost/lexical_cast.hpp>

#ifdef FC_OS_WIN32
# include <windows.h>
#endif

// OCC
#include <BRepAdaptor_Surface.hxx>
#include <Precision.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Shape.hxx>

#include <QAction>
#include <QApplication>
#include <QDockWidget>
#include <QFile>
#include <QFileInfo>
#include <QKeyEvent>
#include <QMenu>
#include <QMessageBox>
#include <QMetaMethod>
#include <QPushButton>
#include <QSlider>
#include <QStackedWidget>
#include <QStandardPaths>
#include <QString>
#include <QStringList>
#include <QTextCharFormat>
#include <QTextStream>
#include <QThread>
#include <QToolTip>
#include <qobject.h>

// inventor

#include <Gui/InventorAll.h>

// Salomesh
#include <SMDSAbs_ElementType.hxx>
#include <SMESHDS_Mesh.hxx>
#include <SMESH_Mesh.hxx>
#include <SMESH_MeshEditor.hxx>

// VTK
#include <vtkCellArray.h>
#include <vtkCellData.h>
#include <vtkDoubleArray.h>
#include <vtkLookupTable.h>
#include <vtkPointData.h>
