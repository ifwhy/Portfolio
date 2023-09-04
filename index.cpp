#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 1 or n == 0){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int n;
    cout << "Masukkan sebuah bilangan asli : ";
    cin >> n;
    cout << "Suku ke-" << n << " pada barisan fibonacci adalah " << fibonacci(n);
    return 0;
}
