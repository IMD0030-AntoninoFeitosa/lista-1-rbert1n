/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n, result;
    
    while( cin >> std::ws >> m) {
      cin >> std::ws >> n;
      result = m;
      if (n > 0)
      {
        for (int i = 1; i < n; i++)
        {
          result = result + ++m;
        }
        cout << result << endl;
      }
      else if (n < 0){
        for (int i = -1; i > n; i--)
        {
          result = result + --m;
        }
        cout << result << endl;
      }
      else{
        cout << result << endl;
      }
    }
    
    return 0;
}
