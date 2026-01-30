#include<iostream>
#include<stack>
using namespace std;
void add_at_last(stack<int>&s,int n){
   if(s.empty()){s.push(n);return;}
   int temp=s.top();
   s.pop();
   add_at_last(s,n);
   s.push(temp);

}
int main(){
   stack<int>s;int n=0;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  add_at_last(s,n);
  stack<int>temp=s;
  while(!temp.empty()){
   cout<<temp.top()<<" ";
   temp.pop();
  }

}
