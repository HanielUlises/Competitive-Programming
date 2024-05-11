#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>

class Graph{
    private:
    // Adjacency list of matrix M
        std::unordered_map<std::string, std::unordered_set<std::string>> adjacency_list;
    public:
        bool add_vertex(std::string vertex);
        bool add_edge (std::string vertex_1, std::string vertex_2);
        void print_graph();
        void bfs(const std::string& source);
};

/*
    Adjacency list graph representations goes like this:
    Suppose you add an node "A", there are no extra nodes adjacent to it, therefore
    {
        "A" : []
    }
    As this a new vertex (or node), then there are now adjacent nodes to it
    if A were connected with nodes B, C, then:
    {
        "A" : [B, C]
    }
*/

bool Graph::add_vertex(std::string vertex){
    if(adjacency_list.count(vertex) == 0){
        adjacency_list[vertex];
        return true;
    }
    return false;
}

/*
    The edges, or graph connections are the paths from one node to another
    so, suppose a node A is connected to both nodes B, and C, therefore, the adjacency list will be
    {
        "A" : [B, C]
    }
    And the edge is the connection between two given nodes
*/

bool Graph::add_edge(std::string vertex_1, std::string vertex_2){
    if(adjacency_list.count(vertex_1) != 0 && adjacency_list.count(vertex_2)){
        adjacency_list.at(vertex_1).insert(vertex_2);
        adjacency_list.at(vertex_2).insert(vertex_1);
        return true;
    }
    return false;
}

/*

*/
void Graph::bfs(const std::string& source) {
    std::queue<std::string> q;
    std::unordered_map<std::string, bool> visited;

    // BFS starts from the source node
    q.push(source);
    visited[source] = true;

    while (!q.empty()) {
        std::string f = q.front();
        q.pop();
        std::cout << f << " ";

        // Explore all neighbors of the current node
        for (auto nbr : adjacency_list[f]) {
            if (!visited[nbr]) {
                q.push(nbr);
                visited[nbr] = true;
            }
        }
    }
    std::cout << std::endl;
}

void Graph::print_graph(){
    for(auto[vertex, edges] : adjacency_list){
        std::cout << vertex << ": [";
        for(auto edge: edges){
            std::cout << edge << " ";
        }
        std::cout << "]" << std::endl;
    }
}