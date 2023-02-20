#include<iostream>
using namespace std;
main()
{
	char a[100];
	int i;
	cout<<"enter the string :";
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]!=a[i]-32;
		}
		else if
		(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		i++;
	}
	cout<<"After toggle ="<<a;
}
