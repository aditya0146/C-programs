main()
{
	int r,c,i,j;
	
	printf("ENTER THE ROW AND COLUMNS:");
	scanf("%d%d",&r,&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==i)
			{
				printf("=");
			}
			else if(i<j)
			{
				printf("<");
			}
			else
			{
				printf(">");
			}
		}
	}
}
