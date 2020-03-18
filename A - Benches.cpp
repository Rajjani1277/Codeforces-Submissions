#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<string>
using namespace std;
 
 
main()
{
    long int n,m,a[100],kmax,kmin,sum=0,s;
 
    cin>>n>>m;
 
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
 
    sort(a , a+n);
 
    kmax = a[n-1] + m;
 
    for (int i = 0; i < n; i++)
    {
        sum = a[i] + sum;
    }
    sum = sum + m;
    s = a[n-1] * n;
    float v = (float)(sum - s)/n;
    int p = ceil((float)v);
    if(sum > s)
    {
        kmin = a[n-1] + p;
    }
    else
    {
        kmin = a[n-1];
    }
    
 
    cout<<kmin<<" "<<kmax;
    
    
 
 
 
 
    
}
 

