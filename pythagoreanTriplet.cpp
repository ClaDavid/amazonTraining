// given an array, return true if there is a triplet (a, b, c) that satisfies a^2 + b^2 = c^2

#include <iostream>
#include <unordered_set>
#include <cstdlib>

using namespace std;

bool isTriplet( int arr[], int n )
{
	unordered_set<int> arr_temp;

	for( int i = 0; i < n; i++ ) arr_temp.insert( arr[i]*arr[i] );
	
	for( int i = 0; i < n - 1; i++ )
	{
		for( int j = i + 1; j < n; j++ )
		{
			int value = abs( ( arr[i]*arr[i] ) - ( arr[j]*arr[j] ) );
			if( arr_temp.find(value) != arr_temp.end()) return true;
		}
	}

	return false;
}

// testing
int main()
{
	int arr[] = {3, 1, 4, 6, 5};
	int arr_2[] = {10, 4 ,6, 12, 5};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	isTriplet(arr, arr_size)? cout << "Yes": cout << "No";

	isTriplet(arr_2, arr_size)? cout << "Yes": cout << "No";

	return 0;
}

// time complexity = O(n^2)