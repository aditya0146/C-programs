main()
{
	int a[3][3],b[3][3],i,j,m,n,sum;
	
	printf("ENTER THE NUMBER OF ROWS:");
	scanf("%d",&m);
	printf("ENTER THE NUMBER OF COLUMNS:");
	scanf("%d",&n);
	
	printf("ENTER THE VALUES IN THE ARRAY:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("THE SUM OF EACH ROW IS:\n");
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
		printf("%d ROW IS:%d\n",i+1,sum);
	}
}
