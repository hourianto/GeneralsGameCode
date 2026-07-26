// TheSuperHackers
// Integral math overloads added to the C++ standard library after MSVC 2005.

#pragma once

#if defined(_MSC_VER) && _MSC_VER == 1400 && defined(__cplusplus)

#include <math.h>

inline double sqrt(int value) { return ::sqrt(static_cast<double>(value)); }
inline double sqrt(unsigned int value) { return ::sqrt(static_cast<double>(value)); }
inline double sqrt(long value) { return ::sqrt(static_cast<double>(value)); }
inline double sqrt(unsigned long value) { return ::sqrt(static_cast<double>(value)); }

inline double pow(int base, int exponent) { return ::pow(static_cast<double>(base), exponent); }
inline double pow(unsigned int base, int exponent) { return ::pow(static_cast<double>(base), exponent); }
inline double pow(double base, unsigned int exponent) { return ::pow(base, static_cast<double>(exponent)); }

#endif
