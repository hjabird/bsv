#ifndef CVTX_TEST_VEC2F_H
#define CVTX_TEST_VEC2F_H

/*============================================================================
testvec2f.h

Test functionality of Vector 2f.

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

int testVec2f(){
    SECTION("Vec2f");
    mvec_Vec2f vec0 = {0,0};
    mvec_Vec2f vec1 = {1,1};
    mvec_Vec2f vecm1 = {-1,-1};
    mvec_Vec2f vec2 = {2,2};
    mvec_Vec2f vecunit = {sqrtf(1.f/2),sqrtf(1.f/2)};
    mvec_Vec2f vecx = {1,0};
    mvec_Vec2f vecy = {0,1};;

    /* Reading back works */
    TEST(vec0.x[0] == 0.0);
    TEST(vec0.x[1] == 0.0);
    TEST(vecy.x[1] == 1.0);
    /* Basic comparisons */
    TEST(mvec_Vec2f_isequal(vec0, vec0));
    TEST(mvec_Vec2f_isequal(vecx, vecx));
    TEST(!mvec_Vec2f_isequal(vecy, vecx));
    TEST(!mvec_Vec2f_isnequal(vec0, vec0));
    TEST(!mvec_Vec2f_isnequal(vecx, vecx));
    /* Basic +- arithmatic */
    TEST(mvec_Vec2f_isequal(mvec_Vec2f_plus(vec0, vec1), vec1));
    TEST(mvec_Vec2f_isequal(mvec_Vec2f_plus(vec1, vec1), vec2));
    TEST(mvec_Vec2f_isequal(mvec_Vec2f_minus(vec1, vec1), vec0));
    TEST(mvec_Vec2f_isequal(mvec_Vec2f_minus(vec1, vecm1), vec2));
    TEST(mvec_Vec2f_isequal(
        mvec_Vec2f_plus(vec1, mvec_Vec2f_uminus(vecm1)), vec2));
    /* Mult and div */
    TEST(mvec_Vec2f_isequal(mvec_Vec2f_mult(vec1, 2.), vec2));
    TEST(mvec_Vec2f_isequal(mvec_Vec2f_mult(vecx, 2), 
        mvec_Vec2f_plus(vecx, vecx)));
    TEST(mvec_Vec2f_isequal(mvec_Vec2f_div(vec2, 2), vec1));
    /* Abs */
    TEST(mvec_Vec2f_abs(vec1) == sqrtf(2.));
    TEST(mvec_Vec2f_abs(vecx) == 1.);
    /* Dot */
    TEST(mvec_Vec2f_dot(vecx, vecx) == 1.);
    TEST(mvec_Vec2f_dot(vecx, vecy) == 0.);
    TEST(mvec_Vec2f_dot(vec1, vecx) == 1.);
    TEST(mvec_Vec2f_dot(vecx, vec2) == 2.);
    TEST(fabs(mvec_Vec2f_dot(vec2, vec2) - powf(mvec_Vec2f_abs(vec2), 2)) < 1e-6);
    /* Unit */
    TEST(mvec_Vec2f_isequal(
        mvec_Vec2f_unit(vecx), vecx));
    TEST(mvec_Vec2f_isequal(
        mvec_Vec2f_unit(vec2), vecunit));
    return 0;
}
#endif /* CVTX_TEST_VEC3F_H */
