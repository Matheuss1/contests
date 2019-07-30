#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int hour1, min1, hour2, min2;
    int hours, mins;
    scanf("%d%d%d%d", &hour1, &min1, &hour2, &min2);
    if (hour1 > hour2) {
        if (min1 <= min2){
            hours = 24 - (hour1 - hour2);
            mins = min2 - min1;
        }
        else if (min1 > min2){
            hours = 23 - (hour1 - hour2);
            mins = 60 - (min1 - min2);
        }
    }
    else if (hour2 > hour1) {
        if (min1 < min2){
            hours = hour2 - hour1;
            mins = min2 - min1;
        }
        else if (min1 >= min2) {
            hours = hour2 - hour1 - 1;
            mins = 60 - (min1 - min2);
        }
    }
    else if (hour2 == hour1) {
        if (min1 == min2) {
            hours = 24 - (hour1 - hour2);
            mins = 0;
        }
        else if (min2 > min1) {
            hours = 0;
            mins =  min2 - min1;
        }
        else if (min2 < min1) {
            hours = 23;
            mins = 60 - (min1 - min2);
        }
    }
    if (mins >= 60) {
        ++hours;
        mins = mins - 60;
    }

    cout << "O JOGO DUROU " << hours << " HORA(S) E "
                            << mins << " MINUTO(S)" << endl;
    return 0;
}