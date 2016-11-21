//============================================================================
// Name        : buddy.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <vector>
#include <algorithm>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/max_cardinality_matching.hpp>
#include <iostream>

using namespace std;
using namespace boost;

typedef adjacency_list<vecS, vecS, undirectedS> Graph;
typedef graph_traits<Graph>::vertex_descriptor Vertex;

inline int find_match(vector<string> & a,vector<string> & b){
	vector<string> v(100);
	vector<string>::iterator it;
	it = set_intersection(a.begin(),a.end(),b.begin(),b.end(),v.begin());
	return (it-v.begin());
}
void do_case(){
	// reading inputs
	int n,c,f;
	cin >> n >> c >> f;
	vector<vector<string> > data(n);
	for (int i = 0; i < n; i ++){
		vector<string> stud(c);
		for (int j = 0; j<c ; j++){
			cin >> stud[j];
		}
		sort(stud.begin(),stud.end()); // sorted
		data[i] = stud;
	}

	// Construct graph
	Graph G(n);
	for (int i = 0; i < n; i ++ ){
		for (int j = i+1 ; j < n; j ++){
			if (find_match(data[i],(data[j])) > f){ // Possible to pair f+1
				add_edge(i,j,G);
			}
		}
	}

	// find maximum pairs
	vector<Vertex> matemap(n);
	edmonds_maximum_cardinality_matching(G,make_iterator_property_map(matemap.begin(),get(vertex_index,G)));
	if (2 * matching_size(G,make_iterator_property_map(matemap.begin(),get(vertex_index,G)))!= n){
		cout << "optimal\n";
	}
	else
		cout << "not optimal\n";
}
int main() {
	int t;
	cin >> t;
	while (t--){
		do_case();
	}
	return 0;
}
