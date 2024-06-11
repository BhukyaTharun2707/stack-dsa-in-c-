#include<bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;
bool matching(char a,char b){
    return ((a == '(' && b == ')')||
            (a == '[' && b == ']' )  ||
            (a == '{' && b == '}'));
}
bool balanced_paanthesis(string &str){
    stack<char>s;
    for(char x:str){
        if(x =='('|| x =='['|| x =='{')
        s.push(x);
        else{
            if(s.empty()==true)
            return false;
            if(matching(s.top(),x)==false)
            return false;
            else
            s.pop();
        }
    }
return (s.empty()==true);
}
int main(){
    string s;
    cout<<"enter string"<<" ";
    cin>>s;
    if (balanced_paanthesis(s)) {
        cout << "The parentheses in the string are balanced." << endl;
    } else {
        cout << "The parentheses in the string are not balanced." << endl;
    }
    return 0;
}