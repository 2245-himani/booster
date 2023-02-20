#include<iostream>
using namespace std;
main()
{
	char a,b;
	cout<<"Enter any character :";
	cin>>a;
	b=(a=='o' || a=='u' || a=='i' || a=='e' || a=='a');
	if(b)
	cout<<"Is vowel!";
	else
	cout<<"Is consonant!";
}
