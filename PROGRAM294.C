#include<stdio.h>
void main()
{
	char str[30];
	int i, s;
	i=s=0;
	printf("\nEnter the string ");
	gets(str);

	while(str[i]!='\0')
	{
    	if(str[i]>='A'&&str[i]<='Z');
		if(str[i]>='a'&&str[i]<='z');
		if(str[i]>='0'&&str[i]<='9');
	    else
		s++;
		i++;
	}
    printf("\Symbol= %d",s);
}
