#include <bits/stdc++.h>
using namespace std;

class DSU
{
    vector<int> rank, parent;

public:
    DSU(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findParent(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findParent(parent[node]);
    }

    void unionByRank(int node1, int node2)
    {
        int Unode1 = findParent(node1);
        int Unode2 = findParent(node2);

        if (Unode1 == Unode2)
            return;

        if (rank[Unode1] < rank[Unode2])
        {
            parent[Unode1] = Unode2;
        }
        else if (rank[Unode2] < rank[Unode1])
        {
            parent[Unode2] = Unode1;
        }
        else
        {
            parent[Unode2] = Unode1;
            rank[Unode1]++;
        }
    }
};

int main()
{
    DSU dsu(7); 
    dsu.unionByRank(1, 2);
    dsu.unionByRank(2, 3);
    dsu.unionByRank(4, 5);
    dsu.unionByRank(6, 7);
    dsu.unionByRank(5, 6);

    if (dsu.findParent(3) == dsu.findParent(7))
    {
        cout << "3 and 7 are in the same component\n";
    }
    else
    {
        cout << "3 and 7 are in different components\n";
    }

    if (dsu.findParent(1) == dsu.findParent(3))
    {
        cout << "1 and 3 are in the same component\n";
    }
    else
    {
        cout << "1 and 3 are in different components\n";
    }

    if (dsu.findParent(4) == dsu.findParent(7))
    {
        cout << "4 and 7 are in the same component\n";
    }
    else
    {
        cout << "4 and 7 are in different components\n";
    }

    return 0;
}
