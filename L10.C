#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main( )
{	int gd=DETECT,gm, maxx,maxy,c=0;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	for(c=0 ; c<=250 ; c++)
	{ 	cleardevice();
		line(0,170,1000,170);
		line(50+c,100,50+c,150);
		line(50+c,100,100+c,100);
		line(100+c,100,150+c,50);
		line(150+c,50,250+c,50);
		line(250+c,50,300+c,100);
		line(300+c,100,350+c,100);
		line(350+c,100,350+c,150);
		line(50+c,150,100+c,150);
		line(300+c,150,350+c,150);
		arc(125+c,150,0,180,25);
		arc(275+c,150,0,180,25);
		line(150+c,150,250+c,150);
		circle(125+c,150,20);
		circle(275+c,150,20);
		delay(50);
	}
	getch();

	closegraph();
}

/*line(50,100,50,150);
	line(50,100,100,100);
	line(100,100,150,50);
	line(150,50,250,50);
	line(250,50,300,100);
	line(300,100,350,100);
	line(350,100,350,150);
	line(50,150,100,150);
	line(300,150,350,150);
	arc(125,150,0,180,25);
	arc(275,150,0,180,25);
	line(150,150,250,150);
	circle(125,150,20);
	circle(275,150,20);*/