#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2,i;
    float x,y,dx,dy,length;
    int gd=DETECT,gm;
    printf("Enter First Point: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter Second Point: ");
    scanf("%d%d",&x2,&y2);
    initgraph(&gd,&gm,"");
    if(abs(x2-x1)>abs(y2-y1))
    {
        length=abs(x2-x1);
    }

    else{
        length=abs(y2-y1);
    }
    dx=(x2-x1)/length;
    dy=(y2-y1)/length;

    x=x1;
    y=y1;
    i=0;
    while(i<=length)
    {
        putpixel(x,y,GREEN);
        x=x+dx;
        y=y+dy;
        i++;
    }
    getch();
    closegraph();
    return 0;

}
