//
// Created by vperv on 04.05.2021.
//

#include <iostream>
#include "header-files/myList.h"


List::List() {
    head = nullptr;
    teal = nullptr;
}

List::List(Node *head) {
    this->head=head;
    teal = head;
}

bool List::isEmpty() {
    if (head == nullptr) {
        return true;
    }
    return false;
}

void List::pushBack(int data) {
    Node* nd = new Node(data);
    if(isEmpty()){
        head = nd;
        teal = nd;
        return;
    }
    teal->next = nd;
    teal = nd;
}

void List::print() {
    if(isEmpty()){
        return;
    }
    Node * nd = head;
    while(nd){
        std::cout << nd->data << std::endl;
        nd = nd->next;
    }
    std::cout << std::endl;
}

void List::search(int data) {
    if(isEmpty()){
        std::cout << "list is empty" << std::endl;
    }
    Node* nd = head;
    while(nd){
        if(nd->data == data){
            std::cout << "Found!! " << nd->data << std::endl;
            return;
        }
        nd=nd->next;
    }
    std::cout << "not Found!! "<< std::endl;
}

void List::popFront() {
    if(isEmpty()) {
        return;
    }
    Node* nd = head;
    head = nd->next;
    delete nd;
}

void List::pop() {
    if(isEmpty()){
        return;
    }
    if(teal==head){
        popFront();
        return;
    }
    Node* nd = head;
    while(nd->next != teal){
        nd = nd->next;
    }
    nd->next = nullptr;
    delete teal;
    teal = nd;
}

void List::remove(int data) {
    if(isEmpty()){
        return;
    }
    if(head->data == data){
        popFront();
        return;
    } else if (teal->data == data) {
        pop();
        return;
    }
    Node* nd = head;
    while(nd && nd->next->data != data){/*
        if(nd->next->data == data){
            nd->next = nd->next->next;
            return;
        }*/
        nd = nd->next;
    }
    nd->next = nd->next->next;
}
