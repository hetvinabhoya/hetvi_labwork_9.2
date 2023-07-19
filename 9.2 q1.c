#include<stdio.h>

void main()
{
	char pass[50];	
	
	printf("Create your password :  ");
	gets(pass);
	
    printf("Password :  ");
    puts(pass);
    
    int i=0;
    int lower=0,upper=0,digit=0,punct=0;
    int length = strlen(pass);
    
    while(pass[i])
    {
    	if(islower(pass[i])) 
		lower++;
    	if(isupper(pass[i])) 
		upper++;
    	if(isdigit(pass[i])) 
		digit++;
    	if(ispunct(pass[i])) 
		punct++;
    	i++;
	}
	
	if(strlen(pass) < 8)
	{
		printf("The password must have atleast 8 character\n");
	}
	if(lower == 0)
	{
		printf("Your Password needs lowercase\n");
	}
	if(upper == 0)
	{
		printf("Your Password needs uppercase\n");
	}
	if(digit == 0)
	{
		printf("Your Password needs digits\n");
	}
	if(punct == 0)
	{
		printf("Your Password needs punct\n");
	}
	if(upper != 0 && digit != 0 && punct != 0 && strlen(pass) >= 8)
	{
		printf("Your Password is Strong");
	}
	else
	{
		printf("Your Password is not Strong");
	}
	
}
