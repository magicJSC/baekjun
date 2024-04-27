#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
int main() {
	int a;
	stack<int> stack;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		int b;
		cin >> s;
		if (s == "push") {
			cin >> b;
			stack.push(b);
		}
		else if (s == "pop") {
			if (!stack.empty())
			{
				cout << stack.top() << "\n";
				stack.pop();
			}
			else
				cout << -1 << "\n";
		}
		else if (s == "size") {
			cout << stack.size() << "\n";
		}
		else if (s == "empty") {
			if (stack.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "top") {
			if (!stack.empty())
				cout << stack.top() << "\n";
			else
				cout << -1 << "\n";
		}
	}
	return 0;
}