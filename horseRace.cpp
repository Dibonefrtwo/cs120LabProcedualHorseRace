#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//declare functions in here
void advance(int, int*);

int main(){ 

bool keepGoing = true; 
const int HORSE_NUM = 5; 
int horsePosition [5] = {};

for (int index = 0; index < HORSE_NUM; index++){
 advance(index, horsePosition);
 std::cout << horsePosition[index] << std::endl;
 } //end for
} //end main
 

void advance(int index, int* horsePosition){
 int coin;
 srand(time(NULL));
 coin = (rand() % 2);
 std::cout << coin << std:: endl;
 std::cout << *(horsePosition + index) + coin << std::endl;
}
