#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    freopen("p1.txt", "rt", stdin);

	int t, cursor;
	string str;
    vector <char> v;

	cin >> t;
	while (t--) {
		cin >> str;
        cursor = 0;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '<') {
				if (cursor == 0) continue;
				cursor--;
			}
			else if (str[i] == '>') {
				if (cursor == v.size()) continue;
				cursor++;
			}
			else if (str[i] == '-') {
				if (cursor == 0) continue;
				v.erase(v.begin() + cursor - 1);
				cursor--;
			}
			else {
				v.insert(v.begin() + cursor, str[i]);
				cursor++;
			}
		}
		
		for (int i = 0; i < v.size(); i++) cout << v[i];
        cout << "\n";
	}

	return 0;
}