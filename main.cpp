#include <iostream>

class Node{
public:
    Node(int data);
    int data;
    Node* next;
};

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

class Stack{
   Node* top;
public:
    Stack();
    void push(int data);
    void remove();
    void pop();
    void peek();
};

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

Node::Node(int data) {
    this->data=data;
    next = nullptr;
}

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

int main() {
    std::cout << "Hello, World!" << std::endl;
    List list;
    for (int i = 0; i < 5; ++i) {
        list.pushBack(i);
    }
    list.print();
    list.remove(3);
    list.print();

    Stack stack;
    for (int i = 0; i < 5; ++i) {
        stack.push(i);
    }
    stack.pop();
    stack.peek();

    return 0;
}
