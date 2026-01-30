#include<iostream>
#include<stack>
using namespace std;
int check(string str){stack<char>s;
    int size=str.length();
    if(size%2!=0)return -1;
    else{for(int i=0;i<size;i++)
        {char ch=str[i];
        if(ch=='{')s.push(ch);
        else{
            if(!s.empty()&&s.top()=='{')s.pop();
            else{
                s.push(ch);
            }
        }
    }
}int a,b;a=b=0;
while(!s.empty()){
if(s.top()=='}')b++;
else a++;
s.pop();
}return (((a+1)/2)+((b+1)/2));
}
int main(){
    string s="}}}}}}";
    cout<<check(s);
}