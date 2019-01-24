//line()
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd=DETECT,gm,i;
	clrscr();
	initgraph(&gd,&gm,"C\\TC\\BGI");

	line(50,50,150,50);

	line(50,150,100,100);
	line(100,100,150,150);
	line(150,150,100,200);
	line(100,200,50,150);

	getch();
	closegraph();
}