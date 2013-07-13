#ifndef _MATH_H
#define _MATH_H

#include "_global.h"

int mathisoperator(char ch);
void mathformat(char* text);
bool mathcontains(const char* text);
bool mathhandlebrackets(char* string, const char* base);
bool mathfromstring(const char* string, uint* value);
bool mathdounsignedoperation(char op, uint left, uint right, uint* result);
bool mathdosignedoperation(char op, sint left, sint right, sint* result);

#endif // _MATH_H
