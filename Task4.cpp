#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
    int gd=DETECT,gm;
    int x,y,xc,yc,r,p;

    printf("input center of the circle:");
    scanf("%d%d",&xc,&yc);
    printf("input radius of the circle:");
    scanf("%d",&r);
    initgraph(&gd,&gm,(char*)"");

    p=3-2*r;
    x=0;
    y=r;

    while(x<=y){
    putpixel(x+xc,y+yc,WHITE);
    putpixel(x+xc,-y+yc,WHITE);
    putpixel(-x+xc,-y+yc,WHITE);
    putpixel(-x+xc,y+yc,WHITE);
    putpixel(y+xc,x+yc,WHITE);
    putpixel(y+xc,-x+yc,WHITE);
    putpixel(-y+xc,-x+yc,WHITE);
    putpixel(-y+xc,x+yc,WHITE);
    if(p<=0){
        x=x+1;
        p=p+4 * x+6;

    }
    else{
        x=x+1;
        y=y-1;
        p=p+4*(x-y)+10;
    }
    }
    getch();
    closegraph();
    return 0;
}