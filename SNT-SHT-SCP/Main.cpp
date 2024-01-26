#include"Header.h"

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    system("cls");
    if (isPrime(number))
        cout << number << " is prime number " << endl;
    else
        cout << number << " isn't prime number " << endl;


    if (isCompleteNumber(number))
        cout << number << " is complete number " << endl;
    else
        cout << number << " isn't complete number " << endl;


    if (isOrthography(number))
        cout << number << " is orthography " << endl;
    else
        cout << number << " isn't orthography " << endl;

    return 0;
}