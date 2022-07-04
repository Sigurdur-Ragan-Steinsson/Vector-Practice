#include <iostream>

using namespace std;

int main() {
  int largestNum, currentDigit, secondLargest = 0, higher = 0;
  int vector[8] = {10, 25, 63, 87, 75, 14, 9, 32};
  for(int i = 0; i < 8; i ++){
    currentDigit = vector[i];
    if(currentDigit > largestNum){
      largestNum = currentDigit;
    }
  }
  for(int x = 0, y = 1; x < 8; x++, y++){
      if(((vector[x] > vector[y]) && (vector[x] > higher) && (vector[x] != largestNum))){
        higher = vector[x];
      }
      else if ((vector[y] > higher) && (vector[y] != largestNum)){
        higher = vector[y];
      } 
      if (higher < largestNum){
        secondLargest = higher;
      }
    }
  
  // for(int x = 0; x < 8; x++){
  //   for(int y = 1; x < 8; y++){
  //   currentDigit = vector[x];
  //   if((vector[x] > vector[y]) && (vector[x] < largestNum)){
  //     secondLargest = vector[x];
  //   }
  //   else{
  //     secondLargest = vector[y];
  //     }
  //   }
  // }
  cout << secondLargest;
}