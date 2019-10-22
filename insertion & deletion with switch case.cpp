#include<stdio.h>
int main()
{
	int i,n,a[100],item,pos,choice;
{
	printf("\n1.for inserting the item");
	printf("\n2.for deletion the item");
	printf("\n\n enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
			printf("enter the size of array");
			scanf("%d",&n);
			printf("enter the element of the array");
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			printf("enter the position and element of the array to be inserted");
			scanf("%d%d",&pos,&item);
			for(i=n-1;i>=pos-1;i--)
			{
			a[i+1]=a[i];
		}
			a[pos-1]=item;

			for(i=0;i<=n;i++)
			
			printf("%d",&a[i]);
			break;
		case 2:
			printf("enter the size of array");
			scanf("%d",&n);
			printf("enter the element of the array");
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			printf("enter the position of the element to be deleted");
			scanf("%d",&pos);
			for(i=pos;i<n;i++)
			a[i]=a[1+i];
			for(i=0;i<n;i++)
			printf("%d",&a[i]);
			break;
		default:
		        printf("invalid choice");	
		}
	return 0;
}
}
