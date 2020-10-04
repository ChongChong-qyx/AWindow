#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(AWINDOW_LIB)
#  define AWINDOW_EXPORT Q_DECL_EXPORT
# else
#  define AWINDOW_EXPORT Q_DECL_IMPORT
# endif
#else
# define AWINDOW_EXPORT
#endif
