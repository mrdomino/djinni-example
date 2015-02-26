// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#include "duration.hpp"  // my header

namespace interaxon { namespace example {


bool Duration::operator==(const Duration & other) const {
    return microseconds == other.microseconds;
}

bool Duration::operator!=(const Duration & other) const {
    return !(*this == other);
}

bool Duration::operator<(const Duration & other) const {
    if (microseconds < other.microseconds) {
        return true;
    }
    if (other.microseconds < microseconds) {
        return false;
    }
    return false;
}

bool Duration::operator>(const Duration & other) const {
    return other < *this;
}

bool Duration::operator<=(const Duration & other) const {
    return (*this < other || *this == other);
}

bool Duration::operator>=(const Duration & other) const {
    return other <= *this;
}

} }  // namespace interaxon::example