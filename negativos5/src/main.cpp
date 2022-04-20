#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
  int x, count=0; 

  for (int i = 0; i < SIZE; i++){    
    cin >> std::ws >> x;
    if( x < 0){
      count++;
    }
  }
  
  cout << count;  
      
    return 0;
} 
