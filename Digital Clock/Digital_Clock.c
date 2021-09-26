#include<stdio.h>
#include<windows.h>

int main() {
    int h, m, s;
    int d =1000; //Add delay of 1000 ms and will use it in the function sleep.
    printf("\nSet Time: ");
    scanf("%d %d %d", &h, &m, &s);
    
    if(h>12 || m>60 || s>60) {
        printf("Error !\n");
        exit(0);
    }
    
    while(1)  {// Infinite loop for running the clock continuously/

        s++;
        if(s>59) {
            m++;
            s=0;
        }

        if (m>59) {
            h++;
            m =0;
        }
        if (h>12) {
            h =1;
        }

        printf("\nClock: ");
        printf("%02d: %02d: %02d: ", h, m, s);    // It gives time as hh:mm:ss
        
        Sleep(d);         // It slows down the while loop and make it a more real clock
                          // Also we use 1000 ms as delay time, i.e, 1 second delay time 
                          //which also we need for the clock
        
        system("cls");    //  For screen clearing after running the loop each time


    }
    return 0;
}