#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int query;
        bool found = false;
        cin >> query;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == query)
            {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
