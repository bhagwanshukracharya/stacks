#include<iostream>
#include<stack>
using namespace std;
void check(stack<int>&b,int count,int size){
   if(count==size/2){
      b.pop();
      return;
   }
   int temp=b.top();
   b.pop();
   check(b,count+1,size);
   b.push(temp);
}
int main(){
    stack<int>b;
   for(int i=0;i<5;i++){
      b.push(i);
   }
   int size=b.size(),count=0;
   check(b,count,size);
   stack<int> temp = b;  // copy

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
}
   
