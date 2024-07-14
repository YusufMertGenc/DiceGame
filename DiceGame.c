//Yusuf Mert Genç 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rolldice (int);
int playcomputer (int);
int playuser(int);
void scoresheet(int,int,int);

int rolldice (int RandomDice){//Random number function

    RandomDice = 1+rand()%6;

    return RandomDice;
}
void scoresheet(int Round,int TotalComp, int TotalUser){//Round=to get round number from main TotalComp = to get computer's score from main  TotalUser = to get user's score from main

    printf("\nOur scoresheet after round %d:\n",Round);
    printf("=============================\n");
    printf("My Score   Your Score \n");
    printf("%d         %d",TotalComp,TotalUser);
    if (TotalComp>TotalUser){
        { printf("\nI AM THE WINNER!");}
        if (TotalUser>TotalComp){
            printf("\nYOU ARE THE WINNER!");}
            if (TotalUser==TotalComp){
                printf("\nDRAW");}
        }
    }




int playcomputer (int ReturnTotal) {

    int Dice, Dice1, ErrorCode = 0, DiceNumber = 1,Score = 0,TotalDice = 0;
    int a1, a2 ,a3,a4,a5;
    int WrongDice1 = 0,WrongDice2 = 0,WrongDice3 = 0,WrongDice4 = 0,WrongDice5 = 0,x = 0;
    printf("\n--- My Turn\n\n");
    printf("I got ----> ");


        while (ErrorCode < 5) {//if there are 5 error that means all dices used

        while (DiceNumber<=5) {

            Dice = rolldice(Dice1);

            if (WrongDice1 != 0){//error checker -If a dice disqualified the dicenumber variable jumps to next dice-

                if (DiceNumber == 1)
                {DiceNumber++;}
            }
            if (WrongDice2 != 0){

                if (DiceNumber == 2){
                    DiceNumber++;}
            }
            if (WrongDice3 != 0){

                if (DiceNumber == 3){
                    DiceNumber++;}
            }
            if (WrongDice4 != 0){

                if (DiceNumber == 4){
                    DiceNumber++;}
            }
            if (WrongDice5 != 0 ){

                if (DiceNumber ==5){
                    break;
                }

            }


            printf("[Dice %d]: %d ", DiceNumber, Dice);

            Score = Score + Dice;

            if (DiceNumber == 1){//-If a dice disqualified the dicenumber variable jumps to next dice-
                a1 = Dice;

                if (Dice == 2 || Dice == 5)
                {WrongDice1 = WrongDice1 + 1;
                }
                }

            if (DiceNumber == 2){
                a2 = Dice;

                if (Dice == 2 || Dice == 5 )
                    {WrongDice2 = WrongDice2 + 1;
                        }
            }
            if (DiceNumber == 3 ){
                a3 = Dice;

                if (Dice == 2 || Dice == 5)
                    {WrongDice3 = WrongDice3 + 1;
                        }
            }
            if (DiceNumber == 4){
                a4 = Dice;

                if (Dice == 2 || Dice == 5)
                    {WrongDice4 = WrongDice4 + 1;

                        }
            }
            if (DiceNumber == 5){
                a5 = Dice;

                if (Dice == 2 || Dice == 5)
                    {WrongDice5 = WrongDice5 + 1;

                        }
            }


            DiceNumber = DiceNumber + 1;

        }

        printf("\n");
        DiceNumber = 1;




        if (a1 == 2 || a1 == 5 || a2 == 2 || a2 == 5 || a3 == 2 || a3 == 5 || a4 == 2 || a4 == 5 || a5 == 2 || a5 == 5)
        {Score = 0;}//If one of the dice is disqualified score should be zero

            TotalDice = TotalDice+ Score;

        a1 = 0;a2 = 0;a3 = 0;a4 = 0;a5 = 0;
            printf("\nYour Score: %d Total score: %d\n",Score,TotalDice);

            Score = 0;

        if  (WrongDice1 != 0 && WrongDice2 != 0 && WrongDice3 != 0 && WrongDice4 != 0 && WrongDice5 != 0){
            ErrorCode=5;

        }


    }
        ReturnTotal = TotalDice;
    printf ("Drop Dead");
        return ReturnTotal;//returns total point to main


}

