#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
int main() {
	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		stack<char> stack;
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(')
				stack.push(s[j]);
			else if(s[j] == ')')
			{
				if (stack.empty())
				{
					cout << "NO" << "\n";
					break;
				}
				else
				{
					stack.pop();
					if (stack.empty() && j == s.length() - 1)
					{
						cout << "YES" << "\n";
						break;
					}
				}
			}
			if (!stack.empty() && j == s.length() - 1)
				cout << "NO"<<"\n";
		}
	}
	return 0;
}