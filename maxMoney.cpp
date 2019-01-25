// Maximum money
// https://practice.geeksforgeeks.org/problems/maximum-money/0

#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	while( T-- > 0 )
	{
	    int N, money;
	    cin >> N >> money;
	    int total = 0;
	    for( int i = 0; i < N; i = i + 2 ) total = total + money;
	    cout << total << endl;
	}
	return 0;
}
