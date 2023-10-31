#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char boardnum[]={'0','1','2','3','4','5','6','7','8','9'};

int randomno(void)
{
    int lower = 1;
    int upper = 9;
    srand(time(NULL));
    return (rand() % (upper - lower + 1) + lower);
}

void board(void){
    printf("    Tic Tac Toe game\n ");
    printf("player:- 'x' computer:- 'o'\n");
    printf("     |      |      |\n");
    printf("  %c  |   %c  |  %c   |\n",boardnum[1],boardnum[2],boardnum[3]);
    printf("-----|------|------|\n");
    printf("     |      |      |\n");
    printf("   %c |   %c  |  %c   |\n",boardnum[4],boardnum[5],boardnum[6]);
    printf("-----|------|------|\n");
    printf("     |      |      |\n");
    printf("  %c  |   %c  |  %c   |\n",boardnum[7],boardnum[8],boardnum[9]);
    printf("     |      |      |\n");
}

void reset(void){
    boardnum[1] = '1';
    boardnum[2] = '2';
    boardnum[3] = '3';
    boardnum[4] = '4';
    boardnum[5] = '5';
    boardnum[6] = '6';
    boardnum[7] = '7';
    boardnum[8] = '8';
    boardnum[9] = '9';
}

void procesp(int a){
        if((a == 1 )&& boardnum[1] == '1'){
            boardnum[1] = 'x';
        }
        else if(a == 2 && boardnum[2] == '2'){
            boardnum[2] = 'x';
        }
        else if(a == 3 && boardnum[3] == '3'){
            boardnum[3] = 'x';
        }
        else if(a== 4 && boardnum[4] == '4'){
            boardnum[4] = 'x';
        }
        else if(a == 5 && boardnum[5] == '5'){
            boardnum[5] = 'x';
        }
        else if(a == 6 && boardnum[6] == '6'){
            boardnum[6] = 'x';
        }
        else if(a == 7 && boardnum[7] == '7'){
            boardnum[7] = 'x';
        }
        else if(a == 8 && boardnum[8] == '8'){
            boardnum[8] = 'x';
        }
        else if(a == 9 && boardnum[9] == '9'){
            boardnum[9] = 'x';
        }
        else if(a <= 1 || a >= 9){
            printf("Enter a valid box number \n");
        }

}

void procesc(int a){
        if((a == 1 )&& boardnum[1] == '1'){
            boardnum[1] = 'o';
        }
        else if(a == 2 && boardnum[2] == '2'){
            boardnum[2] = 'o';
        }
        else if(a == 3 && boardnum[3] == '3'){
            boardnum[3] = 'o';
        }
        else if(a== 4 && boardnum[4] == '4'){
            boardnum[4] = 'o';
        }
        else if(a == 5 && boardnum[5] == '5'){
            boardnum[5] = 'o';
        }
        else if(a == 6 && boardnum[6] == '6'){
            boardnum[6] = 'o';
        }
        else if(a == 7 && boardnum[7] == '7'){
            boardnum[7] = 'o';
        }
        else if(a == 8 && boardnum[8] == '8'){
            boardnum[8] = 'o';
        }
        else if(a == 9 && boardnum[9] == '9'){
            boardnum[9] = 'o';
        }
}

int winer() {
    if (boardnum[1]=='x' && boardnum[2]==boardnum[1] && boardnum[3] == boardnum[2]) {
        return 1;
    }
    if (boardnum[4]=='x' && boardnum[5]==boardnum[4] && boardnum[6] == boardnum[4]) {
        return 1;
    }
    if (boardnum[7]=='x' && boardnum[8]==boardnum[7] && boardnum[9] == boardnum[8]) {
        return 1;
    }
    if (boardnum[1]=='x' && boardnum[5]==boardnum[1] && boardnum[9] == boardnum[5]) {
        return 1;
    }
    if (boardnum[3]=='x' && boardnum[5]==boardnum[3] && boardnum[7] == boardnum[5]) {
        return 1;
    }
    if (boardnum[1]=='x' && boardnum[4]==boardnum[1] && boardnum[7] == boardnum[4]) {
        return 1;
    }
    if (boardnum[2]=='x' && boardnum[5]==boardnum[2] && boardnum[8] == boardnum[5]) {
        return 1;
    }
    if (boardnum[3]=='x' && boardnum[6]==boardnum[3] && boardnum[9] == boardnum[6]) {
        return 1;
    }
    if (boardnum[1]=='o' && boardnum[2]==boardnum[1] && boardnum[3] == boardnum[2]) {
        return 2;
    }
    if (boardnum[4]=='o' && boardnum[5]==boardnum[4] && boardnum[6] == boardnum[4]) {
        return 2;
    }
    if (boardnum[7]=='o' && boardnum[8]==boardnum[7] && boardnum[9] == boardnum[8]) {
        return 2;
    }
    if (boardnum[1]=='o' && boardnum[5]==boardnum[1] && boardnum[9] == boardnum[5]) {
        return 2;
    }
    if (boardnum[3]=='o' && boardnum[5]==boardnum[3] && boardnum[7] == boardnum[5]) {
        return 2;
    }
    if (boardnum[1]=='o' && boardnum[4]==boardnum[1] && boardnum[7] == boardnum[4]) {
        return 2;
    }
    if (boardnum[2]=='o' && boardnum[5]==boardnum[2] && boardnum[8] == boardnum[5]) {
        return 2;
    }
    if (boardnum[3]=='o' && boardnum[6]==boardnum[3] && boardnum[9] == boardnum[6]) {
        return 2;
    }
}

int main() {
    char namep1[35];
    int pbox,cbox,start,end;
    int result=0;
    int i=0;
    {
        printf("1.start\n2.quit\n");
        scanf("%d",&start);
        if(start == 1){
            goto s;
        }
        else if(start == 2){
            goto exit;
        }
    }
    {
        s:
        getchar();
        printf("Enter your name:\n");
        gets(namep1);
        r:
        reset();
        system("cls");
        while(i<=9){
        board();
        printf("player turn \nenter box number \n");
        scanf("%d",&pbox);
        procesp(pbox);
        printf("computer turn \n");
        cbox = randomno();
        procesc(cbox);
        result = winer();
        if(result == 1){
            board();
            printf("player %s wins the game well palyed \n",namep1);
            break;
        }
        else if(result == 2){
            board();
            printf("Computer wins!!\nBetter luck nextime\n");
            break;
        }
        else if(result == 0){
            printf("the match is draw well played");
            break;
        }
        i++;
        }
    }
    {
        printf("1.playagain\n2.quit\n");
        scanf("%d",&end);
        if(end == 1){
            goto r;
        }
        else if(end == 2){
            goto exit;
        }
    }
    exit:
    return 0;
}