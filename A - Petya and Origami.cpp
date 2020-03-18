#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

main()
{
    double n,k,r=2,b=5,g=8,i=1,sum; 
    double red,blue,green;
    long long int re,bl,gr;

    cin>>n>>k;

    red = (double)((n*r)/k);
    red = ceil(red);
    blue = (double)((n*b)/k);
    blue = ceil((double)blue);
    green = (double)((n*g)/k);
    green = ceil(green);
    
    re=red;
    bl=blue;
    gr=green;
    
    cout<<re + bl + gr;
    
}


