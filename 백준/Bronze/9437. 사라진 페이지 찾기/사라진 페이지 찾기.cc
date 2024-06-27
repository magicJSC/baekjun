#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool compare(int x, int y) {
	return x < y;
}

int main() {
	while (true)
	{
		int a, b;
		vector<int> v;
		cin >> a;
		if (a == 0)
			break;
		cin >> b;
		int page = (b+1) / 2 *2;
		v.push_back(a - page + 2);
		v.push_back(a - page + 1);
		if (b % 2 == 0)
			v.push_back(b-1);
		else
			v.push_back(b+1);
		sort(v.begin(), v.end(), compare);
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
