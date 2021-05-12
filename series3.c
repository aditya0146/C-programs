#include<stdio.h>
#include<math.h>
main()
{
	int i,n,f=1,j,x,po;
	float s=0.0;
	printf("ENTER THE LAST TERM:");
	scanf("%d",&n);
	printf("ENTER THE X TERM:");
	scanf("%d",&x);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		po=pow(x,i);
		s=s+po/f;
	}
	printf("THE SUM OF THE SERIES %f",s);
}

