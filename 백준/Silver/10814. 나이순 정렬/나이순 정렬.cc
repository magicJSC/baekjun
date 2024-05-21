#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct info
{
	int id;
	string name;
};
bool compare(info i1, info i2) {
	return i1.id < i2.id;
}

int main() {
	int a;
	cin >> a;
	vector<info> v;
	for (int i = 0; i < a; i++) {
		string s;
		int b;
		cin >> b;
		cin >> s;
		v.push_back({b,s});
	}
	stable_sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].id << " " << v[i].name << "\n";
	}
	return 0;
}
