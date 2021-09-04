#include <bits/stdc++.h>
#include <windows.h>
#include <mmsystem.h>

using namespace std;

void Timer(int hours, int minutes, int seconds) {
    while (true) {
        if (hours == 0 and minutes == 0 and seconds == 0) {
            return;
        }
        if (minutes == 0 and seconds == 0) {
            minutes = 60;
            hours--;
        }
        if (seconds == 0) {
            seconds = 60;
            minutes--;
        }
        system("cls");
        printf("%d : %d : %d", hours, minutes, seconds--);
        Sleep(1000);
    }
}

int main() {
    int hours, minutes, seconds;
    printf("Hello to the Timer, Have a nice day *_*\n");
    printf("Enter the hours: ");
    scanf("%d", &hours);
    printf("Enter the minutes: ");
    scanf("%d", &minutes);
    printf("Enter the seconds: ");
    scanf("%d", &seconds);
    Timer(hours, minutes, seconds);
    //This method to add music in background
    PlaySound(TEXT("music.wav"), nullptr, SND_SYNC);
    return 0;
}
