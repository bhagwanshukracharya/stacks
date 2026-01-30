#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
vector<int>arr{1,5,8,4},ans(arr.size(),0);
stack<int>s;
for(int i=0;i<arr.size();i++){
    while(!s.empty()&&s.top()>=arr[i])s.pop();
        if(s.empty())ans[i]=-1;
        else ans[i]=s.top();
            s.push(arr[i]);
    
}for(auto i:ans)cout<<i<<"  ";
cout<<endl;
}
