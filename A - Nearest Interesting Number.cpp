#include<stdio.h>
#include<conio.h>

	int sa(int n)
		{
			int rem,sum=0;
		while(n != 0)
		{
			rem=n%10;
			sum=sum+rem;
		
			n=n/10;
		}
		return sum;
	}

main()
{
	int n,i;
	scanf("%d",&n);

	if((sa(n))%4 == 0)
	{
		printf("%d",n);
	}
	
	else
	{
		i=n+1;
		while((sa(i))%4 != 0)
		{
			i=i+1;
		}
			printf("%d",i);
	}
}

