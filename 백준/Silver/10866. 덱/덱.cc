#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;
int main() {
	int a;
	deque<int> deque;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		int b;
		cin >> s;
		if (s == "push_front") {
			cin >> b;
			deque.push_front(b);
		}
		else if (s == "push_back") {
			cin >> b;
			deque.push_back(b);
		}
		else if (s == "pop_front") {
			if (!deque.empty())
			{
				cout << deque.front() << "\n";
				deque.pop_front();
			}
			else
				cout << -1 << "\n";
		}
		else if (s == "pop_back") {
			if (!deque.empty())
			{
				cout << deque.back() << "\n";
				deque.pop_back();
			}
			else
				cout << -1 << "\n";
		}
		else if (s == "size") {
			cout << deque.size() << "\n";
		}
		else if (s == "empty") {
			if (deque.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "front") {
			if (!deque.empty())
				cout << deque.front() << "\n";
			else
				cout << -1 <<"\n";
		}
		else if (s == "back") {
			if (!deque.empty())
				cout << deque.back()<<"\n";
			else
				cout << -1<<"\n";
		}
	}
	return 0;
}