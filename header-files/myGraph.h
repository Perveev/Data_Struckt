//
// Created by vperv on 04.05.2021.
//

#ifndef DATA_STRUCKT_MYGRAPH_H
#define DATA_STRUCKT_MYGRAPH_H


#include <vector>

class Graph {
public:
    void buildGraph(int vertexCount, int edgeCount);
    void clearVisit();
    void dfs(int vertex);
private:
    std::vector<bool> visited;
    std::vector<std::vector<int>> g;
};


#endif //DATA_STRUCKT_MYGRAPH_H
