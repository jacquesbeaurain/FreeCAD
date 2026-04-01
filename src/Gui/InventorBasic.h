/***************************************************************************
 *   Copyright (c) 2006 Jürgen Riegel <juergen.riegel@web.de>              *
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

#ifndef __InventorBasic__
#define __InventorBasic__

#include <FCConfig.h>

#ifdef FC_OS_WIN32
# include <windows.h>
#endif

// Open Inventor
#ifdef FC_OS_MACOSX
# include <OpenGL/gl.h>
#else
# include <GL/gl.h>
#endif

#if defined(_DEBUG) && defined(_MSC_VER)
# undef _DEBUG
# define FC_DISABLE_INVENTOR_DEBUG
#endif  // _DEBUG && _MSC_VER

#include <Inventor/C/basic.h>

#ifdef FC_DISABLE_INVENTOR_DEBUG
# define _DEBUG
# undef FC_DISABLE_INVENTOR_DEBUG
#endif  // FC_DISABLE_INVENTOR_DEBUG

#endif // FC_DISABLE_INVENTOR_DEBUG
