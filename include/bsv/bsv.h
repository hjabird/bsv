#ifndef LIBBSV_H
#define LIBBSV_H
/*============================================================================
bsv.h

Bird small vectors library.

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

/* Vectors -------------*/
typedef struct bsv_V4f{
	float x[4];
} bsv_V4f;

typedef struct bsv_V4d{
    double x[4];
} bsv_V4d;

typedef struct bsv_V3f{
	float x[3];
} bsv_V3f;

typedef struct bsv_V3d{
    double x[3];
} bsv_V3d;

typedef struct bsv_V2f{
	float x[2];
} bsv_V2f;

typedef struct bsv_V2d{
    double x[2];
} bsv_V2d;

/* Matrices ------------*/
typedef struct bsv_M3f{
	float x[3][3];
} bsv_M3f;

typedef struct bsv_M3d{
	double x[3][3];
} bsv_M3d;

typedef struct bsv_M2f{
	float x[2][2];
} bsv_M2f;

typedef struct bsv_M2d{
	double x[2][2];
} bsv_M2d;

/* Vector only functions ===================================================*/
static inline float bsv_V4f_abs(const bsv_V4f self);
static inline float bsv_V4f_dot(const bsv_V4f self, const bsv_V4f other);
static inline bsv_V4f bsv_V4f_plus(const bsv_V4f self, const bsv_V4f other);
static inline bsv_V4f bsv_V4f_minus(const bsv_V4f self, const bsv_V4f other);
static inline bsv_V4f bsv_V4f_uminus(const bsv_V4f self);
static inline bsv_V4f bsv_V4f_mult(const bsv_V4f self, const float multiplier);
static inline bsv_V4f bsv_V4f_div(const bsv_V4f self, const float div);
static inline bsv_V4f bsv_V4f_unit(const bsv_V4f self);
static inline bsv_V4f bsv_V4f_zero(void);
static inline int bsv_V4f_isequal(const bsv_V4f self, const bsv_V4f other);
static inline int bsv_V4f_isnequal(const bsv_V4f self, const bsv_V4f other);
static inline bsv_V4d bsv_V4f_toV4d(const bsv_V4f input);

static inline double bsv_V4d_abs(const bsv_V4d self);
static inline double bsv_V4d_dot(const bsv_V4d self, const bsv_V4d other);
static inline bsv_V4d bsv_V4d_plus(const bsv_V4d self, const bsv_V4d other);
static inline bsv_V4d bsv_V4d_minus(const bsv_V4d self, const bsv_V4d other);
static inline bsv_V4d bsv_V4d_uminus(const bsv_V4d self);
static inline bsv_V4d bsv_V4d_mult(const bsv_V4d self, const double multiplier);
static inline bsv_V4d bsv_V4d_div(const bsv_V4d self, const double div);
static inline bsv_V4d bsv_V4d_unit(const bsv_V4d self);
static inline bsv_V4d bsv_V4d_zero(void);
static inline int bsv_V4d_isequal(const bsv_V4d self, const bsv_V4d other);
static inline int bsv_V4d_isnequal(const bsv_V4d self, const bsv_V4d other);
static inline bsv_V4d bsv_V4d_toV4f(const bsv_V4d input);

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

static inline double bsv_V3d_abs(const bsv_V3d self);
static inline double bsv_V3d_dot(const bsv_V3d self, const bsv_V3d other);
static inline bsv_V3d bsv_V3d_cross(const bsv_V3d self, const bsv_V3d other);
static inline bsv_V3d bsv_V3d_plus(const bsv_V3d self, const bsv_V3d other);
static inline bsv_V3d bsv_V3d_minus(const bsv_V3d self, const bsv_V3d other);
static inline bsv_V3d bsv_V3d_uminus(const bsv_V3d self);
static inline bsv_V3d bsv_V3d_mult(const bsv_V3d self, const double multiplier);
static inline bsv_V3d bsv_V3d_div(const bsv_V3d self, const double div);
static inline bsv_V3d bsv_V3d_unit(const bsv_V3d self);
static inline bsv_V3d bsv_V3d_zero(void);
static inline int bsv_V3d_isequal(const bsv_V3d self, const bsv_V3d other);
static inline int bsv_V3d_isnequal(const bsv_V3d self, const bsv_V3d other);
static inline bsv_V3f bsv_V3d_toV3f(const bsv_V3d input);

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

/* Matrix functions ========================================================*/

static inline bsv_M3d bsv_M3d_zero(void);
static inline bsv_M3d bsv_M3d_ones(void);
static inline bsv_M3d bsv_M3d_identity(void);
static inline bsv_M3d bsv_M3d_rotation(const double rad_angle, const int axis);
static inline bsv_M3d bsv_M3d_scale(const double scale_factor);
static inline bsv_M3d bsv_M3d_plus(const bsv_M3d self, const bsv_M3d other);
static inline bsv_M3d bsv_M3d_minus(const bsv_M3d self, const bsv_M3d other);
static inline bsv_M3d bsv_M3d_uminus(const bsv_M3d self);
static inline bsv_M3d bsv_M3d_mult(const bsv_M3d self, const double multipler);
static inline bsv_M3d bsv_M3d_div(const bsv_M3d self, const double div);
static inline bsv_V3d bsv_V3d_vmult(const bsv_M3d self, const bsv_V3d other);
static inline bsv_M3d bsv_M3d_mmult(const bsv_M3d self, const bsv_M3d other);
static inline double bsv_M3d_norm(const bsv_M3d self);
static inline double bsv_M3d_det(const bsv_M3d self);
static inline bsv_M3d bsv_M3d_inv(const bsv_M3d self);
static inline bsv_M3d bsv_M3d_transpose(const bsv_M3d self);
static inline int bsv_M3d_isequal(const bsv_M3d self, const bsv_M3d other);
static inline int bsv_M3d_isnequal(const bsv_M3d self, const bsv_M3d other);
static inline bsv_M3f bsv_M3d_toM3f(const bsv_M3d self);

