#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student &a, Student &b)
{
    if (a.marks == b.marks)
        return a.roll > b.roll;
    return a.marks < b.marks;
}

int main()
{
    int N;
    cin >> N;
    Student arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << "\n";
    }

    return 0;
}
