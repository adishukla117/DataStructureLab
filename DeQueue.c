#include<bits/stdc++.h>
using namespace std;
# define size 10 
/*******************************************************************/
struct CQueue{
    int items[size];
    int Rear;
    int Front;
};
struct CQueue CQ;
/*******************************************************************/
void Initialize(){
    CQ.Front=-1;
    CQ.Rear=-1;
}
/*******************************************************************/
void insert(int x){
    if((CQ.Rear+1)%size == CQ.Front){
        cout<<"Queue Overflows";
        exit(1);
    }
    CQ.Rear=(CQ.Rear+1) % size;
    CQ.items[CQ.Rear]=x;
}
/*******************************************************************/
int deletion(){
    int x;
    if(CQ.Rear==CQ.Front){
        cout<<"Queue Underflows";
        exit(1);
    }
    CQ.Front=(CQ.Front+1) % size;
    x=CQ.items[CQ.Front];
    return x;
}
/*******************************************************************/
void display(){
    for(int i=CQ.Front+1;i<=CQ.Rear;i++){
        cout<<CQ.items[i]<<" ";
    }
    cout<<endl;
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
                cout<<"Enter Element to be pushed: ";
                cin>>x;
                insert(x);
                break;
            case 2:
                p=deletion();
                break;
            default:
                display();
                exit(0);
        }
    }
    return 0;
}
/*******************************************************************/