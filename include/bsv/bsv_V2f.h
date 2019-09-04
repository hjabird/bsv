#ifndef BSV_V2F_H
#define BSV_V2F_H
/*============================================================================
bsv_V2f.h

Vec2 single precision vectors.

Copyright(c) 2018-2019 HJA Bird

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================*/

#include "bsv_types.h"

static inline float bsv_V2f_abs(const bsv_V2f self);
static inline float bsv_V2f_dot(const bsv_V2f self, const bsv_V2f other);
static inline bsv_V2f bsv_V2f_plus(const bsv_V2f self, const bsv_V2f other);
static inline bsv_V2f bsv_V2f_minus(const bsv_V2f self, const bsv_V2f other);
static inline bsv_V2f bsv_V2f_uminus(const bsv_V2f self);
static inline bsv_V2f bsv_V2f_mult(const bsv_V2f self, const float multiplier);
static inline bsv_V2f bsv_V2f_div(const bsv_V2f self, const float div);
static inline bsv_V2f bsv_V2f_unit(const bsv_V2f self);
static inline bsv_V2f bsv_V2f_zero(void);
static inline int bsv_V2f_isequal(const bsv_V2f self, const bsv_V2f other);
static inline int bsv_V2f_isnequal(const bsv_V2f self, const bsv_V2f other);
static inline bsv_V2d bsv_V2f_toV2d(const bsv_V2f input);

/* IMPLEMENTATION ==========================================================*/
#include <math.h>

float bsv_V2f_abs(const bsv_V2f self)
{
	float a, b;
	a = powf(self.x[0], 2);
	b = powf(self.x[1], 2);
	return sqrtf(a + b);
}

float bsv_V2f_dot(const bsv_V2f self, const bsv_V2f other)
{
	float a, b;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	return a + b;
}

bsv_V2f bsv_V2f_zero(void)
{
	bsv_V2f ret;
	ret.x[0] = 0.0f;
	ret.x[1] = 0.0f;
	return ret;
}

bsv_V2f bsv_V2f_plus(const bsv_V2f self, const bsv_V2f other)
{
	bsv_V2f ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	return ret;
}

bsv_V2f bsv_V2f_minus(const bsv_V2f self, const bsv_V2f other)
{
	bsv_V2f ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	return ret;
}

bsv_V2f bsv_V2f_uminus(const bsv_V2f self)
{
	bsv_V2f ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	return ret;
}

bsv_V2f bsv_V2f_mult(const bsv_V2f self, const float multiplier)
{
	bsv_V2f ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	return ret;
}

bsv_V2f bsv_V2f_div(const bsv_V2f self, const float div)
{
	bsv_V2f ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	return ret;
}

bsv_V2f bsv_V2f_unit(const bsv_V2f self)
{
	bsv_V2f ret = self;
	ret = bsv_V2f_div(ret, bsv_V2f_abs(ret));
	return ret;
}

int bsv_V2f_isequal(const bsv_V2f self, const bsv_V2f other)
{
	int retv;
	if ((self.x[0] == other.x[0]) &&
		(self.x[1] == other.x[1])) {

		retv = 1;
	}
	else {
		retv = 0;
	}
	return retv;
}

int bsv_V2f_isnequal(const bsv_V2f self, const bsv_V2f other)
{
	return !bsv_V2f_isequal(self, other);
}

bsv_V2d bsv_V2f_toV2d(const bsv_V2f input)
{
	bsv_V2d ret;
	ret.x[0] = input.x[0];
	ret.x[1] = input.x[1];
	return ret;
}

#endif /* BSV_V2F_H */
