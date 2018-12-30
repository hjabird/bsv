#ifndef LIBMINVEC_H
#define LIBMINVEC_H
/*============================================================================
minvec.h

A minimal vector library.

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

typedef struct mvec_Vec3f{
	float x[3];
} mvec_Vec3f;

typedef struct mvec_Vec3d{
    double x[3];
} mvec_Vec3d;

typedef struct mvec_Vec2f{
	float x[2];
} mvec_Vec2f;

typedef struct mvec_Vec2d{
    double x[2];
} mvec_Vec2d;

static inline float mvec_Vec3f_abs(const mvec_Vec3f self);
static inline float mvec_Vec3f_dot(const mvec_Vec3f self, const mvec_Vec3f other);
static inline mvec_Vec3f mvec_Vec3f_cross(const mvec_Vec3f self, const mvec_Vec3f other);
static inline mvec_Vec3f mvec_Vec3f_plus(const mvec_Vec3f self, const mvec_Vec3f other);
static inline mvec_Vec3f mvec_Vec3f_minus(const mvec_Vec3f self, const mvec_Vec3f other);
static inline mvec_Vec3f mvec_Vec3f_uminus(const mvec_Vec3f self);
static inline mvec_Vec3f mvec_Vec3f_mult(const mvec_Vec3f self, const float multiplier);
static inline mvec_Vec3f mvec_Vec3f_div(const mvec_Vec3f self, const float div);
static inline mvec_Vec3f mvec_Vec3f_unit(const mvec_Vec3f self);
static inline mvec_Vec3f mvec_Vec3f_zero(void);
static inline bool mvec_Vec3f_isequal(const mvec_Vec3f self, const mvec_Vec3f other);
static inline bool mvec_Vec3f_isnequal(const mvec_Vec3f self, const mvec_Vec3f other);
static inline mvec_Vec3d mvec_Vec3f_toVec3d(const mvec_Vec3f input);

static inline double mvec_Vec3d_abs(const mvec_Vec3d self);
static inline double mvec_Vec3d_dot(const mvec_Vec3d self, const mvec_Vec3d other);
static inline mvec_Vec3d mvec_Vec3d_cross(const mvec_Vec3d self, const mvec_Vec3d other);
static inline mvec_Vec3d mvec_Vec3d_plus(const mvec_Vec3d self, const mvec_Vec3d other);
static inline mvec_Vec3d mvec_Vec3d_minus(const mvec_Vec3d self, const mvec_Vec3d other);
static inline mvec_Vec3d mvec_Vec3d_uminus(const mvec_Vec3d self);
static inline mvec_Vec3d mvec_Vec3d_mult(const mvec_Vec3d self, const double multiplier);
static inline mvec_Vec3d mvec_Vec3d_div(const mvec_Vec3d self, const double div);
static inline mvec_Vec3d mvec_Vec3d_unit(const mvec_Vec3d self);
static inline mvec_Vec3d mvec_Vec3d_zero(void);
static inline bool mvec_Vec3d_isequal(const mvec_Vec3d self, const mvec_Vec3d other);
static inline bool mvec_Vec3d_isnequal(const mvec_Vec3d self, const mvec_Vec3d other);
static inline mvec_Vec3f mvec_Vec3d_toVec3f(const mvec_Vec3d input);

static inline float mvec_Vec2f_abs(const mvec_Vec2f self);
static inline float mvec_Vec2f_dot(const mvec_Vec2f self, const mvec_Vec2f other);
static inline mvec_Vec2f mvec_Vec2f_plus(const mvec_Vec2f self, const mvec_Vec2f other);
static inline mvec_Vec2f mvec_Vec2f_minus(const mvec_Vec2f self, const mvec_Vec2f other);
static inline mvec_Vec2f mvec_Vec2f_uminus(const mvec_Vec2f self);
static inline mvec_Vec2f mvec_Vec2f_mult(const mvec_Vec2f self, const float multiplier);
static inline mvec_Vec2f mvec_Vec2f_div(const mvec_Vec2f self, const float div);
static inline mvec_Vec2f mvec_Vec2f_unit(const mvec_Vec2f self);
static inline mvec_Vec2f mvec_Vec2f_zero(void);
static inline bool mvec_Vec2f_isequal(const mvec_Vec2f self, const mvec_Vec2f other);
static inline bool mvec_Vec2f_isnequal(const mvec_Vec2f self, const mvec_Vec2f other);
static inline mvec_Vec2d mvec_Vec2f_toVec2d(const mvec_Vec2f input);

static inline double mvec_Vec2d_abs(const mvec_Vec2d self);
static inline double mvec_Vec2d_dot(const mvec_Vec2d self, const mvec_Vec2d other);
static inline mvec_Vec2d mvec_Vec2d_plus(const mvec_Vec2d self, const mvec_Vec2d other);
static inline mvec_Vec2d mvec_Vec2d_minus(const mvec_Vec2d self, const mvec_Vec2d other);
static inline mvec_Vec2d mvec_Vec2d_uminus(const mvec_Vec2d self);
static inline mvec_Vec2d mvec_Vec2d_mult(const mvec_Vec2d self, const double multiplier);
static inline mvec_Vec2d mvec_Vec2d_div(const mvec_Vec2d self, const double div);
static inline mvec_Vec2d mvec_Vec2d_unit(const mvec_Vec2d self);
static inline mvec_Vec2d mvec_Vec2d_zero(void);
static inline bool mvec_Vec2d_isequal(const mvec_Vec2d self, const mvec_Vec2d other);
static inline bool mvec_Vec2d_isnequal(const mvec_Vec2d self, const mvec_Vec2d other);
static inline mvec_Vec2f mvec_Vec2d_toVec2f(const mvec_Vec2d input);


/* IMPLEMENTATION ----------------------------------------------------------*/

