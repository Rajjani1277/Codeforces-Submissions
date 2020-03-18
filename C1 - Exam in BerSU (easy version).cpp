#include<iostream>
#include<bits/stdc++.h>

using namespace std;
 
 
main()
{
    int n, max, a[100], b[100], j, m;
    cin>>n>>max;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    cout<<"0"<<" ";
    for (int i = 1; i < n; i++)
    {
        sort(b, b+i);
        m =0;
        j = 0;
        m = max - a[i]; 
        while(m >= b[j] && j < i)
        {
            m = m - b[j];
            j++;
        }
        cout<< i - j<<" ";
    }

    
    
}
 

