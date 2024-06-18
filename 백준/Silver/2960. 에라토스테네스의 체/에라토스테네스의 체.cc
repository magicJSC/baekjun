#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	int a, b,count =0;
	vector<int> v;
	cin >> a >> b;
	for (int i = 2; i <= a; i++) {
		v.push_back(i);
	}
	int index=0;
	int s;
	while (v.size() > 0) {
		s = v[0];
		while (index < v.size()) {
			if (v[index] % s == 0)
			{
				count++;
				if (count == b)
				{
					cout << v[index];
					break;
				}
				v.erase(v.begin() + index);
			}
			else
				index++;
		}
		index = 0;
	}
	return 0;
}