#include <math.h>

/* Vec3f */
float mvec_Vec3f_abs(const mvec_Vec3f self) {
	float a, b, c;
	a = powf(self.x[0], 2);
	b = powf(self.x[1], 2);
	c = powf(self.x[2], 2);
	return sqrtf(a + b + c);
}

float mvec_Vec3f_dot(const mvec_Vec3f self, const mvec_Vec3f other) {
	float a, b, c;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	c = self.x[2] * other.x[2];
	return a + b + c;
}

mvec_Vec3f mvec_Vec3f_zero(void) {
	mvec_Vec3f ret;
	ret.x[0] = 0.0;
	ret.x[1] = 0.0;
	ret.x[2] = 0.0;
	return ret;
}

mvec_Vec3f mvec_Vec3f_cross(const mvec_Vec3f self, const mvec_Vec3f other) {
	mvec_Vec3f ret;
	ret.x[0] = self.x[1] * other.x[2] -
		self.x[2] * other.x[1];
	ret.x[1] = self.x[2] * other.x[0] -
		self.x[0] * other.x[2];
	ret.x[2] = self.x[0] * other.x[1] -
		self.x[1] * other.x[0];
	return ret;
}

mvec_Vec3f mvec_Vec3f_plus(const mvec_Vec3f self, const mvec_Vec3f other) {
	mvec_Vec3f ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	ret.x[2] = self.x[2] + other.x[2];
	return ret;
}

mvec_Vec3f mvec_Vec3f_minus(const mvec_Vec3f self, const mvec_Vec3f other) {
	mvec_Vec3f ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	ret.x[2] = self.x[2] - other.x[2];
	return ret;
}

mvec_Vec3f mvec_Vec3f_uminus(const mvec_Vec3f self) {
	mvec_Vec3f ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	ret.x[2] = -self.x[2];
	return ret;
}

mvec_Vec3f mvec_Vec3f_mult(const mvec_Vec3f self, const float multiplier) {
	mvec_Vec3f ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	ret.x[2] = self.x[2] * multiplier;
	return ret;
}

mvec_Vec3f mvec_Vec3f_div(const mvec_Vec3f self, const float div) {
	mvec_Vec3f ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	ret.x[2] = self.x[2] / div;
	return ret;
}

mvec_Vec3f mvec_Vec3f_unit(const mvec_Vec3f self){
    mvec_Vec3f ret = self;
    ret = mvec_Vec3f_div(ret, mvec_Vec3f_abs(ret));
    return ret;
}

