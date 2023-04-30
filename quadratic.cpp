#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"enter coefficient of x^2:";
    cin>>a;
    if(a==0)
    {
        cout<<"equation is invalid";
    }
    else{
        cout<<"enter coefficient of x:";
        cin>>b;
        cout<<"enter the third term:";
        cin>>c;
        d=(b*b)-(4*a*c);
        if(d==0)
        {
            cout<<"both the roots are same and is:"<<((-b)/(2*a));
        }
        else if(d>0)
        {
            r1=((-b)+sqrt(d))/(2*a);
            r2=((-b)-sqrt(d))/(2*a);
            cout<<"first root:"<<r1<<"\nsecond root:"<<r2;
        }
        else if(d<0)
        {
            r1=(-b)/(2*a);
            cout<<"first root:"<<r1<<"+i"<<((sqrt(fabs(d)))/(2*a));
            cout<<"\nsecond root:"<<r1<<"-i"<<((sqrt(fabs(d)))/(2*a));
        }
    }
    return 0;
}