#ifndef PH_MATH_UTIL_H
#define PH_MATH_UTIL_H

#include "math.h"
#include <cstdlib>

namespace ph {

inline float clampf (float x, float min, float max) {
	return x <= min ? min : (x >= max ? max : x);
}

inline float deg2rad (float d) {
	return d * M_PI / 180.0;
}

inline float rad2deg (float r) {
	return r * 180.0 / M_PI;
}

inline float randf (float sup) {
	return sup * rand()/((double)RAND_MAX + 1);
}

inline float randi (int sup) {
	return (int) randf(sup);
}

template <typename T>
T min (T a, T b) {
	return a < b ? a : b;
}

template <typename T>
T max (T a, T b) {
	return a > b ? a : b;
}

template <typename T>
T min3 (T a, T b, T c) {
	return min(a, min(b, c));
}

template <typename T>
T max3 (T a, T b, T c) {
	return max(a, max(b, c));
}



}

#endif
