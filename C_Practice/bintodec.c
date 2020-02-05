#include<stdio.h>
#include<string.h>
int main()
{
	int num = 10110110;
	int temp=0,rem=0,res=0,pow=1;
	int i;
	while(num!=0)
{
	rem = num%10;
	res = res+rem*pow;
	pow*=2;
	num = num/10;
}
printf("%d\n",res);
}
