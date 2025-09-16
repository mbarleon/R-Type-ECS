#pragma once

#include "RTypeEcsApi.hpp"

#define R_TYPE_ECS_VERSION "0.0.1"

#if defined(__cplusplus)
extern "C" {
#endif

R_TYPE_ECS_API const char *rtype_ecs_version(void);

#if defined(__cplusplus)
}
#endif
