#include<graphics.h>
#include<conio.h>
int main()
{
clrscr();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
outtextxy(50,50+50,"program to create traffic signal");
int middlex,middley;
middlex=getmaxx()/2;
middley=getmaxy()/2;
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
rectangle(middlex-30,middley-80,middlex+30,middley+80);
circle(middlex,middley-50,22);
setfillstyle(SOLID_FILL,RED);
floodfill(middlex,middley-50,WHITE);
setcolor(BLUE);
outtextxy(middlex-15,middley-50,"STOP");
setcolor(WHITE);
rectangle(middlex-30,middley-80,middlex+30,middley+80);
circle(middlex,middley,22);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(middlex,middley,WHITE);
setcolor(BLUE);
outtextxy(middlex-18,middley-3,"ready");
setcolor(WHITE);
rectangle(middlex-30,middley-80,middlex+30,middley+80);
circle(middlex,middley+50,22);
setfillstyle(SOLID_FILL,GREEN);
floodfill(middlex,middley+50,WHITE);
setcolor(BLUE);
outtextxy(middlex-7,middley+48,"GO");
getch();

closegraph();
}