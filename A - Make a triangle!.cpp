#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<string>
using namespace std;


main()
{
    int a,b,c,count;

    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        if((b+c) <= a)
        {
            count = a - b - c + 1;
        }
        else
        {
            count = 0;
        }
        
    }
    else if (b > c)
    {
        if((a+c) <= b)
        {
            count = b - c - a + 1;
        }
        else
        {
            count = 0;
        }
        
    }
    else
    {
        if((b+a) <= c)
        {
            count = c - a - b + 1;
        }
        else
        {
            count = 0;
        }
        
    }
    
    cout<<count;
}


