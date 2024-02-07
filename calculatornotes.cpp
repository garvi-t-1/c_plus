#include<iostream>
using namespace std;
int main()
{
	int amount;
	cout<<"enter the amount: ";
	cin>>amount;
	int hundred=0;
	int fifty=0;
	int twenty=0;
	int ten=0;
	while(amount>=100)
	{
		hundred++;
		amount=amount-100;
	}
	if(amount>=50)
	{
		fifty++;
		amount-=50;
	}
	if(amount>=20)
	{
		twenty++;
		amount-=20;
	}
	if(amount>=10)
	{
		ten++;
		amount-=10;
	}
	cout<<"Hundred Notes"<<hundred<<endl;
	cout<<"fifty Notes"<<fifty<<endl;
	cout<<"twenty Notes"<<twenty<<endl;
	cout<<"ten Notes"<<ten<<endl;
	return 0;
	
	
}
