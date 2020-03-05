//queue realization
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
class Queue{
    public:
        Node *tail, *front;
        int _size = 0;
    Queue(){
        tail = NULL;
        front = NULL;
    }
    void push(int data){
        if(front == NULL){
            Node *node = new Node(data);
            tail = node;
            front = node;
        }
        else{
            Node *node = new Node(data);
            tail->next = node;
            tail = node;
        }
        _size++;
        cout << "ok" << endl;
    }
    void pop(){
        if(front != NULL){
            cout << front->data << endl;
            front = front->next;
        }
        _size--;
        if (front == NULL)
            tail = NULL;
    }
    void _front(){
        cout << front->data << endl;
    }
    void size(){
        cout << _size << endl;
    }
    void clear(){
        if(front != NULL){
            front = NULL;
            tail = NULL;
            _size = 0;
            cout << "ok" << endl;
        }
    }

};
int main(){
    int x;
    cin>>x;
    Queue q;
    q.push(x);
    cout << "First element: "<< q._front() << endl;
    cout << "Pop front element : " << q.pop() << endl;
    cout<< "Size: "<< q.size() << endl;
    q.clear();

    return 0;

}
