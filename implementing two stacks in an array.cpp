#include <bits/stdc++.h>
using namespace std;
struct twostacks{
    int cap;
    int *arr;
    int top1;
    int top2;
  twostacks(int x){
      cap=x;
      arr=new int[x];
      top1=-1;
      top2=x;
  }
  void push1(int y){
      if(top1<top2-1){
      top1++;
      arr[top1]=y;
       }
       else{
           cout<<"stack is overflow"<<" "<<endl;
           exit(1);
       }
       
  }
  void push2(int y){
      if(top1<top2-1){
      top2--;
      arr[top2]=y;
       }
       else{
           cout<<"stack is overflow"<<" "<<endl;
           exit(1);
       }
       
  }
int pop1(){
    if(top1>=0){
    int res=arr[top1];
    top1--;
    return res;
} 
    else{
        cout<<" stack under flow"<<" "<<endl;
        exit(1);
    }
}
int pop2(){
    if(top2<cap){
    int res=arr[top2];
    top2++;
    return res;
} 
    else{
        cout<<" stack under flow"<<" "<<endl;
        exit(1);
    }
}


};


int main()
{
   twostacks ts(8);
   ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is "<<ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 

    return 0;
}