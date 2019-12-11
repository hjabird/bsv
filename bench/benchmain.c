/*============================================================================
benchmain.c

A dodgy self contained benchmarking system for bsv.h

Copyright(c) 2019 HJA Bird

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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <time.h>

#define RAND_ARRAY_LEN 1000000

volatile float sinkf;
volatile double sinkd;

void benchf(int (*test_fn)(float*), int repeats, char* name, float* rand_array){
	int i;
	long int sum = 0;
	volatile long int sumwm = 0;
	double dmsecpc;
	/* Warm up caches, avx or anything... */
	for (i = 0; i < 100; ++i) {
		sumwm += (*test_fn)(rand_array);
	}
	clock_t start = clock(), diff;
	for(i = 0; i <  repeats; ++i){
		sum += (*test_fn)(rand_array);
	}
	diff = clock() - start;
	double sec = (double)diff * 1000. / CLOCKS_PER_SEC;
	dmsecpc = sec / (double) sum;
	printf("BENCH:\t%-40s:\t%.3e\t(%.2e calls in %.2e ms)\n",
		name, (double)dmsecpc, (double)sum, (double) sec);
}

void benchd(int (*test_fn)(double*), int repeats, char* name, double* rand_array){
	int i;
	long int sum = 0;
	volatile long int sumwm = 0;
	double dmsecpc;
	/* Warm up caches */
	for (i = 0; i < 10; ++i) {
		sumwm += (*test_fn)(rand_array);
	}
	clock_t start = clock(), diff;
	for (i = 0; i < repeats; ++i) {
		sum += (*test_fn)(rand_array);
	}
	diff = clock() - start;
	double sec = (double)diff * 1000. / CLOCKS_PER_SEC;
	dmsecpc = sec / (double)sum;
	printf("BENCH:\t%-40s:\t%.3e\t(%.2e calls in %.2e ms)\n",
		name, (double)dmsecpc, (double)sum, (double)sec);
}

#include "benchvec2f.h"
#include "benchvec2d.h"
/*#include "benchvec3f.h"
#include "benchvec3d.h"
#include "benchvec4f.h"
#include "benchvec4d.h"

#include "benchmat2f.h"
#include "benchmat2d.h"
#include "benchmat3f.h"
#include "benchmat3d.h"
#include "benchmat4f.h"
#include "benchmat4d.h"*/

int main(int argc, char* argv[]){
	argv; argc; /* Stops warnings... */
	
	/* Setup big arrays of random numbers. */
	double *drand, dr;
	float *frand;
	int i;
	drand = malloc(sizeof(double) * RAND_ARRAY_LEN);
	frand = malloc(sizeof(float) * RAND_ARRAY_LEN);
	for(i = 0; i < RAND_ARRAY_LEN; ++i){
		dr = (double)rand()/RAND_MAX*200.0-100.0;
		frand[i] = (float)dr;
		drand[i] = dr;
	}
	
    benchVec2f(frand);
    benchVec2d(drand);
    /*benchVec3f(frand);
    benchVec3d(drand); 
	benchVec4f(frand);
	benchVec4d(drand);
	benchMat2f(frand);
	benchMat2d(drand);
	benchMat3f(frand);
	benchMat3d(drand);
	benchMat4f(frand);
	benchMat4d(drand);*/
	
	free(drand);
	free(frand);
	return 0;
}
