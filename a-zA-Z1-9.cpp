#include<iostream>
using namespace std;
int main()
{
	 char n;
	 cout<<"enter a character"<<endl;
	 cin>>n;
	 if(n>='a'&&n<='z')
	 {
	 	cout<<"Lowercase"<<endl;
	 }
	 else if(n>='A'&&n<='Z')
	 {
	 	cout<<"upper case"<<endl;
	 }
	  else if(n>='0'&&n<='0')
	 {
	 	cout<<"Numeric value"<<endl;
	 }
	 else
	 {
	 	cout<<"not availaible"<<endl;
	 }
	 return 0;
}
