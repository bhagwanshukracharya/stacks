#include<iostream>
#include<stack>
using namespace std;
int main(){
   string s="Babbar";
   stack<char>b;
   for(int i=0;i<s.length();i++){
      b.push(s[i]);
   } s="";
      
   while(!b.empty()){

      s+=b.top();
      b.pop();
   }
   cout<<s;
}