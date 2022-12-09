#include<stdio.h>
typedef long long int ll;
typedef struct stack s1;
using namespace std;




struct stack
{
    int a[20];
    int top;
}*s;


void push(int val);
int pop();
void display();
void create(s1 *s);

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    s1 *s;
    s=(s1 *)malloc(sizeof(s1));
    s->top=-1;
    // create(s);
    for(int i=0;i<7;i++)
        push(i);
    
    display();
return 0;
}


// void create(s1* s){
//     s=(s1 *)malloc(sizeof(s1));
//     s->top=-1;
// }
void push(int val){
    s->top=s->top+1;
    s->a[s->top]=val;
}
int pop(){
    int temp= s->a[s->top];
    s->top=s->top-1;
    return temp;
}
void display(){
    for(int i=0;i<s->top;i++){
        cout<<s->a[i]<<" ";
    }
}