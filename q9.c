main()
{
	int n,i;
	
	printf("ENTER THE RANGE:");
	scanf("%d",&n);
	
	for(i=1;i<=25;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
		}
		else
		printf("%d\t",i);
	}
}
