main()
{
	int n,r,max,min;
	
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	min=n%10;
	max=min;
	n=n/10;
	while(n!=0)
	{
		r=n%10;
		if(r>max)
		{
			max=r;
		}
		else if(r<min)
		{
			min=r;
		}
		n=n/10;
	}
	printf("THE MAXIMUM AND MINIMUM NUMBERS ARE %d\t%d",max,min);
}
