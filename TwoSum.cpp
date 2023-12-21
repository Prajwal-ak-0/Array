#include <bits/stdc++.h>
using namespace std;

// SOLUTION 1
// T O(N^2)

bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;
            sum = arr[i] + arr[j];
            if (sum == x)
            {
                return true;
            }
        }
    }
    return false;
}

// SOLUTION 2
// T O(N)

bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] > x)
        {
            high--;
        }
        else if (arr[low] + arr[high] < x)
        {
            low++;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}