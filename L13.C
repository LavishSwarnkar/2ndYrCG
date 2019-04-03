#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void plot(int xc,int yc,int x,int y)
{	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc-y,yc-x,WHITE);
}

void MpCircle(int xc, int yc, int r)
{	int x=0, y=r, h=1-r;

	plot(xc, yc, x, y);

	while(x<y)
	{	if(h<0)
		{   h+=(2*x)+3;
			x++;
		}
		else
		{	h+=2*(x-y)+5;
			x++;
			y--;
		}
		plot(xc, yc, x, y);
	}
}

void main( )
{	int gd=DETECT, gm, x, y, r;
	clrscr();

	printf("Enter x:");
	scanf("%d", &x);
	printf("Enter y:");
	scanf("%d", &y);
	printf("Enter r:");
	scanf("%d", &r);

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	MpCircle(x, y, r);

	getch();
	closegraph();
}