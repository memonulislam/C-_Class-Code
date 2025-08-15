#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int total_add = 0;

    for (int i = 0; i < n; i++)
    {
        total_add += arr[i];
    }

    int l_add = 0;
    int equilibriumIndex = -1;

    for (int i = 0; i < n; i++)
    {
        int r_add = total_add - l_add - arr[i];

        if (l_add == r_add)
        {
            equilibriumIndex = i;
            break;
        }

        l_add += arr[i];
    }

    cout << equilibriumIndex << endl;

    return 0;
}
