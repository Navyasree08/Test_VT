#include<stdio.h>
int main()
{
	int dec =182;
	int res=0,rem,pow=1;
	while(dec!=0)
{
		rem = dec%2;
		res  = res + (rem*pow);
		pow*=10;
		dec/=2;
}
printf("%d\n",res);


}
