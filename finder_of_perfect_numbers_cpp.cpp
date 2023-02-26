#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
    double start, end;
    long long x = 0, sum = 0;

    cout << "6 - True - 2^3 - 0ms\n";

    for (double s = 5; s < 64; s += 2)
    {
        x = pow(2.0, s) - sqrt((pow(2.0, (double) s)) / 2);
        cout << x << " - ";
        sum = 1;
        
        // function
        start = clock();
        if (x % 10 == 6 || x % 10 == 8)
        {
            for (long long i = 2; i < sqrt(x) + 1; i++)
            {
                if (x % i == 0)
                {
                    //cout << i << " " << x / i << " ";
                    sum += i + x / i;
                }
            }
        }
        end = clock();
        // endfunction
        
        if (sum == x)
        {
            cout << "True - 2^" << s << " - " << end - start << "ms\n";
        }
        else
        {
            cout << "False - 2^" << s << " - " << end - start << "ms\n";
        }
    }
    cout << "\nPress ENTER to exit:";
    cin.get();
    return 0;
}
