#include<iostream>
#include<stack>
using namespace std;
struct mystack{
    int *arr;
    int cap;
    int top;
    mystack(int c){
        cap=c;
        arr=new int[cap];
        top=-1;
    }
void push(int x){
    top++;
    arr[top]=x;
}
int pop(){
    int res=arr[top];
    top--;
    return res;
}
int peek(){
    return arr[top];
}
int size(){
    return top+1;
}
bool isEmpty(){
    
    if(top==-1)
    return true;
    else
    return false;
}
};
int main(){
    mystack s(6);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
 return 0;   
}