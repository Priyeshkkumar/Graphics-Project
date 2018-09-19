#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

using namespace std ;


int main()
{
    int A_Random_num ;
    int gdriver = DETECT , gmode ;
    initwindow(1535,800) ;
    int i = 50 , j = 150 ;
        setcolor(YELLOW) ;


        int a = 0  , b = 0 , c = 0 ;

        for( int i = 0 ; i<10 ; i++ )
        {
            moveto( 0 , 650 ) ;
            lineto( 1535 , 650 ) ;
             /*rectangle(int left, int top, int right, int bottom);
             left = X-coordinate of top left corner,
             top = Y-coordinate of top left corner,
             right = X-coordinate of right bottom corner,
             bottom = Y-coordinate of right bottom corner*/

            A_Random_num =  1 + ( rand() % ( 3 ) ) ;
            cout<<A_Random_num ;
            if( A_Random_num == 1 )
                rectangle( 100 + a , 600  , 140 + a , 650   ) ;
            else if( A_Random_num == 2 )
                rectangle( 200 + a , 550  , 240 + a , 650   ) ;
            else
                rectangle( 300 + a , 500 , 340 + a , 650   ) ;

                a += 50 ;
                b += 50 ;
                c += 50 ;

            delay(100);

            //cleardevice()  ;

        }



    getch();
    closegraph();
}
