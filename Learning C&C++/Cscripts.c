//Practice problem 1: A student discount calculator
#include <stdio.h>
#include <stdbool.h>

int main(){
   bool isStudent = true;
   bool isSenior = false;
   float newprice = 0.0;
   float price = 10;
   
   if(isStudent == true){

    printf("You get a 10%% discount for being a student\n");  
    newprice = price - (price * 0.1);

    if(isSenior == true){
        printf("Since you're a student and senior you get an extra 20%% discount\nMaking your new discount 30%%\n");
        newprice = price - (price*0.3);

    }

  }
  printf("Your new price is %.2f", newprice);
   return 0;
}

// practice problem 2: a simple Calculator Program
#include <stdio.h>

// Calculator Program
int main(){
   
   float Firstnum = 0.0f;
   float secondnum = 0.0f;
   char operator = '\0';
   float result = 0.0f;

   printf("Enter the first number: ");
   scanf("%f", &Firstnum);
   
   getchar();
   printf("Enter an operator(+,-,/,*): ");
   scanf("%c", &operator);    

   printf("Enter a second number: ");
   scanf("%f", &secondnum);

   switch(operator){
    case '+':
      result = Firstnum + secondnum;
      break;
    case '-':
      result = Firstnum - secondnum;
      break;
    case '/':
      if(secondnum == 0){
        printf("You cannot divide by 0\n");
      }
      else{
        result = Firstnum / secondnum;
      }
      break;
    case '*':
      result = Firstnum * secondnum;  
      break;
    default:
      printf("Enter a valid operator");
   }
   printf("result: %.2f", result);

   return 0;
}


#include <stdio.h>
#include <stdbool.h>


int main(){
 
 bool isrunning = true;
 char response = '\0';

 printf("You are playing a game\n");
  
 while (isrunning){
    
    printf("Would you like to continue: \n");
    scanf(" %c", &response);
    if(response == 'n' || response == 'N'){
        isrunning = false;
    }
    else if(response == 'y' || response == 'Y'){
        printf("Okay let's go again!!!\n");
        isrunning = true;
    }
    else{
        printf("Enter a valid response\n");
    }
 }
 printf("Thank you for playing!");
 return 0;
}

// Nested Loops. A basic multiplication table
#include <stdio.h>
int main(){
  for(int i = 1; i <12; i++){
    printf("%d times table\n**************\n", i);
    for (int j=1; j <12; j++){
        int m = i * j;
        printf("%d * %d = %d\n", j, i, m);
    }
    printf("\n");
  }
  printf(" Compiled successfully! ");
}
// nested loops continued
#include <stdio.h>

int main(){
  int rows = 0.0;
  int columns = 0.0;
  char symbol = '\0';
  
  printf("Enter the no of rows: ");
  scanf("%d", &rows);

  printf("Enter the no of columns: ");
  scanf("%d", &columns);

  printf("Enter a symbol: ");
  getchar();
  scanf("%c", &symbol);

  for(int i = 0; i< rows; i++){
    for(int j = 0; j< columns; j++){
        printf("%c", symbol);
    }
    printf("\n");
  }
}

// Rock Paper Scissors
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int getcomputerchoice(){
    srand(time(NULL));

    int choice = (rand() % 3) + 1;
    return choice;

}

int getuserchoice(){
    int choice = 0;
    do{
        printf("1 = Rock\n2 = Paper\n3 = Scissors\nEnter a number: ");
        scanf("%d", &choice);
    }while(choice < 1 || choice > 3);
    return choice;
    

}

void resultOptimized(int user, int computer){
    if(computer == 1 && user == 1 || computer == 2 && user == 2 || computer == 3 && user == 3){
        printf("You and the computer chose the same object\nIt's a tie");
    }
    else if(computer == 2 && user == 1 || computer == 1 && user == 3 || computer == 3 && user == 2){
        printf("The computer wins!");
    }
    else{
        printf(" You have won!");
    }

}


int main(){

   int Computer = getcomputerchoice();
   int User = getuserchoice();

   switch(User){
    case 1:
       printf("You have chosen Rock\n");
       break;
    case 2:
       printf("You have chosen Paper\n");
       break;
    case 3:
       printf("You have chosen Scissors\n");
       break;
   }
   switch(Computer){
    case 1:
       printf("The Computer has chosen Rock\n");
       break;
    case 2:
       printf("The Computer has chosen Paper\n");
       break;
    case 3:
       printf("The Computer has chosen Scissors\n");
       break;
   }
   resultOptimized(User, Computer);
   
}
