#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int n ,count=0;
    cin>>n;
    while(n!=1)
    {
        if(n%2==0)
            n/=2;
        else if ( n%4==1 || n==3 )
            n-=1;
        else 
            n+=1;
        count++;
    }
    cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}