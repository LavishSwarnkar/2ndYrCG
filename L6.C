//smiley
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd=DETECT,gm,i;
	clrscr();
	initgraph(&gd,&gm,"C\\TC\\BGI");

	circle(250,250,100);
	circle(210,220,20);
	circle(290,220,20);
	line(250,250,250,275);
	arc(250,250,225,315,65);

	getch();
	closegraph();
}