#include <iostream>
using namespace std;
bool is_prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a = 0, b = 0;

    while(a < 1224)
    {


        if (is_prime(a) == 1)
        {
            cout << a << " ";
            b++;
             if (b % 10 == 0)
             {
                 cout<< endl;
             }
        }
        a++;
    }

    return 0;
}