#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

class Graph{
    private:
    // Adjacency list of matrix M
        std::unordered_map<std::string, std::unordered_set<std::string>> adjList;
    public:
        bool add_vertex(std::string vertex);
        void print_graph();
};

/*
    Adjacency list graph representations goes like this:
    Suppose you add an node "A", there are no extra nodes adjacent to it, therefore
    {
        "A" : []
    }
    As this a new edge (or node), then there are now adjacent nodes to it
    if A were connected with nodes B, C, then:
    {
        "A" : [B, C]
    }
*/

bool Graph::add_vertex(std::string vertex){
    if(adjList.count(vertex) == 0){
        adjList[vertex];
        return true;
    }
    return false;
}

void Graph::print_graph(){
    for(auto[vertex, edges] : adjList){
        std::cout << vertex << ": [";
        for(auto edge: edges){
            std::cout << edge << " ";
        }
        std::cout << "]" << std::endl;
    }
}