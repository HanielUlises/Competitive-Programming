#include "Adjacency_Matrix.h"

int main (){
    Graph* test_graph = new Graph(); 
    test_graph -> add_vertex("A");
    test_graph -> add_vertex("B");
    test_graph -> add_vertex("C");

    test_graph -> add_edge("A", "B");
    test_graph -> add_edge("A", "C");
    
    test_graph -> print_graph();
    return 0;
}