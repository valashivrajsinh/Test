#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int ten(int a)
{
    int p=1;
    for(int i=1; i<a; i++)
    {
        p*=10;
    }
    return p;
}

int main() 
{
    int n, cnt=0, rev=0, rem;
    cin>>n;
    int b=n;
    do
    {
        n/=10;
        cnt++;
    }while(n!=0);
    n=b;
    for(int i=0; i<cnt; i++)
    {
        rem=n%10;
        rev+=(rem*ten(cnt-i));
        n/=10;
    }
    cout<<rev;

    return 0;
}