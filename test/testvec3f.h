#ifndef MINVEC_TEST_VEC3F_H
#define MINVEC_TEST_VEC3F_H

/*============================================================================
testvec3f.h

Test functionality of Vector 3f.

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
#include "../include/minvec/minvec.h"

#include <math.h>

int testVec3f(){
    SECTION("Vec3f");
    mvec_Vec3f vec0 = {0,0,0};
    mvec_Vec3f vec1 = {1,1,1};
    mvec_Vec3f vecm1 = {-1,-1,-1};
    mvec_Vec3f vec2 = {2,2,2};
    mvec_Vec3f vecunit = {sqrtf(1.f/3),sqrtf(1.f/3),sqrtf(1.f/3)};
    mvec_Vec3f vecx = {1,0,0};
    mvec_Vec3f vecy = {0,1,0};
    mvec_Vec3f vecz = {0,0,1};
    mvec_Vec3f vecxy = {1, 1, 0};
    mvec_Vec3f vecmxy = {-1, 1, 0};

    /* Reading back works */
    TEST(vec0.x[0] == 0.0);
    TEST(vec0.x[1] == 0.0);
    TEST(vecz.x[1] == 0.0);
    TEST(vecz.x[2] == 1.0);
    /* Basic comparisons */
    TEST(mvec_Vec3f_isequal(vec0, vec0));
    TEST(mvec_Vec3f_isequal(vecx, vecx));
    TEST(!mvec_Vec3f_isequal(vecy, vecz));
    TEST(!mvec_Vec3f_isnequal(vec0, vec0));
    TEST(!mvec_Vec3f_isnequal(vecx, vecx));
    TEST(mvec_Vec3f_isnequal(vecy, vecz));
    /* Basic +- arithmatic */
    TEST(mvec_Vec3f_isequal(mvec_Vec3f_plus(vec0, vec1), vec1));
    TEST(mvec_Vec3f_isequal(mvec_Vec3f_plus(vec1, vec1), vec2));
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_plus(vecx, mvec_Vec3f_plus(vecy, vecz)), 
        vec1));
    TEST(mvec_Vec3f_isequal(mvec_Vec3f_minus(vec1, vec1), vec0));
    TEST(mvec_Vec3f_isequal(mvec_Vec3f_minus(vec1, vecm1), vec2));
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_minus(mvec_Vec3f_minus(vec1, vecx), vecy), vecz));
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_plus(vec1, mvec_Vec3f_uminus(vecm1)), vec2));
    /* Mult and div */
    TEST(mvec_Vec3f_isequal(mvec_Vec3f_mult(vec1, 2.), vec2));
    TEST(mvec_Vec3f_isequal(mvec_Vec3f_mult(vecx, 2), 
        mvec_Vec3f_plus(vecx, vecx)));
    TEST(mvec_Vec3f_isequal(mvec_Vec3f_div(vec2, 2), vec1));
    /* Abs */
    TEST(mvec_Vec3f_abs(vec1) == sqrtf(3.));
    TEST(mvec_Vec3f_abs(vecx) == 1.);
    /* Dot */
    TEST(mvec_Vec3f_dot(vecx, vecx) == 1.);
    TEST(mvec_Vec3f_dot(vecx, vecy) == 0.);
    TEST(mvec_Vec3f_dot(vec1, vecx) == 1.);
    TEST(mvec_Vec3f_dot(vecx, vec2) == 2.);
    TEST(mvec_Vec3f_dot(vec2, vec2) == powf(mvec_Vec3f_abs(vec2), 2));
    /* Cross */
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_cross(vecx, vecy), vecz));
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_cross(vecy, vecx), mvec_Vec3f_uminus(vecz)));
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_cross(vecxy, vecmxy), mvec_Vec3f_mult(vecz, 2)));
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_cross(vec1, vecxy), vecmxy));
    /* Unit */
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_unit(vecx), vecx));
    TEST(mvec_Vec3f_isequal(
        mvec_Vec3f_unit(vec2), vecunit));
    return 0;
}
#endif /* CVTX_TEST_VEC3F_H */
