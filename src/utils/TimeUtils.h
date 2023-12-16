#pragma once

#include <time.h>
#include <string>

namespace TimeUtils {
    std::string timeToString(time_t input);
    std::string isoTimeToString(const std::string& input);
    std::string workingTime(int value);
}