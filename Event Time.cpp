#include<stdio.h>

int main(){
    int dateStart[4];
    int dateEnd[4];
    int time[4];
    long timeInSec=0;

    const int SEC = 1;
    const int MIN = SEC * 60;
    const int HOUR = MIN * 60;
    const int DAY = HOUR * 24;
    

    scanf("%*s %d",&dateStart[0]);
    scanf("%d %*s %d %*s %d",&dateStart[1],&dateStart[2],&dateStart[3]);
    scanf("%*s %d",&dateEnd[0]);
    scanf("%d %*s %d %*s %d",&dateEnd[1],&dateEnd[2],&dateEnd[3]);

    timeInSec += (dateEnd[3]-dateStart[3]) * SEC;
    timeInSec += (dateEnd[2]-dateStart[2]) * MIN;
    timeInSec += (dateEnd[1]-dateStart[1]) * HOUR;
    timeInSec += (dateEnd[0]-dateStart[0]) * DAY;

    time[0] = timeInSec / DAY;
    timeInSec -= time[0] * DAY;

    time[1] = timeInSec / HOUR;
    timeInSec-=time[1] * HOUR;
    
    time[2] = timeInSec / MIN;
    timeInSec-=time[2] * MIN;

    time[3] = timeInSec;

    printf("%d dia(s)\n",time[0]);
    printf("%d hora(s)\n",time[1]);
    printf("%d minuto(s)\n",time[2]);
    printf("%d segundo(s)\n",time[3]);;
}