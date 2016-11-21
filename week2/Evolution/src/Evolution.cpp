//============================================================================
// Name        : Evolution.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <vector>
#include <cstdio>
#include <ctime>
using namespace std;

struct node {
	int the_age;
	map<string,node>::iterator  ancestor;
	vector<map<string,node>::iterator> path_to_luca;
	bool PATH_DONE = false;
};

vector<map<string,node>::iterator> get_path_to_luca (map<string,node>::iterator cur_it)
		{
			if (cur_it->second.PATH_DONE){
			return cur_it->second.path_to_luca;
		}
			cur_it->second.PATH_DONE = true; // Change flag
			vector<map<string,node>::iterator> new_path;
			cur_it->second.ancestor->second.path_to_luca=get_path_to_luca(cur_it->second.ancestor);
			new_path=cur_it->second.ancestor->second.path_to_luca;
			new_path.push_back(cur_it);
			return new_path; // Recursive Call

		}

int main() {
	std::ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n; // Species
		int q; //Q Quiries
		cin >> n >> q;
		map<string, node> data; // Name and age

		string luca;
		int cur_max = 0;

		for (int i = 0; i < n; i++) {
			int a;
			string nm;
			cin >> nm;
			cin >> a;
			node nd;
			nd.the_age = a;

			data.insert(data.end(),make_pair(nm, nd));
			if (cur_max < a) {
				cur_max = a;

				luca = nm;
			}
		}

		for (int i = 0; i < n - 1; i++) {
			string ances;
			string nm;
			cin >> nm;
			cin >> ances;
			data.find(nm)->second.ancestor = data.find(ances);

		}
		data.find(luca)->second.ancestor = data.find(luca);

		// Timer for debug
	    clock_t start;
	    double duration;

	    start = std::clock();

	    // Find All independent paths
		map<string,node>::iterator luca_it = data.find(luca);
		vector<map<string,node>::iterator> primary_path;
		primary_path.push_back(luca_it);
		luca_it->second.path_to_luca = primary_path;
		luca_it->second.PATH_DONE = true;
		for (map<string,node>::iterator it= data.begin(); it != data.end(); it ++){
			if(!it->second.PATH_DONE){
				it->second.path_to_luca = get_path_to_luca(it);
			}
		}

	    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

	    std::cout<<"printf: "<< duration <<'\n';
		// testing


		for (int i = 0; i < q; i++) {
			string what;
			int old;
			cin >> what >> old;

			map<string,node>::iterator it0 = data.find(what);
			int left=0;
			int right=it0->second.path_to_luca.size()-1;
			int cur_age;
			int mid;
			while (left != right){
				mid = (left+right)/2;
				cur_age = it0->second.path_to_luca[mid]->second.the_age;
				if (cur_age>old){left=mid+1;}
				else {right = mid;}
			}
//			cout <<  it0->second.path_to_luca[left]->first << " ";
		}
		cout << endl;
	}
	return 0;
}
