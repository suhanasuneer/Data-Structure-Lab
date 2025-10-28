#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int q[SIZE];
int r=0,f=0;
void insertq(int item)
{
	int r1=r;
	r1=(r1+1)%SIZE;
	if((r1==f))
	{
		printf("Q  is full");
	}
	else
	{
		r=r1;
		q[r]=item;
	}
}
int deleteq1(int * status)
{
	if(f==r)
	{
		*status=0;
			printf("Q is Empty");
	}
	else
	{
		f=(f+1)%SIZE;
		*status=1;
		return q[f];
	}
}
int searchq(int item)
{
	int t;
	if (f!=r)
	{
		t=f;
		t=(t+1)%SIZE;
		while(t!=r&&q[t]!=item)
		{
			t=(t+1)%SIZE;
			if(q[t]==item)
			{	
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
}
void main()
{
	int item,opt,ans,status;
	do{
	   printf("1.Insert\n2.Delet\n3.Search\n4.Exit\n");
	   printf("\n Enter an option:\n");
	   scanf("%d",&opt);
		switch(opt)
		{
		case 1:
		printf("Enter the data:");
		scanf("%d",&item);
		insertq(item);
		break;
		case 2:
		item=deleteq1(&status);
		if(status==1)
		{
			printf("Deleted=%d",item);
		}
		break;
		case 3:
		printf("Enter the element to be searched:");
		scanf("%d",&item);
		ans=searchq(item);
		if(ans==0)
		{
		printf("Not Found");
		}
		else
		{
		printf("Item found at %d position\n",ans);
		}
		break;
		case 4:
		exit (0);
		}
	}while(1);
}
