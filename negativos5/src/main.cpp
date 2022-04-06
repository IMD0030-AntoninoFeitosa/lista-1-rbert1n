#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
  int x[SIZE], count=0; 

  for (int i = 0; i < SIZE; i++){    
    std::cin>>x[i];
    if( x[i] < 0){
      count++;
    }
  }
  
  std::cout << count;  
      
    return 0;
} 
