#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node *next;
}*a,*b,*c;
int main(){
    // struct node *a,*b,*c;
    a = (struct node *)malloc(sizeof(struct node));
    a->val = 8;
    b = (struct node *)malloc(sizeof(struct node));
    b->val = 7;
    c = (struct node *)malloc(sizeof(struct node));
    c->val = 4;
    a->next = b;
    b->next = c;
    c->next = '\0';
    struct node *head = a;
    while(head !='\0'){
        printf("%d ",head->val);
        head = head->next;
    }
    return 0;
}