static inline bsv_M3f bsv_M3f_zero(void);
static inline bsv_M3f bsv_M3f_ones(void);
static inline bsv_M3f bsv_M3f_identity(void);
static inline bsv_M3f bsv_M3f_rotation(const float rad_angle, const int axis);
static inline bsv_M3f bsv_M3f_scale(const float scale_factor);
static inline bsv_M3f bsv_M3f_plus(const bsv_M3f self, const bsv_M3f other);
static inline bsv_M3f bsv_M3f_minus(const bsv_M3f self, const bsv_M3f other);
static inline bsv_M3f bsv_M3f_uminus(const bsv_M3f self);
static inline bsv_M3f bsv_M3f_mult(const bsv_M3f self, const float multipler);
static inline bsv_M3f bsv_M3f_div(const bsv_M3f self, const float div);
static inline bsv_V3f bsv_M3f_vmult(const bsv_M3f self, const bsv_V3f other);
static inline bsv_M3f bsv_M3f_mmult(const bsv_M3f self, const bsv_M3f other);
static inline float bsv_M3f_norm(const bsv_M3f self);
static inline float bsv_M3f_det(const bsv_M3f self);
static inline bsv_M3f bsv_M3f_inv(const bsv_M3f self);
static inline bsv_M3f bsv_M3f_transpose(const bsv_M3f self);
static inline int bsv_M3f_isequal(const bsv_M3f self, const bsv_M3f other);
static inline int bsv_M3f_isnequal(const bsv_M3f self, const bsv_M3f other);
static inline bsv_M3d bsv_M3f_toM3d(const bsv_M3f self);

static inline bsv_M2d bsv_M2d_zero(void);
static inline bsv_M2d bsv_M2d_ones(void);
static inline bsv_M2d bsv_M2d_identity(void);
static inline bsv_M2d bsv_M2d_rotation(const double rad_angle);
static inline bsv_M2d bsv_M2d_scale(const double scale_factor);
static inline bsv_M2d bsv_M2d_plus(const bsv_M2d self, const bsv_M2d other);
static inline bsv_M2d bsv_M2d_minus(const bsv_M2d self, const bsv_M2d other);
static inline bsv_M2d bsv_M2d_uminus(const bsv_M2d self);
static inline bsv_M2d bsv_M2d_mult(const bsv_M2d self, const double multipler);
static inline bsv_M2d bsv_M2d_div(const bsv_M2d self, const double div);
static inline bsv_V2d bsv_M2d_vmult(const bsv_M2d self, const bsv_V2d other);
static inline bsv_M2d bsv_M2d_mmult(const bsv_M2d self, const bsv_M2d other);
static inline double bsv_M2d_norm(const bsv_M2d self);
static inline double bsv_M2d_det(const bsv_M2d self);
static inline bsv_M2d bsv_M2d_inv(const bsv_M2d self);
static inline bsv_M2d bsv_M2d_transpose(const bsv_M2d self);
static inline int bsv_M2d_isequal(const bsv_M2d self, const bsv_M2d other);
static inline int bsv_M2d_isnequal(const bsv_M2d self, const bsv_M2d other);
static inline bsv_M2f bsv_M2d_toM2f(const bsv_M2d self);

static inline bsv_M2f bsv_M2f_zero(void);
static inline bsv_M2f bsv_M2f_ones(void);
static inline bsv_M2f bsv_M2f_identity(void);
static inline bsv_M2f bsv_M2f_rotation(const float rad_angle);
static inline bsv_M2f bsv_M2f_scale(const float scale_factor);
static inline bsv_M2f bsv_M2f_plus(const bsv_M2f self, const bsv_M2f other);
static inline bsv_M2f bsv_M2f_minus(const bsv_M2f self, const bsv_M2f other);
static inline bsv_M2f bsv_M2f_uminus(const bsv_M2f self);
static inline bsv_M2f bsv_M2f_mult(const bsv_M2f self, const float multipler);
static inline bsv_M2f bsv_M2f_div(const bsv_M2f self, const float div);
static inline bsv_V2f bsv_M2f_vmult(const bsv_M2f self, const bsv_V2f other);
static inline bsv_M2f bsv_M2f_mmult(const bsv_M2f self, const bsv_M2f other);
static inline float bsv_M2f_norm(const bsv_M2f self);
static inline float bsv_M2f_det(const bsv_M2f self);
static inline bsv_M2f bsv_M2f_inv(const bsv_M2f self);
static inline bsv_M2f bsv_M2f_transpose(const bsv_M2f self);
static inline int bsv_M2f_isequal(const bsv_M2f self, const bsv_M2f other);
static inline int bsv_M2f_isnequal(const bsv_M2f self, const bsv_M2f other);
static inline bsv_M2d bsv_M2f_toM2d(const bsv_M2f self);

/* IMPLEMENTATION ==========================================================*/

#include <math.h>
#include <assert.h>

/* V4f ---------------------------------------------------------------------*/

float bsv_V4f_abs(const bsv_V4f self)
{
	float a, b, c, d;
	a = powf(self.x[0], 2);
	b = powf(self.x[1], 2);
	c = powf(self.x[2], 2);
	d = powf(self.x[3], 2);
	return sqrtf(a + b + c + d);
}

float bsv_V4f_dot(const bsv_V4f self, const bsv_V4f other)
{
	float a, b, c, d;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	c = self.x[2] * other.x[2];
	d = self.x[3] * other.x[3];
	return a + b + c + d;
}

bsv_V4f bsv_V4f_zero(void)
{
	bsv_V4f ret;
	ret.x[0] = 0.0;
	ret.x[1] = 0.0;
	ret.x[2] = 0.0;
	ret.x[3] = 0.0;
	return ret;
}

bsv_V4f bsv_V4f_plus(const bsv_V4f self, const bsv_V4f other)
{
	bsv_V4f ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	ret.x[2] = self.x[2] + other.x[2];
	ret.x[3] = self.x[3] + other.x[3];
	return ret;
}

bsv_V4f bsv_V4f_minus(const bsv_V4f self, const bsv_V4f other)
{
	bsv_V4f ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	ret.x[2] = self.x[2] - other.x[2];
	ret.x[3] = self.x[3] - other.x[3];
	return ret;
}

bsv_V4f bsv_V4f_uminus(const bsv_V4f self)
{
	bsv_V4f ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	ret.x[2] = -self.x[2];
	ret.x[3] = -self.x[3];
	return ret;
}

bsv_V4f bsv_V4f_mult(const bsv_V4f self, const float multiplier)
{
	bsv_V4f ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	ret.x[2] = self.x[2] * multiplier;
	ret.x[3] = self.x[3] * multiplier;
	return ret;
}

bsv_V4f bsv_V4f_div(const bsv_V4f self, const float div)
{
	bsv_V4f ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	ret.x[2] = self.x[2] / div;
	ret.x[3] = self.x[3] / div;
	return ret;
}

bsv_V4f bsv_V4f_unit(const bsv_V4f self)
{
    bsv_V4f ret = self;
    ret = bsv_V4f_div(ret, bsv_V4f_abs(ret));
    return ret;
}

