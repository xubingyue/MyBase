#ifndef __PLATFORM_H__
#define __PLATFORM_H__

/*----------------------------------- SYSTEM MACRO DEFINE -----------------------------------*/

#ifdef WIN32
	#define PLATFORM	"windows"
	#define PLATFORM_OS_WINDOWS
#else
	#define PLATFORM	"linux"
	#define PLATFORM_OS_LINUX

#endif // WIN32

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <assert.h>
#include <ctype.h>
#include <algorithm>
#include <vector>

#ifdef WIN32
	#define WIN32_LEAN_AND_MEAN			 // 不加载MFC所需的模块。在编译链接时，以及在最后生成的一些供调试用的模块时，速度更快，容量更小。
	//#include <WinSock2.h>
	#include <windows.h>
	#undef WIN32_LEAN_AND_MEAN
#else
	#include <unistd.h>
	#define TRUE	1
	#define FALSE	0
#endif // WIN32


#endif