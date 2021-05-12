#import<stdio.h>
main()
{
	char s1[100],s2[100],c1,c2;
	printf("\t\tWELCOME TO THE GAME OF ROCK AND PAPER!!!\n");
	printf("\t\tONLY TWO CONTESTANTS ARE ALLOWED TO PLAY AT ONCE!!!\n");
	printf("ENTER YOUR NAME CONTESTANT 1:\n");
	gets(s1);
	printf("ENTER YOUR NAME CONTESTANT 2:\n");
	gets(s2);
	printf("THE GAME IS ABOUT TO BEGIN\n");
	printf("CONTESTANTS GET READY\n");
	printf("BEFORE THE GAME STARTS\n");
	printf("LETS BRUSH UP ON THE RULES OF THE GAME THAT ARE PREETY SIMPLE!!\n");
	printf("SCISSORS BEATS PAPER!!!\n");
	printf("PAPER BEATS ROCK!!!\n");
	printf("ROCK BEATS SCISSORS!!!\n");
	printf("R : ROCK\n");
	printf("S : SCISSORS\n");
	printf("P : PAPER\n");
	printf("NOW LET THE GAME BEGIN!!!!\n");
	
	printf("%s IT'S YOUR TURN!!\n",s1);
	printf("MAKE YOUR CHOICE:\n");
	scanf("%c",&c1);
	fflush(stdin);

	printf("%s IT'S YOUR TURN!!\n",s2);
	printf("MAKE YOUR CHOICE:\n");
	scanf("%c",&c2);
	fflush(stdin);
	if(c1=='r'&&c2=='s' || c1=='p'&&c2=='r' || c1=='s'&&c2=='p')
	{
		printf("!!!!\t CONGRATULATONS !!!!\n");
		printf("\t%s YOU WON!!!,",s1);
	}
	else if(c1=='r'&&c2=='p' || c1=='s'&&c2=='p' || c1=='p'&&c2=='s')
	{
		printf("!!!!\t CONGRATULATONS !!!!\n");
		printf("\t%s YOU WON!!!,",s2);
	}
	else if(c1=='r'&&c2=='r' || c1=='s'&&c2=='s' || c1=='p'&&c2=='p')
	{
		printf("TIED!!!");
	}
	else
	{
		printf("PLEASE ENTER A VALID CHOICE!!!");
	}
}
