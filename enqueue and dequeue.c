/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front,*rear;

************************************************************************
struct node *enqueue(struct node *rear,int n)
{
    if(front==NULL){
        front=malloc(sizeof(struct node));
        front->data=n;
        front->next=NULL;
        rear=front;
        return rear;
    }
    struct node *temp=malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    rear->next=temp;
    rear=temp;
    return rear;
};
*************************************************************************
struct node *dequeque(){
    
    if(front!=NULL){
    struct node *temp,*temp2;
    temp=front->next;
    if(temp==NULL){
        rear=NULL;
    }
    
    temp2=front;
    free(front);
    front=temp;
    return temp2;
        
    }
}


int main()
{
    // struct node *front,*rear;
    struct node *curr;
    rear=enqueue(rear,6);
    curr=dequeque();
    if(rear==NULL){
       printf("Hello World\n"); 
    //   printf("%d",rear->data);
    }
    

    return 0;
}
