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
