#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x){
        data=x;
        next=NULL;
    }
};
 struct mystack{
    int size;
    Node *head;
    mystack(){
        head==NULL;
        size=0;
    }
void push(int y){
    Node *temp=new Node(y);
    temp->next=head;
    head=temp;
    size++;
}
int pop(){
    if(head==NULL)
    return INT_MAX;
int res=head->data;
Node *temp=head;
head=head->next;
delete temp;
size--;
return res;

}
int peek(){
    if(head==NULL)
    return INT_MAX;
int res=head->data;
return res;
}
int length(){
    return size;
}
bool isEmpty(){
    return head==NULL;
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
    cout<<s.length()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.length()<<endl;
 return 0;   
}