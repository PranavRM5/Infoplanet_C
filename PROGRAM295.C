#include<stdio.h>
void main()
{
	char str[30];
	int i;
	printf("\nEnter the string ");
	gets(str);
    i=0;
	while(str[i]!='\0')
	{
    	if(str[i]>='A'&&str[i]<='Z')
    	str[i] = str[i]+32;
		else 
		if(str[i]>='a'&&str[i]<='z')
		str[i] = str[i]-32;
		i++;
	}
    printf("\Modified String = %s",str);
}
