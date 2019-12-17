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
void search(Str *,Str *);
int main(void)
{
	char ch;
	Str *head=NULL,*head1=NULL;
	while(1)
	{
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'i': head = add(head);
				  break;
			case 'a': head1=add(head1);
				  break;

			case 's': search(head,head1);
				  break;
			case 'p':
				  print(head);
				  print(head1);
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

void search(Str *head,Str *head1)
{
	Str *temp=head,*temp1=head1;
	int i=0;

	while(temp != NULL)
	{
		while(temp1!=NULL)
		{
			if(temp->a == temp1->a)
			{
				printf("The junction point data is %d",temp->a);
				i=1;	
				break;
			}
			temp1=temp1->next;
		}
		if(i==1)
			break;
		temp=temp->next;
		temp1 = head1;
	}



}
