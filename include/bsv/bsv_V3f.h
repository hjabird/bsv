#ifndef BSV_V3F_H
#define BSV_V3F_H
/*============================================================================
bsv_V3f.h

Vec3 single precision vectors.

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

static inline float bsv_V3f_abs(const bsv_V3f self);
static inline float bsv_V3f_dot(const bsv_V3f self, const bsv_V3f other);
static inline bsv_V3f bsv_V3f_cross(const bsv_V3f self, const bsv_V3f other);
static inline bsv_V3f bsv_V3f_plus(const bsv_V3f self, const bsv_V3f other);
static inline bsv_V3f bsv_V3f_minus(const bsv_V3f self, const bsv_V3f other);
static inline bsv_V3f bsv_V3f_uminus(const bsv_V3f self);
static inline bsv_V3f bsv_V3f_mult(const bsv_V3f self, const float multiplier);
static inline bsv_V3f bsv_V3f_div(const bsv_V3f self, const float div);
static inline bsv_V3f bsv_V3f_unit(const bsv_V3f self);
static inline bsv_V3f bsv_V3f_zero(void);
static inline int bsv_V3f_isequal(const bsv_V3f self, const bsv_V3f other);
static inline int bsv_V3f_isnequal(const bsv_V3f self, const bsv_V3f other);
static inline bsv_V3d bsv_V3f_toV3d(const bsv_V3f input);

/* IMPLEMENTATION ==========================================================*/
#include "bsv_fast_maths.h"

float bsv_V3f_abs(const bsv_V3f self)
{
	float a, b, c;
	a = self.x[0] * self.x[0];
	b = self.x[1] * self.x[1];
	c = self.x[2] * self.x[2];
	return bsv_internals_sqrtf(a + b + c);
}

float bsv_V3f_dot(const bsv_V3f self, const bsv_V3f other)
{
	float a, b, c;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	c = self.x[2] * other.x[2];
	return a + b + c;
}

bsv_V3f bsv_V3f_zero(void)
{
	bsv_V3f ret;
	ret.x[0] = 0.0;
	ret.x[1] = 0.0;
	ret.x[2] = 0.0;
	return ret;
}

bsv_V3f bsv_V3f_cross(const bsv_V3f self, const bsv_V3f other)
{
	bsv_V3f ret;
	ret.x[0] = self.x[1] * other.x[2] -
		self.x[2] * other.x[1];
	ret.x[1] = self.x[2] * other.x[0] -
		self.x[0] * other.x[2];
	ret.x[2] = self.x[0] * other.x[1] -
		self.x[1] * other.x[0];
	return ret;
}

bsv_V3f bsv_V3f_plus(const bsv_V3f self, const bsv_V3f other)
{
	bsv_V3f ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	ret.x[2] = self.x[2] + other.x[2];
	return ret;
}

bsv_V3f bsv_V3f_minus(const bsv_V3f self, const bsv_V3f other)
{
	bsv_V3f ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	ret.x[2] = self.x[2] - other.x[2];
	return ret;
}

bsv_V3f bsv_V3f_uminus(const bsv_V3f self)
{
	bsv_V3f ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	ret.x[2] = -self.x[2];
	return ret;
}

bsv_V3f bsv_V3f_mult(const bsv_V3f self, const float multiplier)
{
	bsv_V3f ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	ret.x[2] = self.x[2] * multiplier;
	return ret;
}

bsv_V3f bsv_V3f_div(const bsv_V3f self, const float div)
{
	bsv_V3f ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	ret.x[2] = self.x[2] / div;
	return ret;
}

bsv_V3f bsv_V3f_unit(const bsv_V3f self)
{
	bsv_V3f ret = self;
	float cor;
	ret = bsv_V3f_mult(ret,
		bsv_internals_rsqrtf(bsv_V3f_dot(ret, ret)));
	cor = bsv_V3f_dot(ret, ret);
	cor = bsv_internals_approx_near1_rsqrtf(cor);
	ret = bsv_V3f_mult(ret, cor);
	return ret;
}

int bsv_V3f_isequal(const bsv_V3f self, const bsv_V3f other)
{
	int retv;
	if ((self.x[0] == other.x[0]) &&
		(self.x[1] == other.x[1]) &&
		(self.x[2] == other.x[2])) {

		retv = 1;
	}
	else {
		retv = 0;
	}
	return retv;
}

int bsv_V3f_isnequal(const bsv_V3f self, const bsv_V3f other)
{
	return !bsv_V3f_isequal(self, other);
}

bsv_V3d bsv_V3f_toV3d(const bsv_V3f input)
{
	bsv_V3d ret;
	ret.x[0] = input.x[0];
	ret.x[1] = input.x[1];
	ret.x[2] = input.x[2];
	return ret;
}

#endif /* BSV_V3F_H */
