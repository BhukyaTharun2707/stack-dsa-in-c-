#include<iostream>
#include<vector>
using namespace std;
struct mystack{
   vector<int>v;
    
void push(int x){
    v.push_back(x);
}
int pop(){
    int res=v.back();
    v.pop_back();
    return res;
}
int peek(){
    return v.back();
}
int size(){
    return v.size();
}
bool isEmpty(){
    return v.empty();
}
};
int main(){
    mystack s;
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