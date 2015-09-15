//my_aff_alpha in cpp

#include <iostream>
#include <stdio.h>



int my_aff_chiffre(){

  int a = 48;

  while(a < 58){

    putchar(a);
    a++;

  }

  return 0;
}

int main(){

  my_aff_chiffre();
  //adding /n for readability
  std::cout << "\n";

}
