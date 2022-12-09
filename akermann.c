#include<stdio.h>
int ack(int m,int n);
int main(){
    int m=2,n=6;
    int k=ack(m,n);
    printf("%d",k);
}
int ack(int m,int n){
    if(m==0)
    return n+1;
    else if(m!=0&&n==0)
    return ack(m-1,1);
    return ack(m-1,ack(m,n-1));
}