int playuser(int ReturnTotal){//almost same function with playcomputer

    int Dice, Dice1, ErrorCode = 0, DiceNumber = 1,Score = 0,TotalDice = 0;
    int a1, a2 ,a3,a4,a5;
    int WrongDice1 = 0,WrongDice2 = 0,WrongDice3 = 0,WrongDice4 = 0,WrongDice5 = 0,x = 0;

    printf("\n--- Your Turn\n\n");

    printf("You got ----> ");


    while (ErrorCode < 5) {

        while (DiceNumber<=5) {

            Dice = rolldice(Dice1);

            if (WrongDice1 != 0){

                if (DiceNumber == 1)
                {DiceNumber++;}
            }
            if (WrongDice2 != 0){

                if (DiceNumber == 2){
                    DiceNumber++;}
            }
            if (WrongDice3 != 0){

                if (DiceNumber == 3){
                    DiceNumber++;}
            }
            if (WrongDice4 != 0){

                if (DiceNumber == 4){
                    DiceNumber++;}
            }
            if (WrongDice5 != 0 ){

                if (DiceNumber ==5){
                    break;
                }

            }


            printf("[Dice %d]: %d ", DiceNumber, Dice);

            Score = Score + Dice;

            if (DiceNumber == 1){
                a1 = Dice;

                if (Dice == 2 || Dice == 5)
                {WrongDice1 = WrongDice1 + 1;
                }
            }

            if (DiceNumber == 2){
                a2 = Dice;

                if (Dice == 2 || Dice == 5 )
                {WrongDice2 = WrongDice2 + 1;
                }
            }
            if (DiceNumber == 3 ){
                a3 = Dice;

                if (Dice == 2 || Dice == 5)
                {WrongDice3 = WrongDice3 + 1;
                }
            }
            if (DiceNumber == 4){
                a4 = Dice;

                if (Dice == 2 || Dice == 5)
                {WrongDice4 = WrongDice4 + 1;

                }
            }
            if (DiceNumber == 5){
                a5 = Dice;

                if (Dice == 2 || Dice == 5)
                {WrongDice5 = WrongDice5 + 1;

                }
            }


            DiceNumber = DiceNumber + 1;

        }

        printf("\n");
        DiceNumber = 1;




        if (a1 == 2 || a1 == 5 || a2 == 2 || a2 == 5 || a3 == 2 || a3 == 5 || a4 == 2 || a4 == 5 || a5 == 2 || a5 == 5)
        {Score = 0;}

        TotalDice = TotalDice+ Score;

        a1 = 0;a2 = 0;a3 = 0;a4 = 0;a5 = 0;
        printf("\nYour Score: %d Total score: %d\n",Score,TotalDice);

        Score = 0;

        if  (WrongDice1 != 0 && WrongDice2 != 0 && WrongDice3 != 0 && WrongDice4 != 0 && WrongDice5 != 0){
            ErrorCode=5;

        }


    }
    printf ("Drop Dead");
    ReturnTotal = TotalDice;
    return ReturnTotal;

}

int main() {

    int Rounds,TurnDiceC,TurnDiceU;
    printf("Welcome to the Drop Dead game.\n Lets get started!" );


    printf("\nHow many rounds would you like to play? ");
    scanf("%d",&Rounds);


    srand(time(NULL));

    int TurnC = rolldice(TurnDiceC);
    printf ("\nI have rolled the dice and got %d!",TurnC);//rolling dice for computer

    int TurnU = rolldice(TurnDiceU);
    printf("\nI have rolled the dice for you and you got %d!",TurnU);//rolling dice for user
int scoreboard1,scoreboard2,s1,s2,s3=0,s4=0;
   int RoundCounter=1;

   if (TurnU==TurnC){//if dices are same
        printf("\nOops! Please try again :)");
   }

   while (RoundCounter <= Rounds){//this loops provide function calls work

       printf("\nRound %d",RoundCounter);

       if (TurnC>TurnU)
         {s1= playcomputer(scoreboard1);
             s2=playuser(scoreboard2);}

       if (TurnU>TurnC)
         {s2=playuser(scoreboard2);
             s1=playcomputer(scoreboard1);}


       RoundCounter = RoundCounter+1;
       s3 = s3 + s1;//calculating total numbers
       s4 = s4 + s2;
    }

   scoresheet(Rounds,s3,s4);
}


