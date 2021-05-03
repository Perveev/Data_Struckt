//
// Created by vperv on 04.05.2021.
//

#include <iostream>
#include "header-files/myStack.h"


void Stack::push(int data) {
    Node* nd = new Node(data);
    nd->next = top;
    top = nd;
}

void Stack::peek() {
    Node* nd = top;
    while(nd){
        std::cout << nd->data << std::endl;
        nd = nd->next;
    }
    std::cout << std::endl;
}

Stack::Stack() {
    top = nullptr;
}

void Stack::pop() {
    if(top == nullptr){
        return;
    }
    if(top->next == nullptr){
        top = nullptr;
        return;
    }
    top = top->next;
}
