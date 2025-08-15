#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sentence, word;

    getline(cin, sentence);

    cin >> word;

    stringstream ss(sentence);
    string temp;
    int count = 0;

    while (ss >> temp)
    {
        if (temp == word)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
