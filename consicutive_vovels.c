main()
{
	char a[100];
	int i;
	
	printf("ENTER A STRING:");
	gets(a);
	printf("THE CONSECUTIVE VOVELS IN A STRING ARE:\n");
	for(i=0;i<a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')
			{
				printf("%c%c\t",a[i],a[i+1]);
			}
		}
	}
}
