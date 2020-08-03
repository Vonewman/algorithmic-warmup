/*
 * Fibonacci number
 * author: Abdoulaye Diallo
*/


#include <iostream>
#include <cassert>


using namespace std;

/*
int fibonacci(int n) {
    if (n <= 1)
	return n;

    double Phi = (1 + pow(5, 0.5))/2;
    double phi = (1 - pow(5, 0.5))/2;
    double ans = (pow(Phi, n) - pow(phi, n))/(pow(5, 0.5));
    
    return (int)(ans+0.5);
}
*/

int fibonacci_naive(int n) {
    if (n <= 1)
	return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {
    /* Declare an array to store Fibonacci numbers. */
    int f[n+2];     // 1 extra to handle case, n = 0
    int i;

    /* 0th and 1st number of the series Fibonacci numbers . */
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
	f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}


void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
	assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main()
{
    int n;
    cin >> n;

    //cout << fibonacci_naive(n) << '\n';
    //test_solution();
    cout << fibonacci_fast(n) << endl;
    return 0;
}
