#if defined(_DEBUG) && defined(_MSC_VER)
#undef _DEBUG
#define FC_DISABLE_PYTHON_DEBUG
#endif  // _DEBUG && _MSC_VER

#include <Python.h>

#ifdef FC_DISABLE_PYTHON_DEBUG
#define _DEBUG 1
#endif  // FC_DISABLE_PYTHON_DEBUG
