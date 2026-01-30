#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Nstack{
    int*arr;
    int*next;
    int freespot;
    int*top;
    int k;int n;
public:
    Nstack(int k,int n){
        this->k=k;
        this->n=n;
        arr=new int[n];
        next=new int[n];
        top=new int[k];

        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
        for(int i=0;i<k;i++){
            top[i]=-1;
        }
        freespot=0;
    }
    ~Nstack(){
        delete []arr;
        delete []next;
        delete []top;
    }
    bool push(int data,int stack_no){
        if(freespot==-1)return false;
        else{
        int index=freespot;
        arr[index]=data;
        freespot=next[index];
        next[index]=top[stack_no-1];
        top[stack_no-1]=index;
        return true;
    }}
    int pop(int stack_no){
        if(top[stack_no-1]==-1)return-1;
        else{
           int index=top[stack_no-1];
            top[stack_no-1]= next[index];
             next[index]= freespot;
              freespot= index;
              return arr[index];
        }
    }
};
int main(){Nstack a(3,6);
a.push(10,1);
a.push(20,2);
a.push(30,2);
a.push(40,3);
a.push(50,1);
cout << a.pop(1) << endl; 
cout << a.pop(2) << endl; 
cout << a.pop(3) << endl;

}