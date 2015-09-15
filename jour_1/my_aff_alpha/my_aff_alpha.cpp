//my_aff_alpha in cpp

#include <iostream>
#include <stdio.h>



int my_aff_alpha(){

  int a = 97;

  while(a < 123){

    putchar(a);
    a++;

  }


  return 0;
}

int main(){

  my_aff_alpha();
  //adding /n for readability
  std::cout << "\n";

}
