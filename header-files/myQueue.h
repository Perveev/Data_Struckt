//
// Created by vperv on 04.05.2021.
//

#ifndef DATA_STRUCKT_MYQUEUE_H
#define DATA_STRUCKT_MYQUEUE_H

#include "myList.h"

class Queue {
    List list;
public:
    void push(int data);
    void remove();
    void print();
};


#endif //DATA_STRUCKT_MYQUEUE_H
