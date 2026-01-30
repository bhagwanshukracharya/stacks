#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
vector<int>arr{9,5,8,4},ans(arr.size(),0);
stack<int>s;s.push(-1);
for(int i=arr.size()-1;i>=0;i--){
    while(s.top()!=-1&&s.top()>=arr[i])s.pop();
             ans[i]=s.top();
            s.push(arr[i]);
    
}for(auto i:ans)cout<<i<<"  ";
cout<<endl;
}
