#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n],res=0,j;

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(j=1;j<100;j++)
	{
		res =j;
		for(i=0;i<n;i++)
		{
			res+=arr[i];	
			if(res<1)
				break;
		}
		if(i==n)
			break;
	}
	printf("%d\n",j);

}
