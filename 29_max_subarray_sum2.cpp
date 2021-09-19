// prefix sum technique


#include <bits/stdc++.h>
using namespace std;
int maximumSumSubarray(int *arr, int n)
{
    int minPrefixSum = 0;
    int res = numeric_limits<int>::min();
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        res = max(res, prefixSum[i] - minPrefixSum);
        minPrefixSum = min(minPrefixSum, prefixSum[i]);
    }
    return res;
}
int main()
{
    int arr[] = {-1, 4, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Result = " << maximumSumSubarray(arr, n) << endl;
    return 0;
}