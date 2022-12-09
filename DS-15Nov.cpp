#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

char DAT[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
struct Stack
{
    int a[100];
    int top;
};
struct Stack s;


void push(int val);
int pop();
void ini();
void bina(int n);
void octa(int n);
void any(int n,int y);



void bina(int n){
    while (n!=0)
    {
        push(n%2);
        n=n/2;
    }
    while(s.top!=-1){
        int x=pop();
        cout<<DAT[x];
    }
}
void octa(int n){
    while (n!=0)
    {
        push(n%8);
        n=n/8;
    }
    while(s.top!=-1){
        int x=pop();
        cout<<DAT[x];
    }
}
void hexa(int n){
    while (n!=0)
    {
        push(n%16);
        n=n/16;
    }
    while(s.top!=-1){
        int x=pop();
        cout<<DAT[x];
    }
}
void any(int n,int y){

}


int main()
{
    int n=240;
    ini();
    hexa(n);
    // octa(n);


    return 0;
}
void ini(){
    s.top=-1;
}
void push(int val){
    if(s.top==99){
        cout<<"Stack Overflow";
        exit(1);
    }
    s.top=s.top+1;
    s.a[s.top]=val;
}
int pop(){
    if(s.top==-1){
        cout<<"Stack Underflow";
        exit(1);
    }
    int temp= s.a[s.top];
    s.top=s.top-1;
    return temp;
}