#include <iostream>
#include <string>
#include <ctime>

//declare functions in here
void advance(int index, int* horsePosition[]);

int main(){ 

bool keepGoing = true; 
const int HORSE_NUM = 5; 
int horsePosition [5] = {};

srand(time(0));

for (int index = 0; index < HORSE_NUM; index++){
 advance(index, horsePosition[index]);
 std::cout << horsePosition[index] << std::endl;
 } //end for
} //end main
 

void advance(int index, int* horsePosition[]){
 int coin = rand() % 2;
 std::cout << horsePosition[index] + coin << std::endl;
}
