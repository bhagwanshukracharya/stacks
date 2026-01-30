#include<iostream>
#include<stack>
using namespace std;
bool valid(stack<char>s,string str){
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='('||ch=='{'||ch=='['){
            s.push(ch);
        }
        else{
            if(s.empty())return false ;
            else{
                char top=s.top();
                if((ch==')'&&top=='(')||(ch=='}'&&top=='{')||(ch==']'&&top=='['))
                {
                    s.pop();
                }
                else return false;
            }
        }
    }return s.empty();
}
int main(){
    string str="{((";
    stack<char>s;
   cout<< valid(s,str);
}