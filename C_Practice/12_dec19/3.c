#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len;
	char arr[100],temp;
	printf("Enter the string\n");
	scanf("%s",arr);
	j=strlen(arr)-1;
	len=(strlen(arr)/2);
	for(i=0;i<len;i++)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}

	printf("After reversing string is %s\n",arr);
}
