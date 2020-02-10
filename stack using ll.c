#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node * top=NULL;
void push(int x)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=top;
    top=temp;
}
void pop()
{
    struct node *temp;
    if(top==NULL) return;
    temp=top;
    top=top->link;
    free(temp);
}
void display()
{
    struct node *p;
    if(top==NULL)
    {
        printf("list is empty");
        return;
    }
    else
    {
        printf("elements are:");
        for(p=top;p!=NULL;p=p->link)
            printf("%d ",p->data);
    }
}
void main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    display();

}
