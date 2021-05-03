//
// Created by vperv on 04.05.2021.
//

#include "header-files/myQueue.h"

void Queue::push(int data) {
    list.pushBack(data);
}

void Queue::remove() {
    list.popFront();
}

void Queue::print() {
    list.print();
}
