main()
{
	int i,n,s=0,sum=0;
	
	printf("ENTER THE LAST TERM:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		s=(s*10)+1;
		sum=sum+s;
	}
	printf("THE SUM OF THE SERIES IS %d",sum);
}
