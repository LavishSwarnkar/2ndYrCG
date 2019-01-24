//flag
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd=DETECT,gm,i;
	clrscr();
	initgraph(&gd,&gm,"C\\TC\\BGI");

	rectangle(100,100,250,190);
	line(100,130,250,130);
	line(100,160,250,160);
	line(100,100,100,300);
	circle(175,145,15);


	getch();
	closegraph();
}