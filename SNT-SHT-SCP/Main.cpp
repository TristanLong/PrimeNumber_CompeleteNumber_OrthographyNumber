#include"Header.h"

int main()
{
    int n;
    cout << "Nhap n: " << endl;
    cin >> n;

    system("cls");
    if (isPrime(n))
        cout << n << " la SNT " << endl;
    else
        cout << n << " khong la SNT " << endl;


    if (isCompleteNumber(n))
        cout << n << " la SHT " << endl;
    else
        cout << n << " khong la SHT " << endl;


    if (isOrthography(n))
        cout << n << " la SCP " << endl;
    else
        cout << n << " khong la SCP " << endl;

    return 0;
}