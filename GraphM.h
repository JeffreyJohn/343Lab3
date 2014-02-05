#ifndef GRAPHM_H
#define GRAPHM_H
#include "nodedata.h"
#include <iostream>

using namespace std;

//-------------------------- class GraphL ----------------------------------
// ADT GraphM:
//
// Assumptions:
// - All arrays accept no more than 100 elements.
//
//----------------------------------------------------------------------------


class GraphM {

	const static int MAXNODES = 100;
	const static int INFINITY = 9999999;

public:

	GraphM();         // constructor
	void buildGraph(istream&);     //put in edge costs
	void insertEdge();
	void removeEdge();
	int findShortestPath(const int, const int);
	void dijkstraPath(const int);
	void displayAll();   //not general output
	void display(const int, const int);      //to display one shortest distance with path
	void makeEmpty(); 

private:

	struct TableType {
		bool visited; // whether node has been visited
		int dist; // currently known shortest distance from source
		int path; // previous node in path of min dist
	};

	
	NodeData data[MAXNODES];           // data for graph nodes information
	int C[MAXNODES][MAXNODES];         // Cost array, the adjacency matrix
	int size;                          // number of nodes in the graph
	TableType T[MAXNODES][MAXNODES];   // stores visited, distance, path

	// tracks whether Dijkstra's needs to be run on graph
	bool graphChanged;
};
#endif
