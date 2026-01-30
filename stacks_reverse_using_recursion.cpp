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
void reverse_stack(stack<int>&s){
   if(s.empty())return;
   int top=s.top();
   s.pop();
   reverse_stack(s);
 add_at_last(s,top);
}
int main(){
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
stack<int>temp=s;
while(!temp.empty()){
   cout<<temp.top()<<"  ";
   temp.pop();
}cout<<endl;

reverse_stack(s);
temp=s;
while(!temp.empty()){
   cout<<temp.top()<<"  ";
   temp.pop();
}

}
