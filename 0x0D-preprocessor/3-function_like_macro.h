#ifndef _3_FUNCTION_LIKE_MACRO_H
#define _3_FUNCTION_LIKE_MACRO_H
#include <limits.h>
#define ABS(x) ((x) == (INT_MIN) ? (INT_MAX) : (x) < (0) ? (-x) : (x) )
#endif

