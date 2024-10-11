#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	fastIo;

	vector<int>v;
	for (int i = 0; i < 4; i++)
	{
		int n;
		cin >> n;

		v.push_back(n);
	}

	sort(v.begin(), v.end());

	int a = v[0] + v[3];
	int b = v[1] + v[2];

	cout << abs(a - b);
}