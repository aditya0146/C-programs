main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],i,j,m,n;
	
	printf("ENTER THE NUMBER OF ROWS:");
	scanf("%d",&m);
	printf("ENTER THE NUMBER OF COLUMNS:");
	scanf("%d",&n);
	
	printf("ENTER THE VALUES IN THE MATRIX A:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("ENTER THE VALUES IN THE MATRIX B:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("THE ADDED MATRIX IS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	printf("THE MULTIPLIED MATRIX IS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][j]+b[j][i];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
}
