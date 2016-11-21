//============================================================================
// Name        : SearchSnippets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	int test_case;
	cin >> test_case;
//	vector<vector<int> > pos;
	for (int test_num = 0; test_num < test_case; test_num++) {
		int n;

		map<long, long> wordpos; // Key is Position, Value is word

		cin >> n;

		long* ms;
		ms = new long[n];

		for (long i = 0; i < n; i++) {
			cin >> ms[i];
		}

//		// The one word which occur least often
//		int min_index = distance(m, min_element(m, m + n));
//		// Idea: binary search for each word
//
//		for (int i = 0; i < n; i++) {
//			vector<int> pos_m;
//			for (int j = 0; j < m[i]; j++) {
//				int pos_now;
//				pos_m.push_back(pos_now);
//			}
//			pos.push_back(pos_m);
//		}
//		// Finish Reading
//
//		for (int i = 0; i < m[min_index]; i++) { // Every position in min row
//			int pos_goal = pos.at(min_index).at(0);
//			vector<int> selected;
//
//			for (int j = 0; j < n; j++) { // Iterate through all other numbers
////				if (j==min_index){		// Do nothing
////				}
////				else { // Do binary search
//				int lmin, lmax;
//				lmin = lower_bound(pos.at(j).begin(), pos.at(j).end(),
//						pos_goal);
//				// Index of value just smaller
//				if (lmin == pos.at(j).end()) { // All elements greater
//					selected.push_back(pos.at(j).front());
//					break; // out of the loop
//				}
//				lmax = upper_bound(pos.at(j).begin(), pos.at(j).end(),
//						pos_goal);
//				if (lmax == pos.at(j).end()) { // All elements smaller
//					selected.push_back(pos.at(j).back());
//					break; // out of the loop
//				}
//				if ((pos.at(j).at(lmax)+pos.at(j).at(lmin)-2*pos_goal)>0){
//					selected.push_back(pos.at(j).at(lmin));
//				}
//				else {
//					selected.push_back(pos.at(j).at(lmin));
//				}
////				}
//
//			}
//		}
		map<long, long>::iterator ret = wordpos.end();
		for (long i = 0; i < n; i++) {
			for (long j = 0; j < ms[i]; j++) {

				long pos;
				cin >> pos;
				ret = wordpos.insert(ret, make_pair(pos, i));
				// Update the hint recursively

			}
		}

		// Sliding Window technique
		long dis = wordpos.rbegin()->first - wordpos.begin()->first + 1;
		// Whole length
		vector<long> pos_used(n,0);
		set<long> positions;
		for (map<long,long>::iterator it = wordpos.begin(); it != wordpos.end(); ++it) {
			if (pos_used[it->second]) { // this number already found
				positions.erase(positions.find(pos_used[it->second])); // Delete the one with old value
			}
			positions.insert(positions.end(), it->first); // Add in new position
			pos_used[it->second] = it->first; // update the newer position

			if(positions.size()==n){ // got all numbers
				dis = min(dis, *(positions.rbegin())-*(positions.begin())+1);
			}

	}
		delete[] ms;

		cout << dis << endl;
}
return 0;
}
