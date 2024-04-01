#include <iostream>
using namespace std;

int main(){

    long int n;

    cin >> n;

    long int gauss = (n * (n+1))/2;
    long int missing_gauss = 0;

    long int aux;
    for (long int i = 1; i < n; i++)
    {
        cin >> aux;

        missing_gauss += aux;
    }
    
    
    long int ret = gauss - missing_gauss;
    cout << ret;
    return 0;
}