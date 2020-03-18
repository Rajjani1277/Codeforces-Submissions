#include<iostream>

using namespace std;

main()
{
	unsigned long long int i,j,n,s[100000],k,z,m;
	s[0]=0;
	for(k=1;k<=9;k++)
	{
		s[k]=k;
	}
	for(i=1;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
					s[k]=i;
					s[k+1]=j;
					k=k+2;
   			
		}
	}
	for(i=1;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			for(z=0;z<=9;z++)
			{
					
					s[k]=i;
					s[k+1]=j;
					s[k+2]=z;
					k=k+3;
   				
			}
   			
		}
	}
		for(i=1;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			for(z=0;z<=9;z++)
			{
				for(m=0;m<=9;m++)
				{
					s[k]=i;
					s[k+1]=j;
					s[k+2]=z;
					s[k+3]=m;
					k=k+4;
   				}
			}
   			
		}
	}
	cin>>n;
	cout<<s[n];
	
	
}


