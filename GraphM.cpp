#include "graphm.h"


//----------------------------------------------------------------------------
// constructor
//
GraphM::GraphM() {
	size = 0;
	graphChanged = false;

	//initialize  C[][] to all infinities
	for(int i = 0; i < MAXNODES; i++) {
		for (int j = 0; j < MAXNODES; j++) {
			C[i][j] = INFINITY;
		}
	}

	//initialize T[][] to all infinities, visited = false, path = 0

	for(int i = 0; i < MAXNODES; i++) {
		for (int j = 0; j < MAXNODES; j++) {
			T[i][j].path = 0;
			T[i][j].dist = INFINITY;
			T[i][j].visited = false;
		}
	}

}

//----------------------------------------------------------------------------
// buildGraph
// puts in edge costs
// NEEDS TO BE MODIFIED
void GraphM::buildGraph(istream& infile) {
	int fromNode, toNode;              // from and to node ends of edge

	makeEmpty();                       // clear the graph of memory 

	infile >> size;                    // read the number of nodes
	if (infile.eof()) return;          // stop if no more data

	string s;                          // used to read through to end of line

	// read graph node information
	for (int i = 1; i <= size; i++) {
		// read using setData of the NodeData class,
		// something like: 
		//    adjList[i].data.setData(infile);
		// where adjList is the array of GraphNodes and
		// data is the NodeData object inside of GraphNode
		getline(infile, s);
		data[i].setData(infile);
	}

	// read the edge data and add to the adjacency list
	for (;;) {

		int distance = 0;
		infile >> fromNode >> toNode >> distance;
		if (fromNode == 0 && toNode == 0) return;     // end of edge data

		if (fromNode < 0 || fromNode > size ||
			toNode < 0 || toNode > size) {
				continue;
		}

		else {

			if (distance > 0 && distance < INFINITY)  {
				// insert the edge into the adjacency list for fromNode
				C[fromNode][toNode] = distance;
			}		
		}
	}

	graphChanged = true;
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
/*
//----------------------------------------------------------------------------
//findShortestPath
//
int GraphM::findShortestPath(const int source, const int target) {

}

void GraphM::dijkstraPath(const int source) {
	
	for (int i = 1; i <= size; i++) {
		T[source][i].dist = C[source][i];
	}
	
	for (int i = 0; i < size; i++) {
		int v = 0; // smallest of not visited
		int smallest = INFINITY;
		//find smallest T[][].dist (v) that is not infinity
		for (int j = 0; j < size; j++) {
			if (T[source][j].visited == false && T[source][j].dist < smallest) {
				v = j;
				smallest = T[source][j].dist;
			}
		}
		//mark v as visited
		//for each node w adjacent to v
		//     if not visited
		//     T[w].dist = min(T[w].dist, T[v].dist + C[v][w];
	}
}

//----------------------------------------------------------------------------
//displayAll
//not general output, uses couts to demonstrate that the algorithm
//works properly as shown
void GraphM::displayAll(){

}
*/
//----------------------------------------------------------------------------
//display
//to display one shortest distance with path
void GraphM::display(const int start, const int end){
	
	//print T[start][end]
}

//----------------------------------------------------------------------------
//makeEmpty
void GraphM::makeEmpty(){

}

