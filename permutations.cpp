#include <iostream>
using namespace std;

void beautiful_permutation(int n){
    if (n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
        return;
    }
    for (int i = 2; i <= n; i += 2){
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    long int in;

    cin >> in;

    beautiful_permutation(in);

    return 0;
}