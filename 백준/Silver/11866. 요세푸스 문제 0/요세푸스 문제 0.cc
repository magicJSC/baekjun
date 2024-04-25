#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	int a,b,index =0;
	cin >> a >> b;
	vector<int>v(a);
	vector<int>v2(a);
	for (int i = 1; i <= v.size(); i++) {
		v[i-1] = i;
	}
	for (int i = 0; i < v2.size(); i++) {
		index += b-1;
		if (index >= v.size()) {
			index = index % v.size();
		}
		v2[i] = v[index];
		v.erase(v.begin() + index);
	}
	cout << "<"<< v2[0];
	for (int i = 1; i < v2.size(); i++) {
		cout << ", " << v2[i];
	}
	cout << ">";
	return 0;
}