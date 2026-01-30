#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;

public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    ~Stack(){
        delete[] arr;
    }

    void push(int data){
        if(top < size - 1)
            arr[++top] = data;
        else
            cout << "no space!!" << endl;
    }

    void peek(){
        if(top >= 0)
            cout << "the top element is:- " << arr[top] << endl;
        else
            cout << "stack is empty!!" << endl;
    }

    void pop(){
        if(top >= 0)
            cout << "the element popped out is:- " << arr[top--] << endl;
        else
            cout << "khaali hai bhai kuch daalo toh sahi" << endl;
    }

    bool empty(){
        return top == -1;
    }
};

int main(){
    Stack s(6);

    s.peek();
    cout << (s.empty() ? "empty hai!!" : "not empty!!") << endl;

    s.push(10);
    s.peek();

    s.pop();
    cout << (s.empty() ? "empty hai!!" : "not empty!!") << endl;
}
