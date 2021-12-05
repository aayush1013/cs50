#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=n;
    while(r>=50)
    {
        r-=50;
    }
    cout<<50-r<<endl;
    return 0;
}