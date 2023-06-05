:: RUN THIS UNDER Visual Studio Developer Command Prompt!
:: If you don't want VS for this: https://www.youtube.com/watch?v=DkG3Ox8sLdM
::                                               ^ it's not rick roll...

cl /LD /DBUILD_DLL /O2 /GL uhc.cpp /link /LTCG /SUBSYSTEM:WINDOWS user32.lib gdi32.lib

:: /LD: Create Dll
:: /DBUILD_DLL tl;dr: defines a preprocessor macro named BUILD_DLL. For header.
:: /O2: Maximize speed
:: /GL: Whole program optimization
:: /link: you know.
:: /LTCG: Link-time code generation
:: /SUBSYSTEM:WINDOWS: Specify Subsystem (in this case: WINDOWS)
::              ^in case no GUI, i used that to hide console instead of long
::              inefficient C++ code for hiding console.