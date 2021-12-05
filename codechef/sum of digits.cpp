#include<iostream>
using namespace std;

void solve()
{long long int n;
cin>>n;
long long int dig,sum=0;
while(n>0)
{
    dig=n%10;
    sum+=dig;
    n/=10;
}
cout<<sum<<endl;
}
int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    solve();
	}
	return 0;
}
