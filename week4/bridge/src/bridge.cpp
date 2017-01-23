//============================================================================
// Name        : bridge.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/biconnected_components.hpp>
using namespace std;
using namespace boost;

namespace boost {
struct edge_component_t {
	enum {
		num = 555
	};
	typedef edge_property_tag kind;
} edge_component;
}

typedef adjacency_list<vecS, vecS, undirectedS, no_property,
		property<edge_component_t, int> > Graph;
typedef graph_traits<Graph>::edge_descriptor Edge;
typedef graph_traits<Graph>::vertex_descriptor Vertex;
typedef graph_traits<Graph>::edge_iterator EdgeIt;

void do_case() {
	// Read input
	int V, E;
	cin >> V >> E;
	Graph G(V);
//	vector<Edge> alledge;
	for (int i = 0; i < E; i++) {
		int u, v;
		cin >> u >> v;
		Edge e;
		bool suc;
		tie(e, suc) = add_edge(v, u, G);
//		alledge.push_back(e);
	}

	// Connected components calculation
	property_map<Graph, edge_component_t>::type component = get(edge_component,
			G);

	int num_comps = biconnected_components(G, component);
	if (num_comps == 1 and V > 2) {cout << 0 << "\n";return;}

	EdgeIt ebeg, eend;
	vector<pair<int, int> > sol(num_comps);
	vector<int> single(num_comps,0);

	for (tie(ebeg,eend) = edges(G);ebeg!=eend; ebeg++) {
		int comp =component[*ebeg];
		single[comp]++;
		Vertex u = source(*ebeg, G), v = target(*ebeg, G);
		sol[comp] = make_pair(min(u,v),max(u,v));

	}

	int result=0;
	vector<pair<int,int> > result_pair;

	for (int i= 0; i<num_comps; i++){
		if (single[i] == 1) {
			result++; result_pair.push_back(sol[i]);
		}
	}
	cout << result << "\n";

// All bridges
	sort(result_pair.begin(), result_pair.end());
	for (int i = 0; i < result; i++) {
		cout << result_pair[i].first << " " << result_pair[i].second << endl;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		do_case();
	}
	return 0;
}