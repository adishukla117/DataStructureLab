#include<bits/stdc++.h>
typedef long long int ll;
#define size 100
using namespace std;
struct sta
{
    char a[size];
    int top;
}s;
void push(char val);
char pop();
void ini();

int main()
{
    int n,b;
    // cin>>n;
    // b=n;
    // while(b!=0){
    //     push(b%10);
    //     b/=10;
    // }
    // while (n!=0)   
    // {
    //     int k=pop();
    //     if(k!=n%10)
    //         break;
    //     n/=10;
    // }
    // if(n>0)
    //     cout<<"NO";
    // else
    //     cout<<"Palindrome";
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        push(str[i]);
    }
    while(s.top>=0){
        cout<<pop();
    }
    return 0;
}

void ini(){
    s.top=-1;
}
void push(char val){
    if(s.top==size-1){
        cout<<"Stack Overflow";
        exit(1);
    }
    s.top=s.top+1;
    s.a[s.top]=val;
}
char pop(){
    
    if(s.top==-1){
        cout<<"Stack Underflow";
        exit(1);
    }
    char temp= s.a[s.top];
    s.top=s.top-1;
    return temp;
}