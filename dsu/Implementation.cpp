#include <bits/stdc++.h>
using namespace std;

class DSU
{
    vector<int> parent, rank, size;

public:
    DSU(int n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findParent(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findParent(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int pu = findParent(u);
        int pv = findParent(v);

        if (pu == pv)
            return; 
        if (rank[pu] < rank[pv])
        {
            parent[pu] = pv;
        }
        else if (rank[pv] < rank[pu])
        {
            parent[pv] = pu;
        }
        else
        {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
    void unionBySize(int u, int v)
    {
        int pu = findParent(u);
        int pv = findParent(v);

        if (pu == pv)
            return;

        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};

int main()
{
    DSU dsu(7);

    dsu.unionByRank(1, 2);
    dsu.unionByRank(2, 3);

    dsu.unionBySize(4, 5);
    dsu.unionBySize(6, 7);
    dsu.unionBySize(5, 6);

    if (dsu.findParent(1) == dsu.findParent(3))
        cout << "1 and 3 are in the same set (Rank)\n";
    else
        cout << "1 and 3 are in different sets (Rank)\n";

    if (dsu.findParent(4) == dsu.findParent(7))
        cout << "4 and 7 are in the same set (Size)\n";
    else
        cout << "4 and 7 are in different sets (Size)\n";

    return 0;
}
