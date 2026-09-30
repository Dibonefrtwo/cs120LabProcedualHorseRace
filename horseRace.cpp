#include <iostream>
#include <string>
#include <random>

//declare functions in here
void advance(int, int*);
void printLane(int, int*, int);
bool isWinner(int, int*, int);

int main(){ 

bool keepGoing = true;
bool result;
const int HORSE_NUM = 5;
const int TRACK_SIZE = 15;
int horsePosition [5] = {};

while (keepGoing == true){
 for (int index = 0; index < HORSE_NUM; index++){
  advance(index, horsePosition);
  printLane(index, horsePosition, TRACK_SIZE);
  result = isWinner(index, horsePosition, TRACK_SIZE);
  if (result == true){
   keepGoing = false;
  } // end if
 } // end for
 std::cout << "Press enter for another turn" << std::endl;
 std::cin.ignore();
 }//end while
}// end main
 

void advance(int index, int* horsePosition){
 int coin;
 srand(time(NULL));std::random_device rd;
 std::uniform_int_distribution<int> dist(0, 1);
 coin = dist(rd);
 horsePosition[index] = horsePosition[index] + coin;
}//  end advance

void printLane(int index, int* horsePosition, int TRACK_SIZE){
 bool keepGoing = true;
 while (keepGoing == true){
  for (int i = 0; i < TRACK_SIZE; i++){
   if (i == horsePosition[index]){
    std::cout << index << " ";
   } //end if 
   else{
    std::cout << ". ";
   } //end else
  } //end for
  std::cout << std::endl;
  keepGoing = false;
 } //end while
} //end printLane
  
bool isWinner(int index, int* horsePosition, int TRACK_SIZE){
 bool result = false;
 if (horsePosition[index] >= TRACK_SIZE){
  result = true;
  std::cout << "HORSE " << index << " IS A WINNER!!" << std::endl;
 } // end if
 return result;
} // end isWinner
