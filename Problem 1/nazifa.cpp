#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pick;
    cin >> n >> pick;
    int low = 1, high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int res;
        if (mid == pick) res = 0;
        else if (mid > pick) res = -1;
        else res = 1;
        if (res == 0)
        {
            cout << mid <<endl;
            return 0;
        }
        else if (res == -1)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << -1 << "\n";
    return 0;
}
