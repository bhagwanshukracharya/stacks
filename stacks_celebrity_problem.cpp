#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int celebrity(vector<vector<int>>m,int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    int a,b;
    while(s.size()>1){
        a=s.top();
        s.pop();
        b=s.top();
        s.pop();
        if(m[a][b]==1)s.push(b);
        else s.push(a);
    }
    int zerocount=0;
    for(int i=0;i<n;i++){
        if(m[s.top()][i]==0)zerocount++;
    }
    if(zerocount!=n)return -1;

    int onecount=0;
    for(int i=0;i<n;i++){
        if(m[i][s.top()]==1)onecount++;
    }if(onecount!=n-1)return -1;

    return s.top();
}
int main(){
    vector<vector<int>>m{{0,1,0},{0,0,0},{0,1,0}};
    int n=3;
    cout<<celebrity(m,n);
}