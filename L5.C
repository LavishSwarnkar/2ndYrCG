//hut
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd=DETECT,gm,i;
	clrscr();
	initgraph(&gd,&gm,"C\\TC\\BGI");

	rectangle(50,150,150,250);
	line(100,100,50,150);
	line(100,100,150,150);
	rectangle(75,200,125,250);


	getch();
	closegraph();
}