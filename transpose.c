main()
{
	int a[3][3],b[3][3],i,j,m,n;
	
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
	printf("THE TRANSPOSED MATRIX IS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
