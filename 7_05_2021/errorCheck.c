void main()
{
char str[20],res[20],ch;
int i=0, j = 0;
// clrscr();
	printf("\nEnter any string: ");
	gets(str);
	printf("\nInput the character you want to be deleted: ");
	scanf("%c",&ch);

	// res[i]= ' ';
	while(str[i]!='\0')
	{
		if(str[i]!=ch)
		{
		res[j]= str[i];
        j++;
		}
		i++;
	}
    res[j] = '\0';
	printf("\n Result: %s",res);
getch();
}