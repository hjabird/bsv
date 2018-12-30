#ifndef MINVEC_TEST_VEC3D_H
#define MINVEC_TEST_VEC3D_H

/*============================================================================
testvec3d.h

Test functionality of Vector 3d.

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

int testVec3d(){
    SECTION("Vec3d");
    mvec_Vec3d vec0 = {0,0,0};
    mvec_Vec3d vec1 = {1,1,1};
    mvec_Vec3d vecm1 = {-1,-1,-1};
    mvec_Vec3d vec2 = {2,2,2};
    mvec_Vec3d vecunit = {sqrt(1./3),sqrt(1./3),sqrt(1./3)};
    mvec_Vec3d vecx = {1,0,0};
    mvec_Vec3d vecy = {0,1,0};
    mvec_Vec3d vecz = {0,0,1};
    mvec_Vec3d vecxy = {1, 1, 0};
    mvec_Vec3d vecmxy = {-1, 1, 0};

    /* Reading back works */
    TEST(vec0.x[0] == 0.0);
    TEST(vec0.x[1] == 0.0);
    TEST(vecz.x[1] == 0.0);
    TEST(vecz.x[2] == 1.0);
    /* Basic comparisons */
    TEST(mvec_Vec3d_isequal(vec0, vec0));
    TEST(mvec_Vec3d_isequal(vecx, vecx));
    TEST(!mvec_Vec3d_isequal(vecy, vecz));
    TEST(!mvec_Vec3d_isnequal(vec0, vec0));
    TEST(!mvec_Vec3d_isnequal(vecx, vecx));
    TEST(mvec_Vec3d_isnequal(vecy, vecz));
    /* Basic +- arithmatic */
    TEST(mvec_Vec3d_isequal(mvec_Vec3d_plus(vec0, vec1), vec1));
    TEST(mvec_Vec3d_isequal(mvec_Vec3d_plus(vec1, vec1), vec2));
    TEST(mvec_Vec3d_isequal(
        mvec_Vec3d_plus(vecx, mvec_Vec3d_plus(vecy, vecz)), 
        vec1));
    TEST(mvec_Vec3d_isequal(mvec_Vec3d_minus(vec1, vec1), vec0));
    TEST(mvec_Vec3d_isequal(mvec_Vec3d_minus(vec1, vecm1), vec2));
    TEST(mvec_Vec3d_isequal(
        mvec_Vec3d_minus(mvec_Vec3d_minus(vec1, vecx), vecy), vecz));
    TEST(mvec_Vec3d_isequal(
        mvec_Vec3d_plus(vec1, mvec_Vec3d_uminus(vecm1)), vec2));
    /* Mult and div */
    TEST(mvec_Vec3d_isequal(mvec_Vec3d_mult(vec1, 2.), vec2));
    TEST(mvec_Vec3d_isequal(mvec_Vec3d_mult(vecx, 2), 
        mvec_Vec3d_plus(vecx, vecx)));
    TEST(mvec_Vec3d_isequal(mvec_Vec3d_div(vec2, 2), vec1));
    /* Abs */
    TEST(mvec_Vec3d_abs(vec1) == sqrt(3.));
    TEST(mvec_Vec3d_abs(vecx) == 1.);
    /* Dot */
    TEST(mvec_Vec3d_dot(vecx, vecx) == 1.);
    TEST(mvec_Vec3d_dot(vecx, vecy) == 0.);
    TEST(mvec_Vec3d_dot(vec1, vecx) == 1.);
    TEST(mvec_Vec3d_dot(vecx, vec2) == 2.);
    TEST(mvec_Vec3d_dot(vec2, vec2) - pow(mvec_Vec3d_abs(vec2), 2) < 1e-14);
    /* Cross */
    TEST(mvec_Vec3d_isequal(
        mvec_Vec3d_cross(vecx, vecy), vecz));
    TEST(mvec_Vec3d_isequal(
        mvec_Vec3d_cross(vecy, vecx), mvec_Vec3d_uminus(vecz)));
    TEST(mvec_Vec3d_isequal(
        mvec_Vec3d_cross(vecxy, vecmxy), mvec_Vec3d_mult(vecz, 2)));
    TEST(mvec_Vec3d_isequal(
        mvec_Vec3d_cross(vec1, vecxy), vecmxy));
    /* Unit */
    TEST(mvec_Vec3d_isequal(
        mvec_Vec3d_unit(vecx), vecx));
    TEST(mvec_Vec3d_abs(mvec_Vec3d_minus(
        mvec_Vec3d_unit(vec2), vecunit)) < 1e-14);
    return 0;
}
#endif /* MINVEC_TEST_VEC3D_H */
