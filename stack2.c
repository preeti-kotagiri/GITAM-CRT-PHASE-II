#define n 5
void main()
{
int arr[n],top=-1,val;
//inserting elements into stack
for(int i=0;i<n;i++)
{
scanf("%d",&val);
arr[++top]=val;
}
printf("\n after adding elements");
for(int i=0;i<=top;i++)
    printf("%d ",arr[i]);
printf("\n after removing an element");
//deleting an element from stack
top = top-1;
for(int i=0;i<=top;i++)
    printf("%d ",arr[i]);
}
