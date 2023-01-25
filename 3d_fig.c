#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
 int gd = DETECT, GM;
 initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
 int x1,y1,x2,y2,f,d;
 printf("Enter the starting & extreme points");
 scanf("%d%d",&x1,&y1,&x2,&y2);
 printf("\nEnter thickness and depth");
 scanf("%d%d",&f,&d);
 clrscr();
 bar3d(x1,y1,x2,y2,f,d);
 getch();
 closegraph();
 return 0;
}
