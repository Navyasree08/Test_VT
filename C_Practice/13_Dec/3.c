#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],temp[5]="aeiou";
	int i,j,c=0,count=0;
	scanf("%s",arr);
	for(i=0;i<5;i++)
	{
		for(j=0;j<strlen(arr);j++)
		{
			if(arr[j]==temp[i])
				count++;
			if(arr[j]>temp[i])
				break;
		}

	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<strlen(arr);j++)
		{
			if(arr[j] == temp[i])
				continue;
		}
		if(j==strlen(arr))
			c=1;
		
	}
	if(c==1)
		printf("The string s des not contain all of the vowels\n");
	else
		printf("%d\n",count);



}
