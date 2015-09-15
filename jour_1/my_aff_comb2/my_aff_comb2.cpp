#include <stdio.h>
#include <iostream>


int my_aff_comb2(){
  int a = 0;
  int b = 0;
  int c = 0;

  //Logic not finished yet

  while(a < 10){
    while(b < 9){
      while(c < 10){
	d = c + 1
	while(d < 10){
	  d++;
	}
	c++;
      }
      b++;
    }
    a++;
  }

  /*
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
  */

  return 0;
}

int main(){

  my_aff_comb2();

}
