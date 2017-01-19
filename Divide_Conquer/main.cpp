#include "CVector.h"

void main()
{
	CVector* vec = new CVector(); 
	vector<int> result;
	cout << "this is a demo" << endl;
	vec->Initial();
	result = vec->FIND_MAX_SUBARRAY(vec->Array,0,14);
	cout << "the result is : "<< endl;
	cout << "from " << result[0] << " to " << result[1] << endl;
	cout << "total result is " << result[2] << endl;
}