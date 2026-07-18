#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int count=0,i;
	
	cout<<"enter a string:";
	getline(cin,s);	
	for(i=0;i<s.length();i++)
	{
     	char ch=s[i];
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
		cout<<ch<<"\n";
	count++;
}
}
cout<<"no.of vowels:"<<count<<endl;

return 0;
}
