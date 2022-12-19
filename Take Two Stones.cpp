
#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        if (1 < i && i < N - 1)
        {
            N = N - 2;
        }
    }

    if (N % 2 == 0)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Alice";
    }

    return 0;
}