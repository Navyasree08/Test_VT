
#include<iostream> 
using namespace std; 

//template<class T> 
class A  { 
	public: 
		int x; 
		// U y; 
		A();
		void display(void);
}; 
A::A()
{    //cout<<"Constructor Called"<<endl;   
	cin>>x;

} 

void A::display(void)
{
	//cin>>x;
	cout<<x<<endl;
}

int main()  { 
	int p=2;
	A a();
	a.display(); 
	//A<int> b;

	//b.display(); 
	return 0; 
} 

