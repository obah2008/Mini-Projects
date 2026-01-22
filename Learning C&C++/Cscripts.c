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



