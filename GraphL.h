#ifndef GRAPHL_H
#define GRAPHL_H
#include "notedata.cpp"
#include <iostream>
using namespace std;

//-------------------------- class GraphL ----------------------------------
// ADT GraphL:
//
// Assumptions:
// - All arrays accept no more than 100 elements.
//
//----------------------------------------------------------------------------

class GraphL {
public:
	GraphL(); // constructor
	~GraphL(); //destructor
	void buildGraph(); // put in edge costs
	void displayGraph();
	int depthFirstSearch();
	void makeEmpty();

private:
	struct EdgeNode; // forward reference for the compiler
	struct GraphNode { // structs used for simplicity, use classes if desired
		EdgeNode* edgeHead; // head of the list of edges
	};
	struct EdgeNode {
		int adjGraphNode; // subscript of the adjacent graph node
		EdgeNode* nextEdge;
	};

	int size; 
	// array of GraphNodes

};
#endif
