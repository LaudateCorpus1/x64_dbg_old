#ifndef _GLOBAL_H
#define _GLOBAL_H

#define _WIN32_WINNT 0x0501
#define WINVER 0x0501
#define _WIN32_IE 0x0500

#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <shlwapi.h>
#include <stdarg.h>

#include "dbg.h"

//defines
#define deflen 1024

#ifdef _WIN64 //defined by default
#define fhex "%.16llX"
#define fext "ll"
#define uint unsigned long long
#define sint long long
#else
#define fhex "%.8X"
#define fext ""
#define uint unsigned long
#define sint long
#endif // _WIN64

enum BITMASK
{
    BIT1=0x1,
    BIT2=0x2,
    BIT3=0x4,
    BIT4=0x8,
    BIT5=0x10,
    BIT6=0x20,
    BIT7=0x40,
    BIT8=0x80,
    BIT9=0x100,
    BIT10=0x200,
    BIT11=0x400,
    BIT12=0x800,
    BIT13=0x1000,
    BIT14=0x2000,
    BIT15=0x4000,
    BIT16=0x8000,
    BIT17=0x10000,
    BIT18=0x20000,
    BIT19=0x40000,
    BIT20=0x80000,
    BIT21=0x100000,
    BIT22=0x200000,
    BIT23=0x400000,
    BIT24=0x800000,
    BIT25=0x1000000,
    BIT26=0x2000000,
    BIT27=0x4000000,
    BIT28=0x8000000,
    BIT29=0x10000000,
    BIT30=0x20000000,
    BIT31=0x40000000,
    BIT32=0x80000000
};

//functions
bool arraycontains(const char* cmd_list, const char* cmd);
bool scmp(const char* a, const char* b);
void formathex(char* string);
void formatdec(char* string);
bool FileExists(const char* file);
bool DirExists(const char* dir);

#endif // _GLOBAL_H
