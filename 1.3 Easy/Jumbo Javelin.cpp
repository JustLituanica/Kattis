#include <iostream>

using namespace std;

int main(){
    
    int n, a, ans = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ans = ans + a;
    }
    
    ans = ans - n + 1;
    
    cout << ans;
    
    return 0;
}