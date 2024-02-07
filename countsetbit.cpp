#include<iostream>
using namespace std;
int countsetbitsinend(int a,int b)
{
	int result = a&b;
	int count =0;
	while(result)
	{
		count+=result&1;
		result>>=1;
	}
	return count;
}
int main()
{
	int a,b;
	cout<<"enter firstnumber(a):";
	cin>>a;
	cout<<"enter second number(b):";
	cin>>b;
	int resultcount=countsetbitsinend(a,b);
	cout<<"Number of set bits in"<<a<<"&"<<b<<":"<<resultcount<<endl;
	return 0; 
	
}
