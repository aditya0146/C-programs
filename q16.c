main()
{
	char a[100],i;
	
	printf("ENTER A STRING:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		else
		{
			a[i]=a[i]-32;
		}
	}
	printf("TEH TOGGLED STRING IS: %s",a);
}
