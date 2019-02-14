#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void DDAline(int x1, int y1, int x2, int y2)
{	int dx=x2-x1, dy=y2-y1, steps, i;
	float xInc, yInc, x=x1, y=y1;
	steps = dx>dy ? dx : dy;
	xInc=((float)dx)/steps;
	yInc=((float)dy)/steps;
	for(i=0 ; i<=steps ; i++, x+=xInc, y+=yInc)
		putpixel(abs(x),abs(y),WHITE);
}

void main( )
{	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	DDAline(0,0,getmaxx(),getmaxy());
	DDAline(getmaxx(),0,0,getmaxy());

	getch();
	closegraph();
}