#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct stu
{
	int a;
	struct stu *next;
}Str;

Str *add(Str *);
Str *loop(Str *);
void print(Str *);
Str *search(Str *);
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

			case 's': head = search(head);
				  break;
			case 'p':
				  print(head);
				  break;
			case 'l':
				  head = loop(head);
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
Str *loop(Str *head)
{
	Str *temp=head;
	while(temp->next != NULL)
		temp=temp->next;
	temp->next=head;
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

Str *search(Str *head)
{
	Str *temp=head,*temp1=head;
	int len = 1,i;
	while(temp->next != temp1)
	{
		temp=temp->next;
		len++;
	}
	temp=head;
	printf("%d",len);
	for(i=0;i<len-1;i++)
	{
		temp1=temp1->next;
	}
	temp1->next=NULL;
	return head;

}
