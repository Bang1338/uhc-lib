#ifndef UHC_H
#define UHC_H

#include <windows.h>

#ifdef BUILD_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif

void DLL_EXPORT HPCwtm(LPCSTR input_txt);

#ifdef __cplusplus
}
#endif

#endif // UHC_H
