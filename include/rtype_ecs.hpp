#pragma once

#if defined(_WIN32)
  #if defined(R_TYPE_ECS_BUILD)
    #define R_TYPE_ECS_API __declspec(dllexport)
  #else
    #define R_TYPE_ECS_API __declspec(dllimport)
  #endif
#else
  #define R_TYPE_ECS_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

R_TYPE_ECS_API int rtype_ecs_version(void);
R_TYPE_ECS_API const char* rtype_ecs_hello(void);

#ifdef __cplusplus
}
#endif
