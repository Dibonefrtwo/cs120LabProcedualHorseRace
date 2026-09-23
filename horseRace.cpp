#include <iostream>
#include <string>

//declare functions in here 

#define bool keepGoing true
#define int HORSE_NUM 5
int horsePosition [5] = {};

int main(){ 
 if (keepGoing == true){
  for (int n = 0; n > HORSE_NUM; n++){ 
   std::cout << horsePosition[n] << std::endl;
  } // end for
 } //end if
 return 0;
} //end main
 
