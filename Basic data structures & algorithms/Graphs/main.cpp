#include "Adjacency_Matrix.h"

int main (){
    Graph* test_graph = new Graph(); 
    test_graph -> add_vertex("A");
    test_graph -> print_graph();
    return 0;
}