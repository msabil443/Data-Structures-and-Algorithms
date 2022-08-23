// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// To store the required answer
int ans = 0;

// To store the graph
vector<int> gr[100005];

// Function to add edges
void Add_Edge(int u, int v)
{
	gr[u].push_back(v);
	gr[v].push_back(u);
}

// Dfs function
void dfs(int child, int par, int color[])
{

	// When there is difference in colors
	if (color[child] != color[par])
		ans++;

	// For all it's child nodes
	for (auto it : gr[child]) {
		if (it == par)
			continue;
		dfs(it, child, color);
	}
}

// Driver code
int main()
{

    int a,b;
    cin>>a>>b;
    int h,j;
    
	int color[b];
    for (int i=1; i<=b; i++)
    {
        color[i]=i;
    }
    for (int i=0; i<a-1; i++)
    {
        cin>>h;
        cin>>j;

        Add_Edge(h,j);
        
    }
    dfs(1, 0, color);

	// // Adding edges in the graph
	// Add_Edge(1, 2);
	// Add_Edge(1, 3);
	// Add_Edge(2, 4);
	// Add_Edge(2, 5);
	// Add_Edge(3, 6);

	// Dfs call
	

	// Required answer
	cout << ans*2;

	return 0;
}
