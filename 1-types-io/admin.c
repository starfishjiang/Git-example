#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(void){
    char first_name[10];
    char last_name[10];
    char gender;
    scanf("%s %s %c",first_name,last_name,&gender);
    int birth_year =1954;
    int birth_month=7;
    int birth_day=28;
    char weekday[]="tuesday";
    int c_score =40;
    int music_score=99;
    int medicine_score=80;
    double mean =(c_score+music_score+medicine_score)/3.0;
    double sd = sqrt((pow(c_score-mean,2)+pow(music_score-mean,2)+pow(medicine_score-mean,2))/3.0);
    int rank=10;
    printf("%s %s\t %c\n"
           "%.2d-%d-%d \t %.3s.\n"
           "%d \t %.2f \t %d%%\n"
           "%.1f \t %.2f \t %d\n",
           first_name,last_name,toupper(gender),
           birth_month,birth_day,birth_year,weekday,
           c_score,music_score,medicine_score,
           mean,sd,rank);
    return 0;
}
