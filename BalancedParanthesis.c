#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define max 30
int stack[max];
int top=-1;
void push(char a);
char pop();
int check(char []);
int match(char a,char b);

int main(){
    char exp[30];
    gets(exp);
    int result=check(exp);
    if(result)
        printf("Valid Expression");
    else
        printf("Invalid Expression");
    return 0;
}
int check(char exp[]){
    char temp;
    for(int i=0;i<strlen(exp);i++){
        if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
            push(exp[i]);

        if(exp[i]=='}'||exp[i]==']'||exp[i]==')'){
            if(top==-1)
                return 0;
            else{
                temp=pop();
                if(!match(temp,exp[i]))
                    return 0;
            }
        }
    }
    if(top==-1)
        return 1;
    else
        return 0;
}
int match(char a,char b){
    if(a=='['&& b==']')
        return 1;
    if(a=='('&& b==')')
        return 1;
    if(a=='{'&& b=='}')
        return 1;
    return 0;
}
char pop(){
    if(top==-1){
        printf("Stack Underflow");
        exit(1);
    }
    return stack[top--];
}
void push(char a){
    if(top==max-1){
        printf("Stack Overflow");
        return;
    }
    top+=1;
    stack[top]=a;
}