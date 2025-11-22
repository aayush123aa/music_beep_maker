#include<stdio.h>
#include<windows.h>

int main(){

   FILE *f = fopen("peak_frequency_timeline.txt","r"); // this file contains the info about the peak_frequency and the time_duration of the song

    double ts,td,fr;

   for(int i = 0; i<6828; i++){
    fscanf(f,"%lf %lf %lf", &ts,&td,&fr);
    Beep((int)fr,(int)(td*1000));
   }


   fclose(f);
    return 0;
}
