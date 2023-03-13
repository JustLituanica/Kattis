#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    double q, y, total = 0;

    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> q;
        cin >> y;
        
        total = total + (q * y);
    }

    cout << fixed << setprecision(3) << total;

    return 0;
}