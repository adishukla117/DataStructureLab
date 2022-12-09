#include<stdio.h>
# define size 5 
/*******************************************************************/
struct PQueue{
    int items[size];
    int Rear;
    int Front;
};
struct PQueue PQ;
/*******************************************************************/
void Initialize(){
    PQ.Front=0;
    PQ.Rear=0;
}
/*******************************************************************/
void insert(int value){
    if(PQ.Rear == -1){
        PQ.Rear++;
        PQ.items[PQ.Rear] = value;
    }
    else{
        for(int i = PQ.Rear)
    }
}
