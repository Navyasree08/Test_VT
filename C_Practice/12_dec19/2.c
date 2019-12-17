#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct stu
{
	int a;
	struct stu *next;
}Str;

Str *add(Str *);
void print(Str *);
void search(Str *);
int main(void)
{
	char ch;
	Str *head=NULL;
	while(1)
	{
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'a': head=add(head);
				  break;

			case 's': search(head);
				  break;
			case 'p':
				  print(head);
				  break;
			default:
				  printf("Not a valid entry\n");
				  break;
		}

	}

}

Str *add(Str *head)
{
	Str *nu = malloc(sizeof(Str)),*temp=head;
	printf("Enter data\n");
	scanf("%d",&nu->a);
	if(head == NULL)
	{
		nu->next = NULL;
		head=nu;
		return head;
	}
	while((temp->next)!=NULL)
	{
		temp = temp->next;
	}
	nu->next=NULL;
	temp->next=nu;

	return head;
}

void print(Str *temp)
{

	while(temp!=NULL)
	{
		printf("%d\n",temp->a);
		temp=temp->next;
	}
	return;
}

void search(Str *head)
{
	Str *temp=head;
	int i=0,j;
	int s;
	printf("enter the node to search\n");
	scanf("%d",&s);

	while(temp!=NULL)
{
temp =temp->next;
i++;
	
}
temp=head;
if(s>i)
{
printf("Not a valid node to search\n");
return;
}
for(j=1;j<i-s+1;j++)
	temp=temp->next;
printf("Data is %d",temp->a);
return;


}
