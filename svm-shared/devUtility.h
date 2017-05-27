/**
 * devUtility.h
 * @brief: This file contains InitCUDA() function and a reducer class CReducer
 * Created on: May 24, 2012
 * Author: Zeyi Wen
 * Copyright @DBGroup University of Melbourne
 **/

#ifndef SVM_DEVUTILITY_H_
#define SVM_DEVUTILITY_H_
//include files from the gpu sdk
#include <cuda_runtime.h>

//include files from the current project
#include "gpu_global_utility.h"
#include <iostream>
#include <cstdio>
#include "constant.h"

using namespace std;

__device__ void GetMinValueOriginal(real*, int*);
__device__ void GetMinValueOriginal(real*, int);

__device__ void GetMinValue(real*, int*, int);
__device__ void GetMinValue(real*, int);


__device__ void GetBigMinValue(real*, int*);
__device__ void GetBigMinValue(real*);

__device__  int getBlockMin(const float *values, int *index);

#endif /* SVM_DEVUTILITY_H_ */
