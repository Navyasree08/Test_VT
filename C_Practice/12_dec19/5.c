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
Str *reverse(Str *);
int main(void)
{
	char ch;
	Str *head=NULL;
	while(1)
	{
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'a': head = add(head);
				  break;
			case 'b': head = reverse(head);
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

Str *reverse(Str *temp)
{
	Str *pre=NULL,*cur=temp,*nt=NULL;
	while(cur != NULL)
	{
		nt = cur->next;
		cur->next = pre;
		pre = cur;
		cur = nt;
	}
	temp = pre;
	return temp;



}
