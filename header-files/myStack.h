//
// Created by vperv on 04.05.2021.
//

#ifndef DATA_STRUCKT_MYSTACK_H
#define DATA_STRUCKT_MYSTACK_H


#include "node.h"

class Stack{
    Node* top;
public:
    Stack();
    void push(int data);
    void pop();
    void peek();
};


#endif //DATA_STRUCKT_MYSTACK_H
