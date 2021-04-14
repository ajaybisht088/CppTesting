#include<stdio.h>
#include<string.h>																																							#include<string.h>
void main()
{
	char userName[20] , userPassword[20];
	printf(" Enter User name : ");
	scanf("%s", &userName);
	printf("\n Enter password : ");
	scanf("%s", &userPassword);
	if((strcmp(userName,"admin")==0)&&(strcmp(userPassword,"abcd@123")==0))
	{
		printf("\n Hello Mr/Ms %s", userName);
	}
	else{
		printf("\n Invalid Credentials");																																						("Invalid userName name and password");
	}
	getch();
    return;
}