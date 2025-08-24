#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int arr[100];
    int size = 0;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parentindex = index / 2;
            if (arr[parentindex] < arr[index])
            {
                swap(arr[parentindex], arr[index]);
                index = parentindex;
            }
            else
            {
                return;
            }
        }
    }
    void delete1()
    {
        if (size == 0)
        {
            cout << "NOthing ot delete :)" << endl;
        }
        cout << endl;

        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            if (leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (rightindex < size && arr[i] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(40);
    h.insert(60);
    h.insert(64);
    h.insert(74);
    cout << "Before deletion -> " << endl;
    h.print();
    h.delete1();
    cout << "After deletion -> " << endl;
    h.print();
}