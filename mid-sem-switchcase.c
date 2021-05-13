main()
{
	int ch,a,b,c,total=0,small,large;
	double avg=0;
	
	printf("ENTER 1 TO READ 3 NUMBERS:\n");
	printf("ENTER 2 TO CALCULATE THE TOTAL!\n");
	printf("ENTER 3 TO CALCULATE THE AVERAGE!\n");
	printf("ENTER 4 TO FIND THE SMALLEST!\n");
	printf("ENTER 5 TO FIND THE LARGEST!\n");
	printf("ENTER YOUR CHOICE!\n");
	scanf("%d",ch);
	
	
	
	switch(ch)
	{
		case 1:
			printf("ENTER THE 1ST NUMBER:\n");
			scanf("%d",a);
			printf("ENTER THE 2ND NUMBER:\n");
			scanf("%d",b);
			printf("ENTER THE 3RD NUMBER:\n");
			scanf("%d",c);
		break;
		
		case 2:
			total=a+b+c;
			printf("THE TOTAL OF THE 3 NUMBERS ARE: %d",total);
		break;
		
		case 3:
			avg=total/3;
			printf("THE AVERAGE OF THE 3 NUMBERS ARE: %d",avg);
		break;
		
		case 4:
			if(a<b && a<c)
			printf("%d IS THE SMALLEST NUMBER!!",a);
			
			else if(b<a && b<c)
			printf("%d IS THE SMALLEST NUMBER!!",b);
			
			else if(c<a && c<b)
			printf("%d IS THE SMALLEST NUMBER!!",c);
			
			else if(a==b && a==c)
			printf("ALL THE NUMBERS ARE SAME!!");
		break;
		
		case 5:
			if(a>b && a>c)
			printf("%d IS THE LARGEST NUMBER!!",a);
			
			else if(b>a && b>c)
			printf("%d IS THE LARGEST NUMBER!!",b);
			
			else if(c>a && c>b)
			printf("%d IS THE LARGEST NUMBER!!",c);
			
			else if(a==b && a==c)
			printf("ALL THE NUMBERS ARE SAME!!");
		break;
		
		default:
			printf("WRONG CHOICE!!");
		break;
	}
}
