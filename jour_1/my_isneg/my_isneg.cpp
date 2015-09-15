#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int my_isneg(int n){

  if (n < 0)
    putchar(78);
  else
    putchar(80);
  return 0;
}


int main(int argc, char **argv){

  if(argc < 2){
    std::cout << "Invalid number of arguments \n";
    return 1;
  }


  int a = atoi(argv[1]);
  my_isneg(a);
  //adding readability
  std::cout << "\n";


}
