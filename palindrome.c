main()
{
	int n,temp,r,s=0;
	
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	
	temp=n;
	
	while(temp!=0)
	{
		r=temp%10;
		s=s*10+r;
		temp=temp/10;
	}
	if(n==s)
	printf("THE NUMBER IS A PALINDROME NUMBER!");
	else
	printf("THE NUMBER ENTERED IS NOT A PALINDROME NUMBER!");
}

