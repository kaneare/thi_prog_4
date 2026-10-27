#pragma once

#ifdef _WIN32
    #ifdef THIRD_LAB_EXPORTS
        #define THIRD_LAB_API __declspec(dllexport)
    #else
        #define THIRD_LAB_API __declspec(dllimport)
    #endif
#else
    #define THIRD_LAB_API
#endif
