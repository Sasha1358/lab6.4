#include <iostream>
#include <math.h>
#include <string>
#include "vector.h"
int main()
{
    try
    {
        vector<int> V(5), U(5), Z(5), T(5);
        cin >> V;
        cin >> U;
        T = V + U;
        cout << "summa of vectors:" << endl;
        cout << T;
        Z += V;
        Z += U;
        cout << "summa of vectors:" << endl;
        cout << Z;
        cout << "min element = " << Z.extr("min") << endl;
        bubbleSort(Z.getVector(), Z.getSize()); // Сортування вектора Z
        cout << "sorted:" << endl;
        cout << Z;
        cout << "norma = " << Z.norma() << endl;
    }
    catch (exception e)
    {
        cerr << e.what() << endl;
    }
    system("pause");
    return 0;
}
