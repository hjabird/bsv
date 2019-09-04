#ifndef BSV_TYPES_H
#define BSV_TYPES_H
/*============================================================================
bsv_types.h

Structure definitions for small vectors / matrices library.

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

typedef struct bsv_V4f {
	float x[4];
} bsv_V4f;

typedef struct bsv_V4d {
	double x[4];
} bsv_V4d;

typedef struct bsv_V3f {
	float x[3];
} bsv_V3f;

typedef struct bsv_V3d {
	double x[3];
} bsv_V3d;

typedef struct bsv_V2f {
	float x[2];
} bsv_V2f;

typedef struct bsv_V2d {
	double x[2];
} bsv_V2d;

/* Matrices ------------*/

typedef struct bsv_M4f {
	float x[4][4];
} bsv_M4f;

typedef struct bsv_M4d {
	double x[4][4];
} bsv_M4d;

typedef struct bsv_M3f {
	float x[3][3];
} bsv_M3f;

typedef struct bsv_M3d {
	double x[3][3];
} bsv_M3d;

typedef struct bsv_M2f {
	float x[2][2];
} bsv_M2f;

typedef struct bsv_M2d {
	double x[2][2];
} bsv_M2d;

#endif