int bsv_V4f_isequal(const bsv_V4f self, const bsv_V4f other)
{
	int retv;
	if ((self.x[0] == other.x[0]) &&
		(self.x[1] == other.x[1]) &&
		(self.x[2] == other.x[2]) &&
		(self.x[3] == other.x[3])) 
	{
		retv = 1;
	}
	else {
		retv = 0;
	}
	return retv;
}

int bsv_V4f_isnequal(const bsv_V4f self, const bsv_V4f other) 
{
	return !bsv_V4f_isequal(self, other);
}

bsv_V4d bsv_V4f_toV4d(const bsv_V4f input)
{
    bsv_V4d ret;
    ret.x[0] = input.x[0];
    ret.x[1] = input.x[1];
    ret.x[2] = input.x[2];
    ret.x[3] = input.x[3];
    return ret;
}

/* V4d ---------------------------------------------------------------------*/

double bsv_V4d_abs(const bsv_V4d self)
{
	double a, b, c, d;
	a = pow(self.x[0], 2);
	b = pow(self.x[1], 2);
	c = pow(self.x[2], 2);
	d = pow(self.x[3], 2);
	return sqrt(a + b + c + d);
}

double bsv_V4d_dot(const bsv_V4d self, const bsv_V4d other)
{
	double a, b, c, d;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	c = self.x[2] * other.x[2];
	d = self.x[3] * other.x[3];
	return a + b + c + d;
}

bsv_V4d bsv_V4d_zero(void)
{
	bsv_V4d ret;
	ret.x[0] = 0.0;
	ret.x[1] = 0.0;
	ret.x[2] = 0.0;
	ret.x[3] = 0.0;
	return ret;
}

bsv_V4d bsv_V4d_plus(const bsv_V4d self, const bsv_V4d other)
{
	bsv_V4d ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	ret.x[2] = self.x[2] + other.x[2];
	ret.x[3] = self.x[3] + other.x[3];
	return ret;
}

bsv_V4d bsv_V4d_minus(const bsv_V4d self, const bsv_V4d other)
{
	bsv_V4d ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	ret.x[2] = self.x[2] - other.x[2];
	ret.x[3] = self.x[3] - other.x[3];
	return ret;
}

bsv_V4d bsv_V4d_uminus(const bsv_V4d self)
{
	bsv_V4d ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	ret.x[2] = -self.x[2];
	ret.x[3] = -self.x[3];
	return ret;
}

bsv_V4d bsv_V4d_mult(const bsv_V4d self, const double multiplier)
{
	bsv_V4d ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	ret.x[2] = self.x[2] * multiplier;
	ret.x[3] = self.x[3] * multiplier;
	return ret;
}

bsv_V4d bsv_V4d_div(const bsv_V4d self, const double div)
{
	bsv_V4d ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	ret.x[2] = self.x[2] / div;
	ret.x[3] = self.x[3] / div;
	return ret;
}

bsv_V4d bsv_V4d_unit(const bsv_V4d self)
{
    bsv_V4d ret = self;
    ret = bsv_V4d_div(ret, bsv_V4d_abs(ret));
    return ret;
}

int bsv_V4d_isequal(const bsv_V4d self, const bsv_V4d other)
{
	int retv;
	if ((self.x[0] == other.x[0]) &&
		(self.x[1] == other.x[1]) &&
		(self.x[2] == other.x[2]) &&
		(self.x[3] == other.x[3])) 
	{
		retv = 1;
	}
	else {
		retv = 0;
	}
	return retv;
}

int bsv_V4d_isnequal(const bsv_V4d self, const bsv_V4d other)
{
	return !bsv_V4d_isequal(self, other);
}

bsv_V4d bsv_V4d_toV4d(const bsv_V4d input)
{
    bsv_V4d ret;
    ret.x[0] = input.x[0];
    ret.x[1] = input.x[1];
    ret.x[2] = input.x[2];
    ret.x[3] = input.x[3];
    return ret;
}

/* V3f ---------------------------------------------------------------------*/

