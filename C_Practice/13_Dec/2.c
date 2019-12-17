#include<stdio.h>
#include<string.h>

int main()
{
	int n,res=0;
	scanf("%d",&n);
	int arr[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
				if(arr[i]==arr[j])
					arr[j]++;

		}
		if(i==n)
			break;
	}
	for(i=0;i<n;i++)
	{
		res += arr[i];
	}
	printf("%d\n",res);
}
