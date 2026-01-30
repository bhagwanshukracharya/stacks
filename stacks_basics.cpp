#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
     cout<<"the size of stack is:- " <<a.size()<<endl;
    cout<<"printing top:- "<<endl<<a.top()<<endl;
    a.pop();
    cout<<"printing top:- "<<endl<<a.top()<<endl;
    a.empty()?cout<<"empty"<<endl:cout<<"elements present! "<<endl;
    cout<<"the size of stack is:- " <<a.size()<<endl;
}