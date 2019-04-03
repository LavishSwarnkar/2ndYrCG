#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void Bresenhamline(int x1, int y1, int x2, int y2)
{	int dx=x2-x1, dy=y2-y1, P;
	P=(2*dy)-dx;
	while(x1<=x2)
	{   putpixel(x1,y1,WHITE);
		if(P>=0)
		{	x1++;
			y1++;
			P+=(2*dy)-(2*dx);
		}
		else
		{	x1++;
			P+=(2*dy);
		}
	}
}

void main( )
{	int gd=DETECT, gm, x1, y1, x2, y2;
	clrscr();

	printf("Enter x1:");
	scanf("%d", &x1);
	printf("Enter y1:");
	scanf("%d", &y1);
	printf("Enter x2:");
	scanf("%d", &x2);
	printf("Enter y2:");
	scanf("%d", &y2);

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	Bresenhamline(x1, y1, x2, y2);

	getch();
	closegraph();
}