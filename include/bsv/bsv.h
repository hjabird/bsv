#ifndef LIBBSV_H
#define LIBBSV_H
/*============================================================================
bsv.h

Bird small vectors library.

Copyright(c) 2018 HJA Bird

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
#include <stdbool.h>

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
static inline bool bsv_V3f_isequal(const bsv_V3f self, const bsv_V3f other);
static inline bool bsv_V3f_isnequal(const bsv_V3f self, const bsv_V3f other);
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
static inline bool bsv_V3d_isequal(const bsv_V3d self, const bsv_V3d other);
static inline bool bsv_V3d_isnequal(const bsv_V3d self, const bsv_V3d other);
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
static inline bool bsv_V2f_isequal(const bsv_V2f self, const bsv_V2f other);
static inline bool bsv_V2f_isnequal(const bsv_V2f self, const bsv_V2f other);
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
static inline bool bsv_V2d_isequal(const bsv_V2d self, const bsv_V2d other);
static inline bool bsv_V2d_isnequal(const bsv_V2d self, const bsv_V2d other);
static inline bsv_V2f bsv_V2d_toV2f(const bsv_V2d input);


/* IMPLEMENTATION ----------------------------------------------------------*/

#include <math.h>

/* V3f */
float bsv_V3f_abs(const bsv_V3f self) {
	float a, b, c;
	a = powf(self.x[0], 2);
	b = powf(self.x[1], 2);
	c = powf(self.x[2], 2);
	return sqrtf(a + b + c);
}

float bsv_V3f_dot(const bsv_V3f self, const bsv_V3f other) {
	float a, b, c;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	c = self.x[2] * other.x[2];
	return a + b + c;
}

bsv_V3f bsv_V3f_zero(void) {
	bsv_V3f ret;
	ret.x[0] = 0.0;
	ret.x[1] = 0.0;
	ret.x[2] = 0.0;
	return ret;
}

bsv_V3f bsv_V3f_cross(const bsv_V3f self, const bsv_V3f other) {
	bsv_V3f ret;
	ret.x[0] = self.x[1] * other.x[2] -
		self.x[2] * other.x[1];
	ret.x[1] = self.x[2] * other.x[0] -
		self.x[0] * other.x[2];
	ret.x[2] = self.x[0] * other.x[1] -
		self.x[1] * other.x[0];
	return ret;
}

bsv_V3f bsv_V3f_plus(const bsv_V3f self, const bsv_V3f other) {
	bsv_V3f ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	ret.x[2] = self.x[2] + other.x[2];
	return ret;
}

bsv_V3f bsv_V3f_minus(const bsv_V3f self, const bsv_V3f other) {
	bsv_V3f ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	ret.x[2] = self.x[2] - other.x[2];
	return ret;
}

bsv_V3f bsv_V3f_uminus(const bsv_V3f self) {
	bsv_V3f ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	ret.x[2] = -self.x[2];
	return ret;
}

bsv_V3f bsv_V3f_mult(const bsv_V3f self, const float multiplier) {
	bsv_V3f ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	ret.x[2] = self.x[2] * multiplier;
	return ret;
}

bsv_V3f bsv_V3f_div(const bsv_V3f self, const float div) {
	bsv_V3f ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	ret.x[2] = self.x[2] / div;
	return ret;
}

bsv_V3f bsv_V3f_unit(const bsv_V3f self){
    bsv_V3f ret = self;
    ret = bsv_V3f_div(ret, bsv_V3f_abs(ret));
    return ret;
}

bool bsv_V3f_isequal(const bsv_V3f self, const bsv_V3f other) {
	bool retv;
	if ((self.x[0] == other.x[0]) &&
		(self.x[1] == other.x[1]) &&
		(self.x[2] == other.x[2])) {

		retv = true;
	}
	else {
		retv = false;
	}
	return retv;
}

bool bsv_V3f_isnequal(const bsv_V3f self, const bsv_V3f other) {
	return !bsv_V3f_isequal(self, other);
}

bsv_V3d bsv_V3f_toV3d(const bsv_V3f input){
    bsv_V3d ret;
    ret.x[0] = input.x[0];
    ret.x[1] = input.x[1];
    ret.x[2] = input.x[2];
    return ret;
}

/* V3d */
double bsv_V3d_abs(const bsv_V3d self) {
	double a, b, c;
	a = pow(self.x[0], 2);
	b = pow(self.x[1], 2);
	c = pow(self.x[2], 2);
	return sqrt(a + b + c);
}

double bsv_V3d_dot(const bsv_V3d self, const bsv_V3d other) {
	double a, b, c;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	c = self.x[2] * other.x[2];
	return a + b + c;
}

bsv_V3d bsv_V3d_zero(void) {
	bsv_V3d ret;
	ret.x[0] = 0.0f;
	ret.x[1] = 0.0f;
	ret.x[2] = 0.0f;
	return ret;
}

bsv_V3d bsv_V3d_cross(const bsv_V3d self, const bsv_V3d other) {
	bsv_V3d ret;
	ret.x[0] = self.x[1] * other.x[2] -
		self.x[2] * other.x[1];
	ret.x[1] = self.x[2] * other.x[0] -
		self.x[0] * other.x[2];
	ret.x[2] = self.x[0] * other.x[1] -
		self.x[1] * other.x[0];
	return ret;
}

bsv_V3d bsv_V3d_plus(const bsv_V3d self, const bsv_V3d other) {
	bsv_V3d ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	ret.x[2] = self.x[2] + other.x[2];
	return ret;
}

bsv_V3d bsv_V3d_minus(const bsv_V3d self, const bsv_V3d other) {
	bsv_V3d ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	ret.x[2] = self.x[2] - other.x[2];
	return ret;
}

