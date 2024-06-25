#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char board[3][3];
    int i,j,n;
    int r,c;
    int f;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            board[i][j]=' ';
        }
    }
    system("cls");
    printf("1,1|1,2|1,3\n---|---|---\n2,1|2,2|2,3\n---|---|---\n3,1|3,2|3,3\n\n");
    printf("   |   |   \n---|---|---\n   |   |   \n---|---|---\n   |   |   \n");
    for(n=1;n<=9;n++){
        if(n%2!=0) printf("X turn:\n");
        if(n%2==0) printf("O turn:\n");
        do{
            f=0;
            printf("enter row #(1-3):\t");
            scanf("%d",&r);
            printf("enter column #(1-3):\t");
            scanf("%d",&c);
            r--; c--;
            if(r>2 || c>2) {f=1; printf("Cell number non-existant !\n");}
            else{
                if(board[r][c]!=' ') {f=1; printf("Cell is full !\n");}
                if(f==0){
                    if(n%2!=0) board[r][c]='X';
                    if(n%2==0) board[r][c]='O';
            }
            }
        }while(f==1);
        system("cls");
        printf("1,1|1,2|1,3\n---|---|---\n2,1|2,2|2,3\n---|---|---\n3,1|3,2|3,3\n\n");
        for(i=1;i<=5;i++){
            if(i%2==0) printf("---|---|---\n");
            else{
                if(i==1) printf(" %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
                if(i==3) printf(" %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
                if(i==5) printf(" %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
            }
        }
        for(i=0;i<3;i++){
            if(board[i][0]==board[i][1] && board[i][2]==board[i][0]){
                if(board[i][0]=='X') {printf("X wins!"); exit(0);}
                if(board[i][0]=='O') {printf("O wins!"); exit(0);}
            }
        }
        for(j=0;j<3;j++){
            if(board[0][j]==board[1][j] && board[2][j]==board[0][j]){
                if(board[0][j]=='X') {printf("X wins!"); exit(0);}
                if(board[0][j]=='O') {printf("O wins!"); exit(0);}
            }
        }
        if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
            if(board[0][0]=='X') {printf("X wins!"); exit(0);}
            if(board[0][0]=='O') {printf("O wins!"); exit(0);}
        }
        if(board[2][0]==board[1][1] && board[1][1]==board[0][2]){
            if(board[2][0]=='X') {printf("X wins!"); exit(0);}
            if(board[2][0]=='O') {printf("O wins!"); exit(0);}
        }
    }
    printf("Tie !");
    return 0;
}  