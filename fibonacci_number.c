main()
{
	int i,n,a=0,b=1;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	i=a+b;
	while(i<=n)
	{
		a=b;
		b=i;
		i=a+b;
	}

	if(n==b)
	{
		printf("IT IS A FIBONACCI NUMBER");
	}
	else
	{
		printf("IT IS NOT A FIBONACCI NUMBER");
	}
}
