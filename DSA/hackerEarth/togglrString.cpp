#include <iostream>
#include<string>
using namespace std;
int main() 
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<=n;i++)
    {
        if(islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
        else
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
}