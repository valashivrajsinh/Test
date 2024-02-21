#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m; 
    cin>>n; 
    cin>>m;
    int arr[n+1]={0};
    int vote,max = 0 ;
    for(int i = 0 ; i < m ; i ++ )
    {
        cin>>vote;
        arr[vote]++;
    }
    for(int i = 1 ; i <= n ; i ++)
    {
           if(arr[i]>arr[max])
              {
                  max=i;
              }
            else if (arr [i] == arr [max])
            {
                max=-1;
            }
        
    }
    cout<<max;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
