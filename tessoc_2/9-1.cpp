#include <iostream>
#include <vector>
using namespace std;

int n, m;
int a[100009], b[100009];
vector<int> G[100009];
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i];
		G[a[i]].push_back(b[i]);
		G[b[i]].push_back(a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		cout << i << ": {";
		for (int j = 0; j < G[i].size(); j++)
		{
			if (j >= 1)
				cout << ", ";
			cout << G[i][j];
		}
		cout << "}" << endl;
	}
	return 0;
}