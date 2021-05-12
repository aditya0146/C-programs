main()
{
	int a[10][10],b[10][10],i,j,r,c,d[10][10];
	
	printf("ENTER THE NUMBER OF ROWS:");
	scanf("%d",&r);
	printf("ENTER THE NUMBER OF COLUMNS:");
	scanf("%d",&c);
	
	printf("ENTER THE VALUES IN MATRIX A:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("ENTER THE VALUES IN MATRIX B:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[j][i];
		}
	}
	printf("THE ADDED MATRIX IS:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
}
