#include<iostream>
using namespace std;
class bin
{
public:
	int num;
	int res,pow,rem;
	void bintodec()
	{

		while(num!=0)
		{
			rem = num%10;
			res = res+rem*pow;
			pow*=2;
			num = num/10;
		}
		cout<<"num is "<<res<<endl;

	}

};

int main()
{
bin test;
test.num=10110110;
test.pow=1;
test.bintodec();



}

