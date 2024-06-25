#include <stdio.h>

typedef struct{
    char qst[30];
    char ans;
}questions;

void new_game();
void check_answer();
void display_score();
void play_again();

int main(){
    questions q1,q2,q3,q4;
    q1={"Who created Python?:",'A'};
    q2={"What year was Python created?:",'B'};
    q3={"Python is tributed to witch comedy group?:",'C'};
    q4={"Is the earth round?:",'A'};
    //for(int i=0;i<4;i++){
      //  printf("%s   %c",tab[i].qst,tab[i].ans);
    //}
    return 0;
}