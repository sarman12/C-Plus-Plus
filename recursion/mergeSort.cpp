#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e, int mid)
{
    int l = mid - s + 1;
    int r = e - mid;
    vector<int> left(l);
    vector<int> right(r);

    for (int i = 0; i < l; i++)
    {
        left[i] = arr[s + i];
    }
    for (int i = 0; i < r; i++)
    {
        right[i] = arr[mid + 1 + i];
    }

    int index1 = 0;
    int index2 = 0;
    int k = s;
    while (index1 < l && index2 < r)
    {
        if (left[index1] <= right[index2])
        {
            arr[k++] = left[index1++];
        }
        else
        {
            arr[k++] = right[index2++];
        }
    }

    while (index1 < l)
    {
        arr[k++] = left[index1++];
    }
    while (index2 < r)
    {
        arr[k++] = right[index2++];
    }
}
void solve(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    solve(arr, s, mid);
    solve(arr, mid + 1, e);
    merge(arr, s, e, mid);
}

int main()
{
    vector<int> arr = {2, 1, 5, 3, 9, 40, 32, 23};
    int s = 0;
    int e = arr.size();

    solve(arr, s, e);
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}