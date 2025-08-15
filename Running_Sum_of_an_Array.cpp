#include <bits/stdc++.h>
using namespace std;

vector<int> running_sum(vector<int> &num)
{
    vector<int> pre(num.size());

    pre[0] = num[0];

    for (int i = 1; i < num.size(); i++)
    {
        pre[i] = pre[i - 1] + num[i];
    }

    return pre;
}

int main()
{

    int n;
    cin >> n;

    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    vector<int> res = running_sum(num);

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
