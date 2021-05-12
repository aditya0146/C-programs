#include<stdio.h>
main()
{
	int i,n,m,c;
	
	printf("ENTER THE STARTING AND THE END POINTS:");
	scanf("%d%d",&n,&m);
	printf("THE PRIME NUMBERS BETWEEN THE GIVEN RANGE ARE:\n");
	while(n!=m)
	{
		c=1;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			c++;
		}
		if(c==1)
		printf("%d\n",n);
		n++;
	}
}