float bsv_V3f_abs(const bsv_V3f self)
{
	float a, b, c;
	a = powf(self.x[0], 2);
	b = powf(self.x[1], 2);
	c = powf(self.x[2], 2);
	return sqrtf(a + b + c);
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
    ret = bsv_V3f_div(ret, bsv_V3f_abs(ret));
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

/* V3d ---------------------------------------------------------------------*/

double bsv_V3d_abs(const bsv_V3d self)
{
	double a, b, c;
	a = pow(self.x[0], 2);
	b = pow(self.x[1], 2);
	c = pow(self.x[2], 2);
	return sqrt(a + b + c);
}

double bsv_V3d_dot(const bsv_V3d self, const bsv_V3d other)
{
	double a, b, c;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	c = self.x[2] * other.x[2];
	return a + b + c;
}

bsv_V3d bsv_V3d_zero(void)
{
	bsv_V3d ret;
	ret.x[0] = 0.0f;
	ret.x[1] = 0.0f;
	ret.x[2] = 0.0f;
	return ret;
}

bsv_V3d bsv_V3d_cross(const bsv_V3d self, const bsv_V3d other)
{
	bsv_V3d ret;
	ret.x[0] = self.x[1] * other.x[2] -
		self.x[2] * other.x[1];
	ret.x[1] = self.x[2] * other.x[0] -
		self.x[0] * other.x[2];
	ret.x[2] = self.x[0] * other.x[1] -
		self.x[1] * other.x[0];
	return ret;
}

bsv_V3d bsv_V3d_plus(const bsv_V3d self, const bsv_V3d other)
{
	bsv_V3d ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	ret.x[2] = self.x[2] + other.x[2];
	return ret;
}

bsv_V3d bsv_V3d_minus(const bsv_V3d self, const bsv_V3d other)
{
	bsv_V3d ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	ret.x[2] = self.x[2] - other.x[2];
	return ret;
}

bsv_V3d bsv_V3d_uminus(const bsv_V3d self)
{
	bsv_V3d ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	ret.x[2] = -self.x[2];
	return ret;
}

bsv_V3d bsv_V3d_mult(const bsv_V3d self, const double multiplier)
{
	bsv_V3d ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	ret.x[2] = self.x[2] * multiplier;
	return ret;
}

bsv_V3d bsv_V3d_div(const bsv_V3d self, const double div)
{
	bsv_V3d ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	ret.x[2] = self.x[2] / div;
	return ret;
}

bsv_V3d bsv_V3d_unit(const bsv_V3d self)
{
    bsv_V3d ret = self;
    ret = bsv_V3d_div(ret, bsv_V3d_abs(ret));
    return ret;
}

int bsv_V3d_isequal(const bsv_V3d self, const bsv_V3d other)
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

int bsv_V3d_isnequal(const bsv_V3d self, const bsv_V3d other)
{
	return !bsv_V3d_isequal(self, other);
}

bsv_V3f bsv_V3d_toV3f(const bsv_V3d input)
{
    bsv_V3f ret;
    ret.x[0] = (float)input.x[0];
    ret.x[1] = (float)input.x[1];
    ret.x[2] = (float)input.x[2];
    return ret;
}

/* V2f ---------------------------------------------------------------------*/

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

/* V2d ---------------------------------------------------------------------*/

double bsv_V2d_abs(const bsv_V2d self)
{
	double a, b;
	a = pow(self.x[0], 2);
	b = pow(self.x[1], 2);
	return sqrt(a + b);
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

/* Matrix methods implementation ===========================================*/

/* M3d ---------------------------------------------------------------------*/

static inline bsv_M3d bsv_M3d_zero(void)
{
	bsv_M3d ret = { 0., 0., 0.,
					0., 0., 0.,
					0., 0., 0. };
	return ret;
}

static inline bsv_M3d bsv_M3d_ones(void)
{
	bsv_M3d ret = { 1., 1., 1.,
					1., 1., 1.,
					1., 1., 1. };
	return ret;
}

static inline bsv_M3d bsv_M3d_identity(void)
{
	bsv_M3d ret = { 1.f, 0.f, 0.f,
					0.f, 1.f, 0.f,
					0.f, 0.f, 1.f };
	return ret;
}

static inline bsv_M3d bsv_M3d_rotation(
	const double rad_angle, const int axis) 
{

	assert(axis >= 0); /* axis 0 is X */
	assert(axis < 3); /* axis 2 is Z */
	bsv_M3d ret = bsv_M3d_identity();
	float c = cos(rad_angle), s = sin(rad_angle);
	switch (axis) {
	case 0:
		ret.x[1][1] = c;
		ret.x[2][2] = c;
		ret.x[1][2] = -s;
		ret.x[2][1] = s;
		break;
	case 1:
		ret.x[0][0] = c;
		ret.x[2][2] = c;
		ret.x[0][2] = s;
		ret.x[2][0] = -s;
		break;
	case 2:
		ret.x[0][0] = c;
		ret.x[1][1] = c;
		ret.x[0][1] = -s;
		ret.x[1][0] = s;
		break;
	}
	return ret;
}

static inline bsv_M3d bsv_M3d_scale(const double scale_factor) 
{
	bsv_M3d ret = { scale_factor, 0., 0.,
					0., scale_factor, 0.,
					0., 0., scale_factor };
	return ret;
}

static inline bsv_M3d bsv_M3d_plus(const bsv_M3d self, const bsv_M3d other)
{
	bsv_M3d ret;
	ret.x[0][0] = self.x[0][0] + other.x[0][0];
	ret.x[0][1] = self.x[0][1] + other.x[0][1];
	ret.x[0][2] = self.x[0][2] + other.x[0][2];
	ret.x[1][0] = self.x[1][0] + other.x[1][0];
	ret.x[1][1] = self.x[1][1] + other.x[1][1];
	ret.x[1][2] = self.x[1][2] + other.x[1][2];
	ret.x[2][0] = self.x[2][0] + other.x[2][0];
	ret.x[2][1] = self.x[2][1] + other.x[2][1];
	ret.x[2][2] = self.x[2][2] + other.x[2][2];
	return ret;
}

static inline bsv_M3d bsv_M3d_minus(const bsv_M3d self, const bsv_M3d other) 
{
	bsv_M3d ret;
	ret.x[0][0] = self.x[0][0] - other.x[0][0];
	ret.x[0][1] = self.x[0][1] - other.x[0][1];
	ret.x[0][2] = self.x[0][2] - other.x[0][2];
	ret.x[1][0] = self.x[1][0] - other.x[1][0];
	ret.x[1][1] = self.x[1][1] - other.x[1][1];
	ret.x[1][2] = self.x[1][2] - other.x[1][2];
	ret.x[2][0] = self.x[2][0] - other.x[2][0];
	ret.x[2][1] = self.x[2][1] - other.x[2][1];
	ret.x[2][2] = self.x[2][2] - other.x[2][2];
	return ret;
}

static inline bsv_M3d bsv_M3d_uminus(const bsv_M3d self) {
	bsv_M3d ret;
	ret.x[0][0] = -self.x[0][0];
	ret.x[0][1] = -self.x[0][1];
	ret.x[0][2] = -self.x[0][2];
	ret.x[1][0] = -self.x[1][0];
	ret.x[1][1] = -self.x[1][1];
	ret.x[1][2] = -self.x[1][2];
	ret.x[2][0] = -self.x[2][0];
	ret.x[2][1] = -self.x[2][1];
	ret.x[2][2] = -self.x[2][2];
	return ret;
}

static inline bsv_M3d bsv_M3d_mult(const bsv_M3d self, const double mult) 
{
	bsv_M3d ret;
	ret.x[0][0] = self.x[0][0] * mult;
	ret.x[0][1] = self.x[0][1] * mult;
	ret.x[0][2] = self.x[0][2] * mult;
	ret.x[1][0] = self.x[1][0] * mult;
	ret.x[1][1] = self.x[1][1] * mult;
	ret.x[1][2] = self.x[1][2] * mult;
	ret.x[2][0] = self.x[2][0] * mult;
	ret.x[2][1] = self.x[2][1] * mult;
	ret.x[2][2] = self.x[2][2] * mult;
	return ret;
}

static inline bsv_M3d bsv_M3d_div(const bsv_M3d self, const double divisor)
{
	bsv_M3d ret;
	ret.x[0][0] = self.x[0][0] / divisor;
	ret.x[0][1] = self.x[0][1] / divisor;
	ret.x[0][2] = self.x[0][2] / divisor;
	ret.x[1][0] = self.x[1][0] / divisor;
	ret.x[1][1] = self.x[1][1] / divisor;
	ret.x[1][2] = self.x[1][2] / divisor;
	ret.x[2][0] = self.x[2][0] / divisor;
	ret.x[2][1] = self.x[2][1] / divisor;
	ret.x[2][2] = self.x[2][2] / divisor;
	return ret;
}

static inline bsv_V3d bsv_M3d_vmult(const bsv_M3d self, const bsv_V3d other)
{
	bsv_V3d ret;
	ret.x[0] = self.x[0][0] * other.x[0] +
		self.x[0][1] * other.x[1] +
		self.x[0][2] * other.x[2];
	ret.x[1] = self.x[1][0] * other.x[0] +
		self.x[1][1] * other.x[1] +
		self.x[1][2] * other.x[2];
	ret.x[2] = self.x[2][0] * other.x[0] +
		self.x[2][1] * other.x[1] +
		self.x[2][2] * other.x[2];
	return ret;
}

static inline bsv_M3d bsv_M3d_mmult(
	const bsv_M3d self, const bsv_M3d other) 
{
	bsv_M3d ret;
	int i, j;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			ret.x[i][j] = self.x[i][0] * other.x[0][j] +
				self.x[i][1] * other.x[1][j] +
				self.x[i][2] * other.x[2][j];
		}
	}
	return ret;
}

