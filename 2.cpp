#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m=0, p ,q;
    cin>>n;
    for(int i = 0 ; i < n ; i ++ )
    {
        cin>>p;
        m=m^p; 
    }
    cout<<m;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}