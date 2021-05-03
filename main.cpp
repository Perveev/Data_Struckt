#include <iostream>
#include "header-files/node.h"
#include "header-files/myList.h"
#include "header-files/myStack.h"
#include "header-files/myQueue.h"
#include "header-files/myGraph.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    List list;
    for (int i = 0; i < 5; ++i) {
        list.pushBack(i);
    }
    list.remove(3);
    list.print();

    Stack stack;
    for (int i = 0; i < 5; ++i) {
        stack.push(i);
    }
    stack.pop();
    stack.peek();

    Queue queue;
    for (int i = 0; i < 5; ++i) {
        queue.push(i);
    }
    queue.remove();
    queue.print();

    Graph graph;
    graph.buildGraph(9,8);
    graph.dfs(0);
    graph.clearVisit();
    std::cout << std::endl;
    return 0;
}
