#ifndef BSV_V2D_H
#define BSV_V2D_H
/*============================================================================
bsv_V2d.h

Vec2 double precision vectors.

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

static inline double bsv_V2d_abs(const bsv_V2d self);
static inline double bsv_V2d_dot(const bsv_V2d self, const bsv_V2d other);
static inline bsv_V2d bsv_V2d_plus(const bsv_V2d self, const bsv_V2d other);
static inline bsv_V2d bsv_V2d_minus(const bsv_V2d self, const bsv_V2d other);
static inline bsv_V2d bsv_V2d_uminus(const bsv_V2d self);
static inline bsv_V2d bsv_V2d_mult(const bsv_V2d self, const double multiplier);
static inline bsv_V2d bsv_V2d_div(const bsv_V2d self, const double div);
static inline bsv_V2d bsv_V2d_unit(const bsv_V2d self);
static inline bsv_V2d bsv_V2d_zero(void);
static inline int bsv_V2d_isequal(const bsv_V2d self, const bsv_V2d other);
static inline int bsv_V2d_isnequal(const bsv_V2d self, const bsv_V2d other);
static inline bsv_V2f bsv_V2d_toV2f(const bsv_V2d input);

/* IMPLEMENTATION ==========================================================*/
#include "bsv_fast_maths.h"

double bsv_V2d_abs(const bsv_V2d self)
{
	double a, b;
	a = self.x[0] * self.x[0];
	b = self.x[1] * self.x[1];
	return bsv_internals_sqrt(a + b);
}

double bsv_V2d_dot(const bsv_V2d self, const bsv_V2d other)
{
	double a, b;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	return a + b;
}

bsv_V2d  bsv_V2d_zero(void)
{
	bsv_V2d ret;
	ret.x[0] = 0.0;
	ret.x[1] = 0.0;
	return ret;
}

bsv_V2d bsv_V2d_plus(const bsv_V2d self, const bsv_V2d other)
{
	bsv_V2d ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	return ret;
}

bsv_V2d bsv_V2d_minus(const bsv_V2d self, const bsv_V2d other)
{
	bsv_V2d ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	return ret;
}

bsv_V2d bsv_V2d_uminus(const bsv_V2d self)
{
	bsv_V2d ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	return ret;
}

bsv_V2d bsv_V2d_mult(const bsv_V2d self, const double multiplier)
{
	bsv_V2d ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	return ret;
}

bsv_V2d bsv_V2d_div(const bsv_V2d self, const double div)
{
	bsv_V2d ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	return ret;
}

bsv_V2d bsv_V2d_unit(const bsv_V2d self)
{
	bsv_V2d ret = self;
	ret = bsv_V2d_div(ret, bsv_V2d_abs(ret));
	return ret;
}

int bsv_V2d_isequal(const bsv_V2d self, const bsv_V2d other)
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

int bsv_V2d_isnequal(const bsv_V2d self, const bsv_V2d other)
{
	return !bsv_V2d_isequal(self, other);
}

bsv_V2f bsv_V2d_toV2f(const bsv_V2d input)
{
	bsv_V2f ret;
	ret.x[0] = (float)input.x[0];
	ret.x[1] = (float)input.x[1];
	return ret;
}

#endif /* BSV_V2D_H */
