#include<iostream>
#include<stack>
using namespace std;
void sort_insert(stack<int>&s,int top){
    if(s.empty()|| s.top()<top){
        s.push(top);
        return;
    }
    int temp=s.top();
    s.pop();
    sort_insert(s,top);
    s.push(temp);
}
void sort(stack<int>&s){
    if(s.empty())return;
    int top=s.top();
    s.pop();
    sort(s);
    sort_insert(s,top);

}
int main(){
    stack<int>s;
    s.push(1);
    s.push(5);
    s.push(-2);
    s.push(-8);
    s.push(0);
    sort(s);
    stack<int>temp=s;
    while(!temp.empty()){
        cout<<temp.top()<<"  ";
        temp.pop();
    }
}