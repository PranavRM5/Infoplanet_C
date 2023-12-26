//Graphic Program
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm, mx, my;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	mx=getmaxx;
	my=getmaxy;
	
	line(0,0,mx,my);
	line(mx,0,0my);
	line(mx/2,0,mx/2,my);
	line(0,my/2,mx,my/2);
	
	getch();
	return 0;
}
