#ifndef SUMOFARRAY_H
#define SUMOFARRAY_H

#include <string>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <array>

using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

#ifdef SUM
#define SUMOFARRAY __declspec(dllexport)
#else
#define SUMOFARRAY __declspec(dllimport)
#endif

int SUMOFARRAY Sum(int x, int n);

#ifdef __cplusplus
}
#endif

#endif