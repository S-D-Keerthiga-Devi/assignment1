#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the valuue of n:";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum of "<<n<<"natural numbers is "<<sum;
    return 0;
}