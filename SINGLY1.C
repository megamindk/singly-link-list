#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *root,*temp,*newnode;
void create()
{
	int i,n;


	printf("\n enter number of nodes");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc (sizeof(struct node));

		printf("\n enter data");
		scanf("%d",&newnode->data);

		newnode->next=NULL;

		if(root==NULL)
		{
			root=newnode;
		}
			else{
			 temp=root;
		}


	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=newnode;

} }


void display()
{
clrscr();
temp=root;

	while(temp!=NULL)
	{
		printf("\n %d",temp->data);
		temp=temp->next;
	}
}

void del()
{
	int loc,i=1;
	struct node *dnode;
	     temp=root;

		printf("enter element position to be deleted");
		scanf("%d",&loc);

		while(i<loc-1)
		{
		    temp=temp->next;
			i++;
		}
		dnode=temp->next;
		temp->next=dnode->next;

		free(dnode);
}

void length()
{
int cnt=0;
temp=root;
		while(temp!=NULL)
		{
		temp=temp->next;
		cnt++;
		}
		printf("the length is %d",cnt);
}


void reverse()
{
int a[100],i;
temp=root;
while(temp!=NULL)
	{
	a[i]=temp->data;
	printf("\n %d",a[i]);
	temp=temp->next;
	i++;
	}
}



void main()
{
int ch;
clrscr();

while(1)
{
printf("\n 1.create \n 2.display \n 3.delete \n 4.length \n 5.reverse \n 6.exit");
printf("\n enter choice to be performed");
scanf("%d",&ch);


switch(ch)
{
case 1:create();
       break;

case 2:display();
       break;

case 3:del();
       break;

case 4:length();
	break;
case 5:reverse();
	break;

case 6:exit(0);
}
}

}