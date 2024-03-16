#include<iostream>
using namespace std;
int main()
{
	string tag;
	cin>>tag;
	int a,b,c,d;
	if(tag[2]=='A'||tag[2]=='E'||tag[2]=='I'||tag[2]=='O'||tag[2] =='U'||tag[2]=='Y')
	{
		cout<<"invalid"; return 0;
	}
	a=tag[0]+tag[1];
	b=tag[3]+tag[4];
	c=tag[4]+tag[5];
	c=tag[7]+tag[8];
	if(a%2!=0 || b%2!=0 || c%2!=0|| d%2!=0)
	{
		cout<<"invalid";
		return 0;
	}
	cout<<"valid";

}