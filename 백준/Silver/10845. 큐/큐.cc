#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
int main() {
	int a;
	queue<int> queue;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		int b;
		cin >> s;
		if (s == "push") {
			cin >> b;
			queue.push(b);
		}
		else if (s == "pop") {
			if (!queue.empty())
			{
				cout << queue.front() << "\n";
				queue.pop();
			}
			else
				cout << -1 << "\n";
		}
		else if (s == "size") {
			cout << queue.size() << "\n";
		}
		else if (s == "empty") {
			if (queue.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "front") {
			if (!queue.empty())
				cout << queue.front() << "\n";
			else
				cout << -1 <<"\n";
		}
		else if (s == "back") {
			if (!queue.empty())
				cout << queue.back()<<"\n";
			else
				cout << -1<<"\n";
		}
	}
	return 0;
}