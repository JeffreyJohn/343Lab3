#ifndef GRAPHM_H
#define GRAPHM_H
#include "notedata.cpp"
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
public:

	GraphM();         // constructor
	void buildGraph();     //put in edge costs
	void insertEdge();
	void removeEdge();
	int findShortestPath();
	void displayAll();   //not general output
	void display();      //to display one shortest distance with path

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
};
#endif
