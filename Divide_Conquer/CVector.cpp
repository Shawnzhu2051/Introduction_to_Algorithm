#include "CVector.h"


CVector::CVector(void)
{
}


CVector::~CVector(void)
{
}

void CVector::Initial()
{
	Array.push_back(13);
	Array.push_back(-3);
	Array.push_back(-25);
	Array.push_back(20);
	Array.push_back(-3);
	Array.push_back(-16);
	Array.push_back(-23);
	Array.push_back(18);
	Array.push_back(20);
	Array.push_back(-7);
	Array.push_back(12);
	Array.push_back(-5);
	Array.push_back(-22);
	Array.push_back(15);
	Array.push_back(-4);
	Array.push_back(7);
}

vector<int> CVector::FIND_MAX_CORSSINGSUBARRAY(vector<int> Array ,int low, int mid, int high)
{
	int left_sum = -INFINITY;
	int right_sum = -INFINITY;
	int sum = 0;
	int max_left;
	int max_right;
	vector<int> trans;
	for(int i = mid; i >= low; i--)
	{
		sum = sum + Array[i];
		if(sum > left_sum)
		{
			left_sum = sum;
			max_left = i;
		}
	}
	sum = 0;
	for(int j = mid; j <= high; j++)
	{
		sum = sum + Array[j];
		if(sum > right_sum)
		{
			right_sum = sum;
			max_right = j;
		}
	}
	trans.push_back(max_left);
	trans.push_back(max_right);
	trans.push_back(left_sum + right_sum);

	return trans;
}

vector<int> CVector::FIND_MAX_SUBARRAY(vector<int> Array, int low, int high)
{
	vector<int> result;
	vector<int> result1;
	vector<int> result2;
	vector<int> result3;
	int mid;
	if(high == low)
	{
		result.push_back(low);
		result.push_back(high);
		result.push_back(Array[low]);
		return result;
	}
	else
	{
		mid = (low + high)/2;
	}
	result1 = FIND_MAX_SUBARRAY(Array,low,mid);
	result2 = FIND_MAX_SUBARRAY(Array,mid +1, high);
	result3 = FIND_MAX_CORSSINGSUBARRAY(Array,low, mid, high);
	if(result1[2] >= result2[2] && result1[2] >= result3[2])
	{
		return result1;
	}
	else if(result2[2] >= result1[2] && result2[2] >= result3[2])
	{
		return result2;
	}
	else
	{
		return result3;
	}
}