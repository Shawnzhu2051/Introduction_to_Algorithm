#pragma once
#include "common.h"

class CVector
{
public:
	CVector(void);
	~CVector(void);
	vector<int> FIND_MAX_CORSSINGSUBARRAY(vector<int> Array ,int low , int mid, int high);
	vector<int> FIND_MAX_SUBARRAY(vector<int> Array, int low, int high);
	void Initial();
	vector<int> Array;

};

