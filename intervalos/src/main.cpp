/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int intervalo1 = 0;
    int intervalo2 = 0;
    int intervalo3 = 0;
    int intervalo4 = 0;
    int intervalo5 = 0;
    int x;
    while( cin >> std::ws >> x) {// realização da contagem em relação aos intervalos
        if (x >= 0 & x < 25 )
        {
            intervalo1++;
        }
        if (x > 24 & x < 50 )
        {
            intervalo2++;
        }
        if (x > 49 & x < 75 )
        {
            intervalo3++;
        }
        if (x > 74 & x < 100 )
        {
            intervalo4++;
        }
        if (x < 0 | x > 99 )
        {
            intervalo5++;
        }
    }
    // TODO: Adicione aqui a sua solução.
        double count = intervalo1 + intervalo2 + intervalo3 + intervalo4 + intervalo5;
        std::cout << setprecision(4) << intervalo1/count*100 << endl; 
        std::cout << setprecision(4) << intervalo2/count*100 << endl; 
        std::cout << setprecision(4) << intervalo3/count*100 << endl; 
        std::cout << setprecision(4) << intervalo4/count*100 << endl; 
        std::cout << setprecision(4) << intervalo5/count*100 << endl; 

    return 0;
}
