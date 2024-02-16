//Topic 01 : Adjacency Matrix --> Space complexity O (n*n)

//Code : 
#include<bits/stdc++.h>
using namespace std;
const int mx = 100;
int adj[mx][mx];

int main()
{
    int n, m; // n --> node , m --> edge
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v; // cost between 2 node
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}

// Taste case
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6

// Code : ( for weighted graph )
#include<bits/stdc++.h>
using namespace std;
const int mx = 100;
int adj[mx][mx];

int main()
{
    int n, m; // n --> node , m --> edge
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v , wt; // cost between 2 node
        cin >> u >> v >> wt ;
        adj[u][v] = wt ;
        adj[v][u] = wt ;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}

// Taste case
6 9
1 3 9
1 5 2
3 5 4
3 4 7
3 6 17
3 2 8
2 6 9
4 6 3 
5 6 4


--------------------------------------------------------------------------------------------------------------------------------------------

//Topic 01 : Adjacency List --> Space complexity O(n + m )

// Code : ( for unweighted graph )
#include<bits/stdc++.h>
using namespace std;

const int mx = 100;
vector<int> adj[mx];

int main()
{
    int n, m; // n --> node , m --> edge
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v; // cost between 2 node
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Adjacency list of node " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}

// Taste case
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6

// Code : ( for weighted graph )
#include<bits/stdc++.h>
using namespace std;

const int mx = 100;
vector<pair<int, int>> adj[mx];

int main()
{
    int n, m; // n --> node , m --> edge
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, wt; // cost between 2 node
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt}); // Push the pair of node and weight
        adj[v].push_back({u, wt}); // Push the pair of node and weight
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Adjacency list of node " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << "(" << adj[i][j].first << ", " << adj[i][j].second << ") ";
        }
        cout << '\n';
    }

    return 0;
}

// Taste case
6 9
1 3 9
1 5 2
3 5 4
3 4 7
3 6 17
3 2 8
2 6 9
4 6 3 
5 6 4

--------------------------------------------------------------------------------------------------------------------------------------------

//Practice Problem :
1. https://vjudge.net/contest/581700