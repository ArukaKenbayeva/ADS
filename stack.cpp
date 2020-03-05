#include <iostream>
#include <string>

using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class Stack{
    public:
    Node *top;
    int _size = 0;
    void push(int data){
        Node *node = new Node(data);
        if(top == NULL){
            top = node;
        }
        else{
            node->next = top;
            top = node;
        }
        _size++;
        cout << "ok" << endl;
    }
    void pop(){
        if(top != NULL){
            cout << top->data << endl;
            top = top->next;
            _size--;
        }
    }
    void back(){
        cout << top->data << endl;
    }
    void size(){
        cout << _size << endl;
    }
    void clear(){
        if(top != NULL){
            while( _size != 0){
                top = top->next;
                _size--;
            }
        }
        cout << "ok" << endl;
    }
};
int main(){
    Stack myStack;
    string command;
    int x;
    while(cin >> command){
        if(command == "push"){
            cin >> x;
            myStack.push(x);
        }
        else if(command == "size"){
            myStack.size();
        }
        else if(command=="pop"){
            myStack.pop();
        }
        else if(command=="back"){
            myStack.back();
        }
        else if(command =="clear"){
            myStack.clear();
        }
        else if(command=="exit"){
            cout << "bye"<<endl;
            break;
        }
    }
}
