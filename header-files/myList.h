//
// Created by vperv on 04.05.2021.
//

#ifndef DATA_STRUCKT_MYLIST_H
#define DATA_STRUCKT_MYLIST_H


#include "node.h"

class List{
    Node* head;
    Node* teal;
public:
    List();
    List(Node* head);
    bool isEmpty();
    void pushBack(int data);
    void print();
    void search(int data);
    void popFront();
    void pop();
    void remove(int data);
};


#endif //DATA_STRUCKT_MYLIST_H