static inline double bsv_M3d_norm(const bsv_M3d self)
{
	double ret = 0.f;
	int i, j;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			ret += self.x[i][j] * self.x[i][j];
		}
	}
	return sqrt(ret);
}

static inline double bsv_M3d_det(const bsv_M3d self)
{
	double ret = 0;
	ret += self.x[0][0] *
		(self.x[1][1] * self.x[2][2] - self.x[1][2] * self.x[2][1]);
	ret += self.x[0][1] *
		(self.x[1][2] * self.x[2][0] - self.x[1][0] * self.x[2][2]);
	ret += self.x[0][2] *
		(self.x[1][0] * self.x[2][1] - self.x[1][1] * self.x[2][0]);
	return ret;
}

static inline bsv_M3d bsv_M3d_inv(const bsv_M3d self) 
{
	bsv_M3d ret;
	int i, j;
	double det = bsv_M3d_det(self);
	/* We could skip this is det==0 */
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			ret.x[j][i] =	/* <- Transpose and get determinants. */
				self.x[(i + 1) % 3][(j + 1) % 3] * 
					self.x[(i + 2) % 3][(j + 2) % 3] -
				self.x[(i + 1) % 3][(j + 2) % 3] * 
					self.x[(i + 2) % 3][(j + 1) % 3];
		}
	}
	ret = bsv_M3d_div(ret, det);
	return ret;
}

static inline bsv_M3d bsv_M3d_transpose(const bsv_M3d self) 
{
	bsv_M3d ret;
	ret.x[0][0] = self.x[0][0];
	ret.x[1][0] = self.x[0][1];
	ret.x[2][0] = self.x[0][2];
	ret.x[0][1] = self.x[1][0];
	ret.x[1][1] = self.x[1][1];
	ret.x[2][1] = self.x[1][2];
	ret.x[0][2] = self.x[2][0];
	ret.x[1][2] = self.x[2][1];
	ret.x[2][2] = self.x[2][2];
	return ret;
}

static inline int bsv_M3d_isequal(const bsv_M3d self, const bsv_M3d other) 
{
	int retv;
	if (memcmp((void*)& self, (void*)& other, sizeof(bsv_M3d)) == 0)
	{
		retv = 1;
	}
	else {
		retv = 0;
	}
	return retv;
}

static inline int bsv_M3d_isnequal(const bsv_M3d self, const bsv_M3d other)
{
	return !bsv_M3d_isequal(self, other);
}

static inline bsv_M3f bsv_M3d_toM3f(const bsv_M3d self) 
{
	bsv_M3f ret;
	ret.x[0][0] = (float)self.x[0][0];
	ret.x[0][1] = (float)self.x[0][1];
	ret.x[0][2] = (float)self.x[0][2];
	ret.x[1][0] = (float)self.x[1][0];
	ret.x[1][1] = (float)self.x[1][1];
	ret.x[1][2] = (float)self.x[1][2];
	ret.x[2][0] = (float)self.x[2][0];
	ret.x[2][1] = (float)self.x[2][1];
	ret.x[2][2] = (float)self.x[2][2];
	return ret;
}

/* M3f ---------------------------------------------------------------------*/

static inline bsv_M3f bsv_M3f_zero(void){
	bsv_M3f ret = {	0.f, 0.f, 0.f, 
					0.f, 0.f, 0.f, 
					0.f, 0.f, 0.f};
	return ret;
}

static inline bsv_M3f bsv_M3f_ones(void){
	bsv_M3f ret = {	1.f, 1.f, 1.f, 
					1.f, 1.f, 1.f, 
					1.f, 1.f, 1.f};
	return ret;
}

static inline bsv_M3f bsv_M3f_identity(void){
	bsv_M3f ret = {	1.f, 0.f, 0.f, 
					0.f, 1.f, 0.f, 
					0.f, 0.f, 1.f};
	return ret;
}

static inline bsv_M3f bsv_M3f_rotation(const float rad_angle, const int axis)
{
	assert(axis >= 0); /* axis 0 is X */
	assert(axis <  3); /* axis 2 is Z */
	bsv_M3f ret = bsv_M3f_identity();
	float c = cosf(rad_angle), s = sinf(rad_angle);
	switch(axis){
		case 0:
			ret.x[1][1] =  c;
			ret.x[2][2] =  c;
			ret.x[1][2] = -s;
			ret.x[2][1] =  s;
			break;
		case 1:
			ret.x[0][0] =  c;
			ret.x[2][2] =  c;
			ret.x[0][2] =  s;
			ret.x[2][0] = -s;
			break;
		case 2:
			ret.x[0][0] =  c;
			ret.x[1][1] =  c;
			ret.x[0][1] = -s;
			ret.x[1][0] =  s;
			break;
	}
	return ret;
}

static inline bsv_M3f bsv_M3f_scale(const float scale_factor)
{
	bsv_M3f ret = {	scale_factor, 0.f, 0.f, 
					0.f, scale_factor, 0.f,
					0.f, 0.f, scale_factor};
	return ret;
}

static inline bsv_M3f bsv_M3f_plus(const bsv_M3f self, const bsv_M3f other)
{
	bsv_M3f ret;
	ret.x[0][0] = self.x[0][0] + other.x[0][0];
	ret.x[0][1] = self.x[0][1] + other.x[0][1];
	ret.x[0][2] = self.x[0][2] + other.x[0][2];
	ret.x[1][0] = self.x[1][0] + other.x[1][0];
	ret.x[1][1] = self.x[1][1] + other.x[1][1];
	ret.x[1][2] = self.x[1][2] + other.x[1][2];
	ret.x[2][0] = self.x[2][0] + other.x[2][0];
	ret.x[2][1] = self.x[2][1] + other.x[2][1];
	ret.x[2][2] = self.x[2][2] + other.x[2][2];
	return ret;
}

