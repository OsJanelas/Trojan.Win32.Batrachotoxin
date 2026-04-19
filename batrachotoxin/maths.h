#pragma once
#include "includer.h"

const float PI = 3.1415926535f;
const int R1 = 40;
const int R2 = 100;
const float K1 = 150.0f;

typedef struct
{
	float x;
	float y;
	float z;
} VERTEX;

DWORD randomized() {
	DWORD number = __rdtsc();

	number ^= number << 13;
	number ^= number << 17;
	number ^= number << 5;

	return number;
}

namespace Math
{
	FLOAT SineWave(FLOAT a, FLOAT b, FLOAT c, FLOAT d)
	{
		return a * sin(2 * PI * b * c / d);
	}
}