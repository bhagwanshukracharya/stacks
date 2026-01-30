#include<iostream>
#include<stack>
#include<climits>
#include<vector>
using namespace std;
vector<int>next_smaller(int*arr,int n){
    stack<int>s;vector<int>next(n);
    s.push(-1);
    for(int i=n-1;i>=0;i--){
    while(s.top()!=-1&&arr[s.top()]>=arr[i])s.pop();
    next[i]=s.top();
    s.push(i);
}return next;}
vector<int>previous_smaller(int*arr,int n){
    stack<int>s;vector<int>previous(n);
    s.push(-1);
    for(int i=0;i<n;i++){
    while(s.top()!=-1&&arr[s.top()]>=arr[i])s.pop();
    previous[i]=s.top();
    s.push(i);
}return previous;}
int area(int*arr,int n){
    vector<int> next=next_smaller(arr,n);
    vector<int> prev=previous_smaller(arr,n);
    int maxarea=INT_MIN;
    for(int i=0;i<n;i++){
        int length=arr[i];
        if(next[i]==-1)next[i]=n;
        int breath=next[i]-prev[i]-1;
        int new_area=length *breath;
        maxarea =max(maxarea,new_area);
    }return maxarea;
    
}

int largest_area(vector<vector<int>>m,int n){
 
       int max_area=area(m[0].data(),n);

            
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[i][j]!=0)
            m[i][j]=m[i][j]+m[i-1][j];
            }max_area=max(max_area,area(m[i].data(),n));
        
    }return max_area;
}
int main(){
    vector<vector<int>>m{{0,1,0,1},{1,1,1,1},{1,1,1,1},{0,1,0,1}};
    int n=4;
    cout<<largest_area(m,n);
}