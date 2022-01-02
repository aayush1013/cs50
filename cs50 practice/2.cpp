#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=n;i>=1;i-=2)
    {
        for (int k=n-i;k>0;k-=2)
        cout<<" ";
        for(int j=i;j>0;j--)
        cout<<"&";
        cout<<endl;
    }
}