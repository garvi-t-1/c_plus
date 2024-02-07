#include<iostream>
using namespace std;
int fibonacci(int)
{
	int x=0;
	int y=1;
	cout<<x<<endl;
	cout<<y<<endl;
	for(int i=1;i<=n;i++)
	{
		int z=x+y;
		cout<<z<<endl;
		x=y;
		y=z;
	}
	
}
int main()
{
	int n;
	cin>>n;
	fibonacci(n);

}