static inline bsv_M3f bsv_M3f_minus(const bsv_M3f self, const bsv_M3f other)
{
	bsv_M3f ret;
	ret.x[0][0] = self.x[0][0] - other.x[0][0];
	ret.x[0][1] = self.x[0][1] - other.x[0][1];
	ret.x[0][2] = self.x[0][2] - other.x[0][2];
	ret.x[1][0] = self.x[1][0] - other.x[1][0];
	ret.x[1][1] = self.x[1][1] - other.x[1][1];
	ret.x[1][2] = self.x[1][2] - other.x[1][2];
	ret.x[2][0] = self.x[2][0] - other.x[2][0];
	ret.x[2][1] = self.x[2][1] - other.x[2][1];
	ret.x[2][2] = self.x[2][2] - other.x[2][2];
	return ret;
}

static inline bsv_M3f bsv_M3f_uminus(const bsv_M3f self)
{
	bsv_M3f ret;
	ret.x[0][0] = -self.x[0][0];
	ret.x[0][1] = -self.x[0][1];
	ret.x[0][2] = -self.x[0][2];
	ret.x[1][0] = -self.x[1][0];
	ret.x[1][1] = -self.x[1][1];
	ret.x[1][2] = -self.x[1][2];
	ret.x[2][0] = -self.x[2][0];
	ret.x[2][1] = -self.x[2][1];
	ret.x[2][2] = -self.x[2][2];
	return ret;
}

static inline bsv_M3f bsv_M3f_mult(const bsv_M3f self, const float mult)
{
	bsv_M3f ret;
	ret.x[0][0] = self.x[0][0] * mult;
	ret.x[0][1] = self.x[0][1] * mult;
	ret.x[0][2] = self.x[0][2] * mult;
	ret.x[1][0] = self.x[1][0] * mult;
	ret.x[1][1] = self.x[1][1] * mult;
	ret.x[1][2] = self.x[1][2] * mult;
	ret.x[2][0] = self.x[2][0] * mult;
	ret.x[2][1] = self.x[2][1] * mult;
	ret.x[2][2] = self.x[2][2] * mult;
	return ret;
}

static inline bsv_M3f bsv_M3f_div(const bsv_M3f self, const float divisor)
{
	bsv_M3f ret;
	ret.x[0][0] = self.x[0][0] / divisor;
	ret.x[0][1] = self.x[0][1] / divisor;
	ret.x[0][2] = self.x[0][2] / divisor;
	ret.x[1][0] = self.x[1][0] / divisor;
	ret.x[1][1] = self.x[1][1] / divisor;
	ret.x[1][2] = self.x[1][2] / divisor;
	ret.x[2][0] = self.x[2][0] / divisor;
	ret.x[2][1] = self.x[2][1] / divisor;
	ret.x[2][2] = self.x[2][2] / divisor;
	return ret;
}

static inline bsv_V3f bsv_M3f_vmult(const bsv_M3f self, const bsv_V3f other)
{
	bsv_V3f ret;
	ret.x[0] = 	self.x[0][0] * other.x[0] + 
				self.x[0][1] * other.x[1] + 
				self.x[0][2] * other.x[2];
	ret.x[1] = 	self.x[1][0] * other.x[0] + 
				self.x[1][1] * other.x[1] + 
				self.x[1][2] * other.x[2];
	ret.x[2] = 	self.x[2][0] * other.x[0] + 
				self.x[2][1] * other.x[1] + 
				self.x[2][2] * other.x[2];
	return ret;
}
	
static inline bsv_M3f bsv_M3f_mmult(const bsv_M3f self, const bsv_M3f other)
{
	bsv_M3f ret;
	int i, j;
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			ret.x[i][j] = 	self.x[i][0] * other.x[0][j] +
							self.x[i][1] * other.x[1][j] +
							self.x[i][2] * other.x[2][j];
		}
	}
	return ret;
}

static inline float bsv_M3f_norm(const bsv_M3f self) 
{
	float ret = 0.f;
	int i, j;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			ret += self.x[i][j] * self.x[i][j];
		}
	}
	return sqrtf(ret);
}

static inline float bsv_M3f_det(const bsv_M3f self)
{
	float ret = 0;
	ret += self.x[0][0] * 
		(self.x[1][1] * self.x[2][2] - self.x[1][2] * self.x[2][1]);
	ret += self.x[0][1] * 
		(self.x[1][2] * self.x[2][0] - self.x[1][0] * self.x[2][2]);
	ret += self.x[0][2] * 
		(self.x[1][0] * self.x[2][1] - self.x[1][1] * self.x[2][0]);
	return ret;
}

static inline bsv_M3f bsv_M3f_inv(const bsv_M3f self)
{
	bsv_M3f ret;
	int i, j;
	float det = bsv_M3f_det(self);
	/* We could skip this is det==0 */
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			ret.x[j][i] =	/* <- Transpose and get determinants. */
				self.x[(i+1)%3][(j+1)%3] * self.x[(i+2)%3][(j+2)%3] -
				self.x[(i+1)%3][(j+2)%3] * self.x[(i+2)%3][(j+1)%3];
		}
	}
	ret = bsv_M3f_div(ret, det);
	return ret;
}

static inline bsv_M3f bsv_M3f_transpose(const bsv_M3f self)
{
	bsv_M3f ret;
	ret.x[0][0] = self.x[0][0];
	ret.x[1][0] = self.x[0][1];
	ret.x[2][0] = self.x[0][2];
	ret.x[0][1] = self.x[1][0];
	ret.x[1][1] = self.x[1][1];
	ret.x[2][1] = self.x[1][2];
	ret.x[0][2] = self.x[2][0];
	ret.x[1][2] = self.x[2][1];
	ret.x[2][2] = self.x[2][2];
	return ret;
}

static inline int bsv_M3f_isequal(const bsv_M3f self, const bsv_M3f other)
{
	int retv;
	if (memcmp((void*)&self, (void*)&other, sizeof(bsv_M3f)) == 0)
	{
		retv = 1;
	}
	else {
		retv = 0;
	}
	return retv;
}

static inline int bsv_M3f_isnequal(const bsv_M3f self, const bsv_M3f other)
{
	return !bsv_M3f_isequal(self, other);
}

