#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int N;
    cin >> N;
    Student arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    for (int i = N - 1; i >= 0; i--)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}
