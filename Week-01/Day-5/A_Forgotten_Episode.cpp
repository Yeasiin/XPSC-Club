#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n + 1] = {0};

    for (int i = 0; i < n - 1; i++)
    {

        int tmp = 0;
        cin >> tmp;
        arr[tmp]++;
    }

    for (int i = 1; i <= n; i++)
    {

        if (arr[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}