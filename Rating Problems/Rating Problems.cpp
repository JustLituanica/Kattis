
#include <iostream>
using namespace std;

int main()
{
    int n, k, r;
    double min = 0, max = 0;

    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> r;
        min = min + r;
        max = max + r;
    }

    for (int i = 0; i < n - k; i++)
    {
        min = min - 3;
        max = max + 3;
    }

    cout << min / n << " " << max / n;

    return 0;
}