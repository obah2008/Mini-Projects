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