static inline bsv_M3d bsv_M3f_toM3d(const bsv_M3f self)
{
	bsv_M3d ret;
	ret.x[0][0] = (double)self.x[0][0];
	ret.x[0][1] = (double)self.x[0][1];
	ret.x[0][2] = (double)self.x[0][2];
	ret.x[1][0] = (double)self.x[1][0];
	ret.x[1][1] = (double)self.x[1][1];
	ret.x[1][2] = (double)self.x[1][2];
	ret.x[2][0] = (double)self.x[2][0];
	ret.x[2][1] = (double)self.x[2][1];
	ret.x[2][2] = (double)self.x[2][2];
	return ret;
}

/* M2d ---------------------------------------------------------------------*/

static inline bsv_M2d bsv_M2d_zero(void)
{
	bsv_M2d ret = {0., 0., 0., 0.};
	return ret;
}

static inline bsv_M2d bsv_M2d_ones(void)
{
	bsv_M2d ret = {1., 1., 1., 1.};
	return ret;
}

static inline bsv_M2d bsv_M2d_identity(void)
{
	bsv_M2d ret = {1., 0., 0., 1.};
	return ret;
}

static inline bsv_M2d bsv_M2d_rotation(const double rad_angle)
{
	bsv_M2d ret = {	cos(rad_angle), -sin(rad_angle), 
					sin(rad_angle),  cos(rad_angle)};
	return ret;
}

static inline bsv_M2d bsv_M2d_scale(const double scale_factor)
{
	bsv_M2d ret = {scale_factor, 0., 0., scale_factor};
	return ret;
}

static inline bsv_M2d bsv_M2d_plus(const bsv_M2d self, const bsv_M2d other)
{
	bsv_M2d ret;
	ret.x[0][0] = self.x[0][0] + other.x[0][0];
	ret.x[0][1] = self.x[0][1] + other.x[0][1];
	ret.x[1][0] = self.x[1][0] + other.x[1][0];
	ret.x[1][1] = self.x[1][1] + other.x[1][1];
	return ret;
}

static inline bsv_M2d bsv_M2d_minus(const bsv_M2d self, const bsv_M2d other)
{
	bsv_M2d ret;
	ret.x[0][0] = self.x[0][0] - other.x[0][0];
	ret.x[0][1] = self.x[0][1] - other.x[0][1];
	ret.x[1][0] = self.x[1][0] - other.x[1][0];
	ret.x[1][1] = self.x[1][1] - other.x[1][1];
	return ret;
}

static inline bsv_M2d bsv_M2d_uminus(const bsv_M2d self)
{
	bsv_M2d ret;
	ret.x[0][0] = -self.x[0][0];
	ret.x[0][1] = -self.x[0][1];
	ret.x[1][0] = -self.x[1][0];
	ret.x[1][1] = -self.x[1][1];
	return ret;
}

static inline bsv_M2d bsv_M2d_mult(const bsv_M2d self, const double mult)
{
	bsv_M2d ret;
	ret.x[0][0] = self.x[0][0] * mult;
	ret.x[0][1] = self.x[0][1] * mult;
	ret.x[1][0] = self.x[1][0] * mult;
	ret.x[1][1] = self.x[1][1] * mult;
	return ret;
}

static inline bsv_M2d bsv_M2d_div(const bsv_M2d self, const double divisor)
{
	bsv_M2d ret;
	ret.x[0][0] = self.x[0][0] / divisor;
	ret.x[0][1] = self.x[0][1] / divisor;
	ret.x[1][0] = self.x[1][0] / divisor;
	ret.x[1][1] = self.x[1][1] / divisor;
	return ret;
}

static inline bsv_V2d bsv_M2d_vmult(const bsv_M2d self, const bsv_V2d other)
{
	bsv_V2d ret;
	ret.x[0] = self.x[0][0] * other.x[0] + self.x[0][1] * other.x[1];
	ret.x[1] = self.x[1][0] * other.x[0] + self.x[1][1] * other.x[1];
	return ret;
}
	
static inline bsv_M2d bsv_M2d_mmult(const bsv_M2d self, const bsv_M2d other)
{
	bsv_M2d ret;
	ret.x[0][0] = self.x[0][0] * other.x[0][0] + self.x[0][1] * other.x[1][0];
	ret.x[0][1] = self.x[0][0] * other.x[0][1] + self.x[0][1] * other.x[1][1];
	ret.x[1][0] = self.x[1][0] * other.x[0][0] + self.x[1][1] * other.x[1][0];
	ret.x[1][1] = self.x[1][0] * other.x[0][1] + self.x[1][1] * other.x[1][1];
	return ret;
}

static inline double bsv_M2d_norm(const bsv_M2d self) 
{
	double ret = 0.0;
	ret = self.x[0][0] * self.x[0][0] +
		self.x[0][1] * self.x[0][1] +
		self.x[1][0] * self.x[1][0] +
		self.x[1][1] * self.x[1][1];
	return sqrt(ret);
}

static inline double bsv_M2d_det(const bsv_M2d self)
{
	double ret;
	ret = self.x[0][0] * self.x[1][1] - self.x[0][1] * self.x[1][0];
	return ret;
}

static inline bsv_M2d bsv_M2d_inv(const bsv_M2d self)
{
	bsv_M2d ret;
	double rdet = 1. / bsv_M2d_det(self);
	ret.x[0][0] =  rdet * self.x[1][1];
	ret.x[0][1] = -rdet * self.x[0][1];
	ret.x[1][0] = -rdet * self.x[1][0];
	ret.x[1][1] =  rdet * self.x[0][0];
	return ret;
}

static inline bsv_M2d bsv_M2d_transpose(const bsv_M2d self)
{
	bsv_M2d ret;
	ret.x[0][0] = self.x[0][0];
	ret.x[0][1] = self.x[1][0];
	ret.x[1][0] = self.x[0][1];
	ret.x[1][1] = self.x[1][1];
	return ret;
}

static inline int bsv_M2d_isequal(const bsv_M2d self, const bsv_M2d other)
{
	int retv;
	if ((self.x[0][0] == other.x[0][0]) &&
		(self.x[0][1] == other.x[0][1]) &&
		(self.x[1][0] == other.x[1][0]) &&
		(self.x[1][1] == other.x[1][1])) 
	{
		retv = 1;
	}
	else {
		retv = 0;
	}
	return retv;
}

static inline int bsv_M2d_isnequal(const bsv_M2d self, const bsv_M2d other)
{
	return !bsv_M2d_isequal(self, other);
}

static inline bsv_M2f bsv_M2d_toM2f(const bsv_M2d self)
{
	bsv_M2f ret;
	ret.x[0][0] = (float)self.x[0][0];
	ret.x[0][1] = (float)self.x[0][1];
	ret.x[1][0] = (float)self.x[1][0];
	ret.x[1][1] = (float)self.x[1][1];
	return ret;
}

