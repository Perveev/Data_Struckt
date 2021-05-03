//
// Created by vperv on 04.05.2021.
//

#include <iostream>
#include "header-files/myGraph.h"
#include "vector"

void Graph::buildGraph(int vertexCount, int edgeCount) {
    visited.resize(vertexCount, false);
    g.resize(vertexCount, std::vector<int>(0));
    int v;
    int u;
    for (int i = 0; i < edgeCount; i++) {
        std::cin >> v >> u;
        g[v].push_back(u);
    }
}

void Graph::clearVisit() {
    visited.assign(visited.size(),false);
}

void Graph::dfs(int vertex)  {
    visited[vertex] = true;
    std::cout << "DFS) Now was " << vertex << " vertex\n";
    for(int i : g[vertex]) {
        if(!visited[i]){
            dfs(i);
        }
    }
}



