
/*
SNT: (prime) la so chi chia het cho 1 va chinh no
SHT: (complete number) tong cac uoc so nho hon no bang chinh no
SCP: (orthography) can bac 2 cua no la so nguyen
*/

#include "Header.h"

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }
}



bool isCompleteNumber(int n)
{
    int s = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }

    return (s == n) ? true : false;
}



bool isOrthography(int n)
{
    int root = sqrt(n);

    return (root * root == n) ? true : false;
}