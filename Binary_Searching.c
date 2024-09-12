#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
int Q[MAX],n,se,i,flag=0,l,u,mid;
printf("enter number of element to be taken");
scanf("%d",&n);
printf("\n enter %d elementsn",n);
for (i=0;i<n;i++)
{
scanf("%d",&Q[i]);
}
printf("\n element the searching element");
scanf("%d",&se);
l=0,u=n-1;
while(l<=u)
{
mid=(l+u)/2;
if(se>Q[mid])
{
l=mid+1;
}
else if(se<Q[mid])
{
u=mid-1;
}
else
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\n element found");
printf("\n element is at position=%d",(mid+1));
}
else
{
printf("\n element not found");
}
getch();
}
