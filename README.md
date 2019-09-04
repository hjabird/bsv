# BSV

Bird Small Vectors

A header only library for small vectors and matrices with both single and double precision.

Includes Vectors of length 2, 3 & 4 in both single and double precision and square
matrices of size 2x2, 3x3 & 4x4 in single and double precision.

## Building

BSV is header only - it doesn't have anything to build.

## Usage

The easiest way to obtain BSV is probably my own branch of VCPKG.
It can the be included in a CMAKE project using

```
find_package(bsv CONFIG REQUIRED)
target_link_libraries(main PRIVATE bsv)
```

To include everything ```#include "bsv/bsv.h"```.
To just include types ```#include "bsv/bsv_types.h"```.
And to include the function only of one particular type, use the type name: ```#include "bsv/bsv_V3f.h"```.

Everything starts with ```bsv_```.

The only types (typedef'ed) are
```
bsv_V2f
bsv_V2d
bsv_V3f
bsv_V3d
bsv_V4f
bsv_V4d
bsv_M2f
bsv_M2d
bsv_M3f
bsv_M3d
bsv_M4f
bsv_M4d
```
where a M or V means matrix or vector. The number represents the size, and d and f 
correspond to double or float.

Accessing the elements of a vector is done using ```bsv_Vxt.x[index]```.
Accessing the elements of a matrix is done using ```bsv_Mxt.x[index]```.

The size in bytes of a type can found safely using ```sizeof(bsv_Mxt)```.

## Authors
HJA Bird

## Licence 
MIT




