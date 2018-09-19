#include<iostream>
#include<stdlib.h>
#include<graphics.h>

using namespace std ;

int clouds()
{
        setcolor(LIGHTBLUE) ;

        //arc(x, y, start_angle, end_angle, radius)

        for( int i = 0 ; i < 2000 ; i++ )
        {

            arc( 100+i , 200 , 90 , 250 , 50 );
            //delay(2) ;
            arc( 150+i , 150 , 30 , 180 , 50 );
            //delay(2) ;
            arc( 200+i , 150 , 45 , 110 , 25 );
            //delay(2) ;
            arc( 262+i , 155 , 30 , 155 , 50 );
            //delay(2) ;
            arc( 310+i , 160 , 300 , 100 , 30 );
            //delay(2) ;
            //arc( 300+(i+10) , 150 , 320 , 90 , 40 );
            delay(1);
            cleardevice();
        }
}

int main()
{
    int gdriver = DETECT , gmode ;
    initwindow(1535,800) ;
    clouds();
    getch();
    closegraph();

}
