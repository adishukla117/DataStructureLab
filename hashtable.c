#include<stdio.h>
#define MAX_SIZE 256
int DAT[MAX_SIZE],t=10;
int c[10];
int hash(int key,int nk,int *collisions);
// typedef struct{
//     int data[t];
//     int keys[t];
// }d;


int main(){
    int a[]={2,4,5,2,2,6,7,8,9,11};
    for(int i=0;i<10;i++){
        int key=hash(a[i],0,&c[i]);
        DAT[key]=a[i];
    }
    for (int i = 0; i < 15; i++)
    {
        /* code */
        if(DAT[i]!=0)
        printf("%d\t%d",DAT[i],i);
    }
    
    return 0;
}
int hash(int key,int nk,int *c){
    if(DAT[key]==0)
        return key;
    int a=*c;
    *c++;
    nk=(key+a*a)%t;
    hash(key,nk,c);
}