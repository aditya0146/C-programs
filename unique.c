main()
{
	int a[10],n,i,c,j;
	
	printf("ENTER THE RANGE OF THE ARRAY:");
	scanf("%d",&n);
	
	printf("ENTER THE ELEMENTS IN THE ARRAY:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("THE UNIQUE ELEMENTS AND THEIR OCCURANCES ARE:");
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;

			}
		}
		printf("%d\n",c);
	}
	
}