bsv_V3d bsv_V3d_uminus(const bsv_V3d self) {
	bsv_V3d ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	ret.x[2] = -self.x[2];
	return ret;
}

bsv_V3d bsv_V3d_mult(const bsv_V3d self, const double multiplier) {
	bsv_V3d ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	ret.x[2] = self.x[2] * multiplier;
	return ret;
}

bsv_V3d bsv_V3d_div(const bsv_V3d self, const double div) {
	bsv_V3d ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	ret.x[2] = self.x[2] / div;
	return ret;
}

bsv_V3d bsv_V3d_unit(const bsv_V3d self){
    bsv_V3d ret = self;
    ret = bsv_V3d_div(ret, bsv_V3d_abs(ret));
    return ret;
}

bool bsv_V3d_isequal(const bsv_V3d self, const bsv_V3d other) {
	bool retv;
	if ((self.x[0] == other.x[0]) &&
		(self.x[1] == other.x[1]) &&
		(self.x[2] == other.x[2])) {

		retv = true;
	}
	else {
		retv = false;
	}
	return retv;
}

bool bsv_V3d_isnequal(const bsv_V3d self, const bsv_V3d other) {
	return !bsv_V3d_isequal(self, other);
}

bsv_V3f bsv_V3d_toV3f(const bsv_V3d input){
    bsv_V3f ret;
    ret.x[0] = (float)input.x[0];
    ret.x[1] = (float)input.x[1];
    ret.x[2] = (float)input.x[2];
    return ret;
}

/* V2f */
float bsv_V2f_abs(const bsv_V2f self) {
	float a, b;
	a = powf(self.x[0], 2);
	b = powf(self.x[1], 2);
	return sqrtf(a + b);
}

float bsv_V2f_dot(const bsv_V2f self, const bsv_V2f other) {
	float a, b;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	return a + b;
}

bsv_V2f bsv_V2f_zero(void) {
	bsv_V2f ret;
	ret.x[0] = 0.0f;
	ret.x[1] = 0.0f;
	return ret;
}

bsv_V2f bsv_V2f_plus(const bsv_V2f self, const bsv_V2f other) {
	bsv_V2f ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	return ret;
}

bsv_V2f bsv_V2f_minus(const bsv_V2f self, const bsv_V2f other) {
	bsv_V2f ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	return ret;
}

bsv_V2f bsv_V2f_uminus(const bsv_V2f self) {
	bsv_V2f ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	return ret;
}

bsv_V2f bsv_V2f_mult(const bsv_V2f self, const float multiplier) {
	bsv_V2f ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	return ret;
}

bsv_V2f bsv_V2f_div(const bsv_V2f self, const float div) {
	bsv_V2f ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	return ret;
}

bsv_V2f bsv_V2f_unit(const bsv_V2f self){
    bsv_V2f ret = self;
    ret = bsv_V2f_div(ret, bsv_V2f_abs(ret));
    return ret;
}

bool bsv_V2f_isequal(const bsv_V2f self, const bsv_V2f other) {
	bool retv;
	if ((self.x[0] == other.x[0]) &&
		(self.x[1] == other.x[1])) {

		retv = true;
	}
	else {
		retv = false;
	}
	return retv;
}

bool bsv_V2f_isnequal(const bsv_V2f self, const bsv_V2f other) {
	return !bsv_V2f_isequal(self, other);
}

bsv_V2d bsv_V2f_toV2d(const bsv_V2f input){
    bsv_V2d ret;
    ret.x[0] = input.x[0];
    ret.x[1] = input.x[1];
    return ret;
}

/* V2d */
double bsv_V2d_abs(const bsv_V2d self) {
	double a, b;
	a = pow(self.x[0], 2);
	b = pow(self.x[1], 2);
	return sqrt(a + b);
}

double bsv_V2d_dot(const bsv_V2d self, const bsv_V2d other) {
	double a, b;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	return a + b;
}

bsv_V2d  bsv_V2d_zero(void) {
	bsv_V2d ret;
	ret.x[0] = 0.0;
	ret.x[1] = 0.0;
	return ret;
}

bsv_V2d bsv_V2d_plus(const bsv_V2d self, const bsv_V2d other) {
	bsv_V2d ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	return ret;
}

bsv_V2d bsv_V2d_minus(const bsv_V2d self, const bsv_V2d other) {
	bsv_V2d ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	return ret;
}

bsv_V2d bsv_V2d_uminus(const bsv_V2d self) {
	bsv_V2d ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	return ret;
}

bsv_V2d bsv_V2d_mult(const bsv_V2d self, const double multiplier) {
	bsv_V2d ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	return ret;
}

bsv_V2d bsv_V2d_div(const bsv_V2d self, const double div) {
	bsv_V2d ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	return ret;
}

bsv_V2d bsv_V2d_unit(const bsv_V2d self){
    bsv_V2d ret = self;
    ret = bsv_V2d_div(ret, bsv_V2d_abs(ret));
    return ret;
}

bool bsv_V2d_isequal(const bsv_V2d self, const bsv_V2d other) {
	bool retv;
	if ((self.x[0] == other.x[0]) &&
		(self.x[1] == other.x[1])) {

		retv = true;
	}
	else {
		retv = false;
	}
	return retv;
}

bool bsv_V2d_isnequal(const bsv_V2d self, const bsv_V2d other) {
	return !bsv_V2d_isequal(self, other);
}

bsv_V2f bsv_V2d_toV2f(const bsv_V2d input){
    bsv_V2f ret;
    ret.x[0] = (float)input.x[0];
    ret.x[1] = (float)input.x[1];
    return ret;
}
#endif /* LIBBSV_H */
