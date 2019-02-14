#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void DDAline(int x1, int y1, int x2, int y2)
{	int dx=x2-x1, dy=y2-y1, steps, xInc, yInc, i;
	steps = dx>dy ? dx : dy;
	xInc=dx/steps;
	yInc=dy/steps;
	for(i=0 ; i<=steps ; i++, x1+=xInc, y1+=yInc)
		putpixel(x1,y1);
}

void main( )
{	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");



	getch();
	closegraph();
}