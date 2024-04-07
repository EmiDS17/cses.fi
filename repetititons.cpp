#include <iostream>
using namespace std;

int main(){

    string aux;
    cin >> aux;

    int max = 0;
    int count = 0;

        for (int i = 0; aux[i] != '\0'; i++)
        {
            count++;
            if (count > max) max = count;

            if (aux[i] != '\0' && aux[i] != aux[i+1]) count = 0;
        }

    cout << max;
    return 0;
}