/* M2f ---------------------------------------------------------------------*/

static inline bsv_M2f bsv_M2f_zero(void)
{
	bsv_M2f ret = {0.f, 0.f, 0.f, 0.f};
	return ret;
}

static inline bsv_M2f bsv_M2f_ones(void)
{
	bsv_M2f ret = {1.f, 1.f, 1.f, 1.f};
	return ret;
}

static inline bsv_M2f bsv_M2f_identity(void)
{
	bsv_M2f ret = {1.f, 0.f, 0.f, 1.f};
	return ret;
}

static inline bsv_M2f bsv_M2f_rotation(const float rad_angle)
{
	bsv_M2f ret = {	cosf(rad_angle), -sinf(rad_angle), 
					sinf(rad_angle),  cosf(rad_angle)};
	return ret;
}

static inline bsv_M2f bsv_M2f_scale(const float scale_factor)
{
	bsv_M2f ret = {scale_factor, 0.f, 0.f, scale_factor};
	return ret;
}

static inline bsv_M2f bsv_M2f_plus(const bsv_M2f self, const bsv_M2f other)
{
	bsv_M2f ret;
	ret.x[0][0] = self.x[0][0] + other.x[0][0];
	ret.x[0][1] = self.x[0][1] + other.x[0][1];
	ret.x[1][0] = self.x[1][0] + other.x[1][0];
	ret.x[1][1] = self.x[1][1] + other.x[1][1];
	return ret;
}

static inline bsv_M2f bsv_M2f_minus(const bsv_M2f self, const bsv_M2f other)
{
	bsv_M2f ret;
	ret.x[0][0] = self.x[0][0] - other.x[0][0];
	ret.x[0][1] = self.x[0][1] - other.x[0][1];
	ret.x[1][0] = self.x[1][0] - other.x[1][0];
	ret.x[1][1] = self.x[1][1] - other.x[1][1];
	return ret;
}

static inline bsv_M2f bsv_M2f_uminus(const bsv_M2f self)
{
	bsv_M2f ret;
	ret.x[0][0] = -self.x[0][0];
	ret.x[0][1] = -self.x[0][1];
	ret.x[1][0] = -self.x[1][0];
	ret.x[1][1] = -self.x[1][1];
	return ret;
}

static inline bsv_M2f bsv_M2f_mult(const bsv_M2f self, const float mult)
{
	bsv_M2f ret;
	ret.x[0][0] = self.x[0][0] * mult;
	ret.x[0][1] = self.x[0][1] * mult;
	ret.x[1][0] = self.x[1][0] * mult;
	ret.x[1][1] = self.x[1][1] * mult;
	return ret;
}

static inline bsv_M2f bsv_M2f_div(const bsv_M2f self, const float divisor)
{
	bsv_M2f ret;
	ret.x[0][0] = self.x[0][0] / divisor;
	ret.x[0][1] = self.x[0][1] / divisor;
	ret.x[1][0] = self.x[1][0] / divisor;
	ret.x[1][1] = self.x[1][1] / divisor;
	return ret;
}

static inline bsv_V2f bsv_M2f_vmult(const bsv_M2f self, const bsv_V2f other)
{
	bsv_V2f ret;
	ret.x[0] = self.x[0][0] * other.x[0] + self.x[0][1] * other.x[1];
	ret.x[1] = self.x[1][0] * other.x[0] + self.x[1][1] * other.x[1];
	return ret;
}
	
static inline bsv_M2f bsv_M2f_mmult(const bsv_M2f self, const bsv_M2f other)
{
	bsv_M2f ret;
	ret.x[0][0] = self.x[0][0] * other.x[0][0] + self.x[0][1] * other.x[1][0];
	ret.x[0][1] = self.x[0][0] * other.x[0][1] + self.x[0][1] * other.x[1][1];
	ret.x[1][0] = self.x[1][0] * other.x[0][0] + self.x[1][1] * other.x[1][0];
	ret.x[1][1] = self.x[1][0] * other.x[0][1] + self.x[1][1] * other.x[1][1];
	return ret;
}

static inline float bsv_M2f_norm(const bsv_M2f self) 
{
	float ret = 0;
	ret =	self.x[0][0] * self.x[0][0]		+
			self.x[0][1] * self.x[0][1]		+
			self.x[1][0] * self.x[1][0]		+
			self.x[1][1] * self.x[1][1];
	return sqrtf(ret);
}

static inline float bsv_M2f_det(const bsv_M2f self)
{
	float ret;
	ret = self.x[0][0] * self.x[1][1] - self.x[0][1] * self.x[1][0];
	return ret;
}

static inline bsv_M2f bsv_M2f_inv(const bsv_M2f self)
{
	bsv_M2f ret;
	float rdet = 1.f / bsv_M2f_det(self);
	ret.x[0][0] =  rdet * self.x[1][1];
	ret.x[0][1] = -rdet * self.x[0][1];
	ret.x[1][0] = -rdet * self.x[1][0];
	ret.x[1][1] =  rdet * self.x[0][0];
	return ret;
}

static inline bsv_M2f bsv_M2f_transpose(const bsv_M2f self)
{
	bsv_M2f ret;
	ret.x[0][0] = self.x[0][0];
	ret.x[0][1] = self.x[1][0];
	ret.x[1][0] = self.x[0][1];
	ret.x[1][1] = self.x[1][1];
	return ret;
}

static inline int bsv_M2f_isequal(const bsv_M2f self, const bsv_M2f other)
{
	int retv;
	if ((self.x[0][0] == other.x[0][0]) &&
		(self.x[0][1] == other.x[0][1]) &&
		(self.x[1][0] == other.x[1][0]) &&
		(self.x[1][1] == other.x[1][1])) 
	{
		retv = 1;
	}
	else {
		retv = 0;
	}
	return retv;
}

static inline int bsv_M2f_isnequal(const bsv_M2f self, const bsv_M2f other)
{
	return !bsv_M2f_isequal(self, other);
}

static inline bsv_M2d bsv_M2f_toM2d(const bsv_M2f self)
{
	bsv_M2d ret;
	ret.x[0][0] = (double)self.x[0][0];
	ret.x[0][1] = (double)self.x[0][1];
	ret.x[1][0] = (double)self.x[1][0];
	ret.x[1][1] = (double)self.x[1][1];
	return ret;
}

#endif /* LIBBSV_H */
