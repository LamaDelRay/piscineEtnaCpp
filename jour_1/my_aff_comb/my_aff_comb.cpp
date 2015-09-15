#include <stdio.h>
#include <iostream>


int my_aff_comb(){
  int a = 0;
  int b;
  int c;

  while( a < 8){
    b = a + 1;
    while( b < 9){
      c = b + 1;
      while(c < 10){
	std::cout << a << b << c;
	if (a == 7 && b == 8 && c == 9)
	  std::cout << "\n";
	else
	  std::cout << ", ";
	c++;
      }
      b++;
    }
    a++;
  }
  return 0;
}

int main(){

  my_aff_comb();

}
