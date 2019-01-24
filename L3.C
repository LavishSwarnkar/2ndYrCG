//circle()
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd=DETECT,gm,i;
	clrscr();
	initgraph(&gd,&gm,"C\\TC\\BGI");

	circle(320,250,100);

	getch();
	closegraph();
}