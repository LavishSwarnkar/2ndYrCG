//putpixel()
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd=DETECT,gm,i;
	clrscr();
	initgraph(&gd,&gm,"C\\TC\\BGI");

	putpixel(100,100,RED);
	for(i=200 ; i<=250 ; i++)
		putpixel(i,i,RED);

	getch();
	closegraph();
}