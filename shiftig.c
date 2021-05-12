main()
{
	int a[100],n,i,p,ele;
	
	printf("ENTER THE RANGE OF THE ARRAY:");
	scanf("%d",&n);
	
	printf("ENTER THE ELEMENTS IN THE ARRAY:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i+1,a[i]);
	}
	printf("ENTER THE POSITION IN WHICH YOU WANT TO INSERT AN ELEMENT:");
	scanf("%d",&p);
	
	printf("ENTER THE ELEMENT YOU WANT TO INSERT:");
	scanf("%d",&ele);
	
	for(i=n-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=ele;
	n++;
	printf("THE SHIFTED ARRAY IS:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
