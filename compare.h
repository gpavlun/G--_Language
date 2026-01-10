/*
attempt to create a comparison macro
*/
#include "evil.h"

#define cmp(A,B) \
B ? 0 : jump cmp0 $