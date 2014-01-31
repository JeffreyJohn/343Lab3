#include "graphm.h"

const int MAXNODES = 100;

//----------------------------------------------------------------------------
// constructor
//
GraphM::GraphM() {
	size = 0;

}

//----------------------------------------------------------------------------
// buildGraph
// puts in edge costs
void GraphM::buildGraph(istream& infile) {
	int fromNode, toNode;              // from and to node ends of edge

	makeEmpty();                       // clear the graph of memory 

	infile >> size;                    // read the number of nodes
	if (infile.eof()) return;          // stop if no more data

	string s;                          // used to read through to end of line
	getline(infile, s);

	// read graph node information
	for (int i = 1; i <= size; i++) {
		// read using setData of the NodeData class,
		// something like: 
		//    adjList[i].data.setData(infile);
		// where adjList is the array of GraphNodes and
		// data is the NodeData object inside of GraphNode
	}

	// read the edge data and add to the adjacency list
	for (;;) {
		infile >> fromNode >> toNode;
		if (fromNode == 0 && toNode == 0) return;     // end of edge data

		// insert the edge into the adjacency list for fromNode
	}
}
}

//----------------------------------------------------------------------------
// insertEdge
//
void GraphM::insertEdge(){

}

//----------------------------------------------------------------------------
// removeEdge
//
void GraphM::removeEdge() {

}

//----------------------------------------------------------------------------
//findShortestPath
//
int GraphM::findShortestPath() {

}

//----------------------------------------------------------------------------
//displayAll
//not general output, uses couts to demonstrate that the algorithm
//works properly as shown
void GraphM::displayAll(){

}

//----------------------------------------------------------------------------
//display
//to display one shortest distance with path
void GraphM::display(){

}

//----------------------------------------------------------------------------
//makeEmpty
void GraphM::makeEmpty(){

}
