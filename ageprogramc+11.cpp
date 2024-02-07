#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the age: "<<endl;
	cin>>a;
	if(a<=18)
	{
		cout<<"teenage"<<endl;
	}
	else if(a>18&&a<60)
	{
		cout<<"adult"<<endl;
	}
	else
	{
		cout<<"old aged"<<endl;
	}
}
