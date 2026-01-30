#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
vector<int>next_smaller(int*arr,int n){vector<int>ans(n);
    stack<int>s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        while(s.top()!=-1 && arr[s.top()]>=arr[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
        
    }return ans;
}
vector<int>previous_smaller(int*arr,int n){vector<int>ans(n);
    stack<int>s;
    s.push(-1);
    for(int i=0;i<n;i++){
        while(s.top()!=-1&&arr[s.top()]>=arr[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
        
    }return ans;
}
int largest_area(int*arr,int n){
   vector<int>next=next_smaller(arr,n);
   vector<int>previous=previous_smaller(arr,n);
   int area=INT_MIN;
   for(int i=0;i<n;i++){
    int length=arr[i];
    if(next[i]==-1)next[i]=n;
    int breath=next[i]-previous[i]-1;
    int new_area=length*breath;
    area=max(area,new_area);
    
   }return area;
}
int main(){
int arr[]={2,1,5,6,9,3},n=6;
cout<<"the largest area is :- " <<largest_area(arr,n);
}