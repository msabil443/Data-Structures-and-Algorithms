// C++ Implementation of above approach
#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e5;
vector<int> tree[maxx];
int degree_of_node[maxx], parent_of_node[maxx],
	child_of_node[maxx], flag = -1;

// Function to calculate number of children
// of every node in a tree with root 1
void dfs(int current, int parent)
{
	parent_of_node[current] = parent;
	for (int& child : tree[current]) {

		// If current and parent are same we have
		// already visited it, so no need to visit again
		if (child == parent)
			return;
		dfs(child, current);
	}

	// If the current node is a leaf node
	if (degree_of_node[current] == 1 && current != 1) {

		// For leaf nodes there will be no child.
		child_of_node[current] = 0;
		return;
	}

	// Gives the total child of current node
	int total_child = 0;
	for (auto& child : tree[current]) {
		if (child == parent)
			return;
		else
			++total_child;
	}
	child_of_node[current] = total_child;
	return;
}

// Function to calculate permutations ( nPr )
int find_nPr(int N, int R)
{
	if (R > N) {
		flag = 0;
		return 0;
	}
	int total = 1;
	for (int i = N - R + 1; i <= N; ++i) {
		total = total * i;
	}
	return total;
}

// Function to calculate the number of ways
// to paint the tree according to given conditions
int NoOfWays(int Nodes, int colors)
{

	// Do dfs to find parent and child of a node,
	// we root the tree at node 1.
	dfs(1, -1);

	// Now start iterating for all nodes of
	// the tree and count the number of ways to
	// paint its children and node itself
	int ways = 0;
	for (int i = 1; i <= Nodes; ++i) {

		// If the current node is root node, then
		// we have total of K ways to paint it and
		// (k-1)P(x) to paint its child
		if (i == 1) {
			ways = ways + colors *
				find_nPr(colors - 1, child_of_node[1]);
		}
		else {

			// For other remaining nodes which are not
			// leaf nodes we have (k-2)P(x) to paint
			// its children, we will not take into
			// consideration of current node
			// since we already painted it.
			if (degree_of_node[i] == 1) {
				continue;
			}
			else {
				ways = ways *
				find_nPr(colors - 2, child_of_node[i]);
			}
		}
	}
	return ways;
}

// Function to build the tree


// Driver Code
int main()
{
	int N, K;
    cin>>N>>K;
	int a,b;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for (int i=0; i<N-1; i++)
    {
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
        v3.push_back(a);
        v3.push_back(b);
    }
    sort (v3.begin(),v3.end());
    // MakeTree(v1,v2,v3,N);
    vector<int>v4;
    vector<int>v5;
    for (int i=0; i<v3.size(); i++)
    {
        if(i%2==0)
        {
            v4.push_back(v3[i]);
        }
        else
            v5.push_back(v3[i]);
    }
    for (int i=0; i<v3.size(); i++)
    {
        cout<<v4[i]<<" "<<v5[i]<<endl;
    }
    for (int i=0; i<N-1; i++)
    {
        tree[v1[i]].push_back(v4[i]);
        tree[v2[i]].push_back(v5[i]);
        degree_of_node[v1[i]]++;
        degree_of_node[v2[i]]++;
    }
    // long long int m=1000000007;
	// int Count = NoOfWays(N, K);
	// cout << Count << "\n";
	return 0;
}
