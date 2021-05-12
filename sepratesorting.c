main()
{
	int a[10],i,j,temp,n,c,pos,temp1;
	
	printf("ENTER THE RANGE OF THE ARRAY:");
	scanf("%d",&n);
	
	printf("ENTER THE ELEMENTS IN THE ARRAY:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			c++;
			for(j=n;j>i;j--)
			{
				if(a[j]%2==0)
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	
	for(i=0;i<c-1;i++)
	{
		pos=i;
		for(j=i+1;j<c;j++)
		{
			if(a[pos]>a[j])
			pos=j;
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}

	for(i=c;i<n;i++)
	{
		temp1=a[i];
		j=i-1;
		while((temp1<a[j])&&(j>=c))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j]=temp1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
