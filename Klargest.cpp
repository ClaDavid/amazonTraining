// printing k largest elements in an array

// using sorting

#include <bits/stdc++.h>

using namespace std;

void k_largest( int arr[], int n, int k)
{
	// sort the array in reverse order
	sort(arr, arr+n, greater<int>());

	for(int i = 0; i < k; i++) cout << arr[i] << " ";
}

// testing
int main()
{
	int arr[] = {2, 41, 50, 1, 3, 45};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	k_largest(arr, n, k);

	return 0;
}

// time complexity: O(nlog(n))