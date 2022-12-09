#include<stdio.h>
#include<stdlib.h>
#define size 20
struct Que
{
    int items[20];
    int Front,Rear;
}CQ;
/*******************************************************************/
void initialize(){
    CQ.Front=-1;
    CQ.Rear=-1;
}
/*******************************************************************/
int isEmpty(){
    if(CQ.Front==CQ.Rear)
        return 1;
    return 0;
}
/*******************************************************************/
void insert(int x){
    if(CQ.Rear==size-1){
        printf("Queue Overflows");
        exit(1);
    }
    CQ.Rear=CQ.Rear+1;
    CQ.items[CQ.Rear]=x;
}
/*******************************************************************/
int deletion(){
    int x;
    if(isEmpty()){
        printf("Queue Underflows");
        exit(1);
    }
    CQ.Front=CQ.Front+1;
    x=CQ.items[CQ.Front];
    return x;
}
/*******************************************************************/
int main(){
    int choice,x,p;
    while(1){
        printf("ENTER\n1 for Insertion.\n2 for Deletion.\nAny other to Discontinue\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Enter Element to be pushed: ");
                scanf("%d",&x);
                insert(x);
                break;
            case 2:
                p=deletion();
                break;
            default:
                exit(0);
        }
    }
    return 0;
}