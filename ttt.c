#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ttt[3][3]={{0,0,0},
    {0,0,0},
    {0,0,0}};
char s[3][3];
int winner=0;
int j,i,cd,r,c,ttt[3][3],choice,re=0,ce=0,te=0,be=0;
void clrscr();

void conversion(){
    switch (choice)

    {
    case 1:
         r=0;c=0;
        
        break;
    case 2:
         r=0;c=1;
        break;
    case 3:
         r=0;c=2;
        break;
    case 4:
         r=1;c=0;
        break;
    case 5:
         r=1;c=1;
        break;
    case 6:
         r=1;c=2;
        break;
    case 7:
         r=2;c=0;
        break;
    case 8:
         r=2;c=1;
        break;
    case 9:
         r=2;c=2;
        break;
                         
    default:
        break;
    }
}
void check(){
    conversion();
    if(ttt[r][c]==0){
        cd=1;}
else
{cd=0;}
   
}
void empty(){
    for(j=0;j<3;j++){
        if(ttt[j][c]==0){re=1;}
        
        else if(ttt[r][j]==0){ce=1;}
        
        else{}
        
    }
for(j=0;j>3;j++){
    if(ttt[j][j]==0){te=1;}
}
if(ttt[0][2]==0){be=1;}
else if(ttt[1][1]){be=1;}
else if(ttt[2][0]){be=1;}
else{}
}
void win(){conversion();
    empty();
    int total=0,total1=0,total2=0,total3=0;
    for(j=0;j<3;j++){
       total=total+ttt[j][c];
    }
    for(j=0;j<3;j++){
        total1=total1+ttt[r][j];
    }
       total2=total2+ttt[0][0]+ttt[1][1]+ttt[2][2];
       total3=total3+ttt[0][2]+ttt[1][1]+ttt[2][0];
    
    if(i%2){if(total==3||total1==3||total2==3||total3==3)
            {winner=1;}
            else{}}


    else {if(total==12||total1==12||total2==12||total3==12)
           {winner=2;}
          else{}}
}
void display() {
    int content[3][3]={{1,2,3},
    {4,5,6},
    {7,8,9}};
    printf("\n\n\n     The legendary tic tac toe!!!!\n");
    printf("__||______________________________||__\n\n\n");
printf( "              %d  | %d | %d\n", content[0][0], content[0][1], content[0][2]);
    printf("              ---+---+---\n");
    printf("              %d  | %d | %d\n", content[1][0], content[1][1], content[1][2]);
    printf("              ---+---+---\n");
    printf("              %d  | %d | %d\n", content[2][0], content[2][1], content[2][2]);

}
void show(){printf("\n\n\n     The legendary tic tac toe!!!!\n");
    printf("__||______________________________||__\n\n\n");
    printf( "\n\n\n                 %c|  %c | %c\n", s[0][0], s[0][1], s[0][2]);
    printf("              ---+---+---\n");
    printf("               %c  |  %c | %c\n", s[1][0], s[1][1], s[1][2]);
    printf("              ---+---+---\n");
    printf("               %c  |  %c | %c\n", s[2][0], s[2][1], s[2][2]);

     


}
void intro(){

    printf("\n     The legendary tic tac toe!!!!\n");
    printf("__||______________________________||__\n\n\n");
    printf("       Enter any key to start\n");
char a[100];

    
    
    if (fgets(a, sizeof(a), stdin)) {
       
       system("cls");
       display();
    

    } else {
        printf("Input error occurred.\n");
    }

}
void turn(){
    for(i=1;i<10;i++){printf("%d",i);
        if(winner==0)
        {show();
        if(i%2==0){
        while(1){printf("\nplayer 2 please enter your position for O:");
        scanf("%d",&choice);
        if(choice<10 && choice>0){check();
        if(cd==1){break;
        }
        else{printf("The space is occupied try another position!");}}
        else{
            system("cls");
            printf("\nenter valid position!");}}
        ttt[r][c]=4;
        s[r][c]='O';
        win();
    }
        else{
    while(1){
        
        printf("player 1 please enter your position for X:");
        scanf("%d",&choice);
        if(choice<10 && choice>0)
        {check();
        if(cd==1){break;
        }
        else{printf("The space is occupied try another position!");}}
        
        else
        {system("cls");
        printf("enter valid position!");}}
        ttt[r][c]=1;
        s[r][c]='X';
        win();
        }

    
}
    else if (winner==1){display();
    printf("\nThe gangster player1 is the winner.");}
    else if (winner==2)
    {display();
      printf("\n\n\nThe monster player2 is the winner.");
    }
    else{printf("\n\n\nThere is something wrong in the win boy");}
    
    
    
}}





void main()
{

turn();
if(winner=0){printf("guess we need another match !");}
else{}


}
