#include<stdio.h>
struct student{
    int r;
    char name[20];
    int m;
}s[3],*s1;

int main(){
    s1=s;
    for(int i=0;i<3;i++)
        scanf("%d%s%d",&(s1+i)->r,&(s1+i)->name,&(s1+i)->m);
    for(int i=0;i<3;i++){
        printf("%d- %s: %d\n",(s1+i)->r,(s1+i)->name,(s1+i)->m);
    }
    return 0;
}