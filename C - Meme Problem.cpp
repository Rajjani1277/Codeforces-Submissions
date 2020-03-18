#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

main()
{
    int d,n;
    double s[1000],p[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        if(d==1 || d==2 || d==3)
        {
        	s[i]=1;
        	p[i]=1;
		}
		else
		{
			s[i] = (d + sqrt((d*d) - (4*d)))/2;
            p[i] = d - s[i];
		}   
    } 
    for(int i=0;i<n;i++)
    {
        if(s[i]==1 && p[i]==1)
        {
            cout<<"N"<<endl;
        }
        else 
        {
            cout<<"Y"<<" ";
            cout<<fixed<<setprecision(9)<<s[i]<<" "<<p[i]<<endl;
        }
        
    }  
}

