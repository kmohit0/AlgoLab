//============================================================================
// Name        : Octopussy.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		bool yes=true;
		long n;
		cin >> n;
		vector<int> t(n);
		for (long i = 0; i < n; ++i){
			cin >> t[i];
		}
		for ( long i = 0; i < (n-1)/2; i ++){ // Condition
			if(t[2*i+2]!=t[i]-2){
			t[2*i+1] = min(t[2*i+1],t[i]-2);
			t[2*i+2] = min(t[2*i+2],t[i]-1);
			}
			else {
			t[2*i+1] = min(t[2*i+1],t[i]-1);

			}
		}

		sort(t.begin(),t.end());
		for (long i = 0; i < n; i ++){ // Condition
//			cout << t[i] ;
			if (t[i]< i+1){
				yes= false;
				break;
			}
		}
		if(yes){cout << "yes" << endl;}
		else {cout << "no" << endl;}
	}
	return 0;
}