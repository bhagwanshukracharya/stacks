#include<iostream>
using namespace std;
class TwoStack{
    int *arr;
    int size;
    int top1;
    int top2;
    public:
    TwoStack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    ~TwoStack(){
        delete []arr;
     }
     void push1(int data){
        if(top2-top1>1)arr[++top1]=data;
        else cout<<"no space!! "<<endl;
     }
     void push2(int data){
        if(top2-top1>1)arr[--top2]=data;
        else cout<<"no space!! "<<endl;
     }
     int pop1(){int temp;
        if(top1>=0){temp=arr[top1--];return temp;}
        else return -1;
     }
     int pop2(){int temp;
        if(top2<size){temp=arr[top2++];return temp;}
        else return -1;
     }
     void peek1(){
      if(top1>=0)cout<<arr[top1]<<endl;
      else{
         cout<<"no element!! "<<endl;
      }
     }
     void peek2(){
      if(top2<size)cout<<arr[top2]<<endl;
      else{
         cout<<"no element!! "<<endl;
      }
     }
};
int main(){
    TwoStack s(8);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.peek1();
    s.peek2();
    s.pop1();
    s.pop2();
   s.peek1();
    s.peek2();
}