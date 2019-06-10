#pragma once

#include <string>

#define ALG_LOG(LogMessage, ...) fprintf(stdout, "%s(%d)    " LogMessage "\n", __FUNCTION__, __LINE__, __VA_ARGS__)