bool mvec_Vec3f_isequal(const mvec_Vec3f self, const mvec_Vec3f other) {
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

bool mvec_Vec3f_isnequal(const mvec_Vec3f self, const mvec_Vec3f other) {
	return !mvec_Vec3f_isequal(self, other);
}

mvec_Vec3d mvec_Vec3f_toVec3d(const mvec_Vec3f input){
    mvec_Vec3d ret;
    ret.x[0] = input.x[0];
    ret.x[1] = input.x[1];
    ret.x[2] = input.x[2];
    return ret;
}

/* Vec3d */
double mvec_Vec3d_abs(const mvec_Vec3d self) {
	double a, b, c;
	a = pow(self.x[0], 2);
	b = pow(self.x[1], 2);
	c = pow(self.x[2], 2);
	return sqrt(a + b + c);
}

double mvec_Vec3d_dot(const mvec_Vec3d self, const mvec_Vec3d other) {
	double a, b, c;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	c = self.x[2] * other.x[2];
	return a + b + c;
}

mvec_Vec3d mvec_Vec3d_zero(void) {
	mvec_Vec3d ret;
	ret.x[0] = 0.0f;
	ret.x[1] = 0.0f;
	ret.x[2] = 0.0f;
	return ret;
}

mvec_Vec3d mvec_Vec3d_cross(const mvec_Vec3d self, const mvec_Vec3d other) {
	mvec_Vec3d ret;
	ret.x[0] = self.x[1] * other.x[2] -
		self.x[2] * other.x[1];
	ret.x[1] = self.x[2] * other.x[0] -
		self.x[0] * other.x[2];
	ret.x[2] = self.x[0] * other.x[1] -
		self.x[1] * other.x[0];
	return ret;
}

mvec_Vec3d mvec_Vec3d_plus(const mvec_Vec3d self, const mvec_Vec3d other) {
	mvec_Vec3d ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	ret.x[2] = self.x[2] + other.x[2];
	return ret;
}

mvec_Vec3d mvec_Vec3d_minus(const mvec_Vec3d self, const mvec_Vec3d other) {
	mvec_Vec3d ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	ret.x[2] = self.x[2] - other.x[2];
	return ret;
}

mvec_Vec3d mvec_Vec3d_uminus(const mvec_Vec3d self) {
	mvec_Vec3d ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	ret.x[2] = -self.x[2];
	return ret;
}

mvec_Vec3d mvec_Vec3d_mult(const mvec_Vec3d self, const double multiplier) {
	mvec_Vec3d ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	ret.x[2] = self.x[2] * multiplier;
	return ret;
}

mvec_Vec3d mvec_Vec3d_div(const mvec_Vec3d self, const double div) {
	mvec_Vec3d ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	ret.x[2] = self.x[2] / div;
	return ret;
}

mvec_Vec3d mvec_Vec3d_unit(const mvec_Vec3d self){
    mvec_Vec3d ret = self;
    ret = mvec_Vec3d_div(ret, mvec_Vec3d_abs(ret));
    return ret;
}

bool mvec_Vec3d_isequal(const mvec_Vec3d self, const mvec_Vec3d other) {
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

bool mvec_Vec3d_isnequal(const mvec_Vec3d self, const mvec_Vec3d other) {
	return !mvec_Vec3d_isequal(self, other);
}

mvec_Vec3f mvec_Vec3d_toVec3f(const mvec_Vec3d input){
    mvec_Vec3f ret;
    ret.x[0] = (float)input.x[0];
    ret.x[1] = (float)input.x[1];
    ret.x[2] = (float)input.x[2];
    return ret;
}

/* Vec2f */
float mvec_Vec2f_abs(const mvec_Vec2f self) {
	float a, b;
	a = powf(self.x[0], 2);
	b = powf(self.x[1], 2);
	return sqrtf(a + b);
}

float mvec_Vec2f_dot(const mvec_Vec2f self, const mvec_Vec2f other) {
	float a, b;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	return a + b;
}

mvec_Vec2f mvec_Vec2f_zero(void) {
	mvec_Vec2f ret;
	ret.x[0] = 0.0f;
	ret.x[1] = 0.0f;
	return ret;
}

mvec_Vec2f mvec_Vec2f_plus(const mvec_Vec2f self, const mvec_Vec2f other) {
	mvec_Vec2f ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	return ret;
}

mvec_Vec2f mvec_Vec2f_minus(const mvec_Vec2f self, const mvec_Vec2f other) {
	mvec_Vec2f ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	return ret;
}

mvec_Vec2f mvec_Vec2f_uminus(const mvec_Vec2f self) {
	mvec_Vec2f ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	return ret;
}

mvec_Vec2f mvec_Vec2f_mult(const mvec_Vec2f self, const float multiplier) {
	mvec_Vec2f ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	return ret;
}

mvec_Vec2f mvec_Vec2f_div(const mvec_Vec2f self, const float div) {
	mvec_Vec2f ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	return ret;
}

mvec_Vec2f mvec_Vec2f_unit(const mvec_Vec2f self){
    mvec_Vec2f ret = self;
    ret = mvec_Vec2f_div(ret, mvec_Vec2f_abs(ret));
    return ret;
}

bool mvec_Vec2f_isequal(const mvec_Vec2f self, const mvec_Vec2f other) {
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

bool mvec_Vec2f_isnequal(const mvec_Vec2f self, const mvec_Vec2f other) {
	return !mvec_Vec2f_isequal(self, other);
}

mvec_Vec2d mvec_Vec2f_toVec2d(const mvec_Vec2f input){
    mvec_Vec2d ret;
    ret.x[0] = input.x[0];
    ret.x[1] = input.x[1];
    return ret;
}

/* Vec2d */
double mvec_Vec2d_abs(const mvec_Vec2d self) {
	double a, b;
	a = pow(self.x[0], 2);
	b = pow(self.x[1], 2);
	return sqrt(a + b);
}

double mvec_Vec2d_dot(const mvec_Vec2d self, const mvec_Vec2d other) {
	double a, b;
	a = self.x[0] * other.x[0];
	b = self.x[1] * other.x[1];
	return a + b;
}

mvec_Vec2d  mvec_Vec2d_zero(void) {
	mvec_Vec2d ret;
	ret.x[0] = 0.0;
	ret.x[1] = 0.0;
	return ret;
}

mvec_Vec2d mvec_Vec2d_plus(const mvec_Vec2d self, const mvec_Vec2d other) {
	mvec_Vec2d ret;
	ret.x[0] = self.x[0] + other.x[0];
	ret.x[1] = self.x[1] + other.x[1];
	return ret;
}

mvec_Vec2d mvec_Vec2d_minus(const mvec_Vec2d self, const mvec_Vec2d other) {
	mvec_Vec2d ret;
	ret.x[0] = self.x[0] - other.x[0];
	ret.x[1] = self.x[1] - other.x[1];
	return ret;
}

mvec_Vec2d mvec_Vec2d_uminus(const mvec_Vec2d self) {
	mvec_Vec2d ret;
	ret.x[0] = -self.x[0];
	ret.x[1] = -self.x[1];
	return ret;
}

mvec_Vec2d mvec_Vec2d_mult(const mvec_Vec2d self, const double multiplier) {
	mvec_Vec2d ret;
	ret.x[0] = self.x[0] * multiplier;
	ret.x[1] = self.x[1] * multiplier;
	return ret;
}

mvec_Vec2d mvec_Vec2d_div(const mvec_Vec2d self, const double div) {
	mvec_Vec2d ret;
	ret.x[0] = self.x[0] / div;
	ret.x[1] = self.x[1] / div;
	return ret;
}

mvec_Vec2d mvec_Vec2d_unit(const mvec_Vec2d self){
    mvec_Vec2d ret = self;
    ret = mvec_Vec2d_div(ret, mvec_Vec2d_abs(ret));
    return ret;
}

bool mvec_Vec2d_isequal(const mvec_Vec2d self, const mvec_Vec2d other) {
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

bool mvec_Vec2d_isnequal(const mvec_Vec2d self, const mvec_Vec2d other) {
	return !mvec_Vec2d_isequal(self, other);
}

mvec_Vec2f mvec_Vec2d_toVec2f(const mvec_Vec2d input){
    mvec_Vec2f ret;
    ret.x[0] = (float)input.x[0];
    ret.x[1] = (float)input.x[1];
    return ret;
}
#endif /* LIBMINVEC_H */
