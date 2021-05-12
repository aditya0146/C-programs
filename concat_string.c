main()
{
	char a[100],b[100],c[100];
	int i,j;
	
	printf("ENTER THE FIRST STRING:");
	gets(a);
	
	printf("ENTER THE SECOND STRING:");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!='\0';j++)
	{
		c[i]=b[j];
		i++;
	}
	printf("%s",c);
}
