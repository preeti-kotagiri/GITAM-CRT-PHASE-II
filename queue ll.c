#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node * front=NULL;
struct node * rear=NULL;
void enqueue(int x)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}
void dequeue()
{
    if(front==NULL) return;
    struct node*temp=front;
    if(front == rear) front=rear=NULL;
    else front=front->next;
    free(temp);
}
void display()
{
    struct node *p;
    printf("elements are:");
    for(p=front;p!=NULL;p=p->next)
        printf("%d ",p->data);
}
void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    dequeue();
    display();
}
