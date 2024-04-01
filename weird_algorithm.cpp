#include <iostream>
using namespace std;

int main()
{

    long int n;

    std::cin >> n;

    cout << n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (n * 3) + 1;
        }

        cout << " ";
        cout << n;
    }

    return 0;
}
