///**** 11988-Broken Keyboard (a.k.a. Beiju Text)****///
#include<bits/stdc++.h>
#define ll long long int
#define lI long int
#define ld long double
#define EPS (1e-18)
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
#define all(x) (x.begin(),x.end())
#define sortad(x) sort(all(x))
#define sz(x) ((int)(x.size()))
 
using namespace std; /* we can use (goto) , i can give default values for parameters */
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair <int, int> pi;
//template <class type1, class type2>
char InvertCase(char &c) {
	return islower(c) ? toupper(c) : tolower(c);
}
bool is_Sorted(int first, int secound, ll arr[]) {
	int i = first;
	for (;i < secound;i++) {
		if (arr[i] < arr[i + 1]) continue;
		else { return false; }
	}
	if (i == secound)
		return true;
}
int dcmp(double x, double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1; }
int main() {
	string s;
	while (cin >> s) {
		int len = (int)s.size() - 1;
		for (int i = len; i >= 0; i--) {
			if (s[i] == '[') {
				for (int k = i + 1; k <= len; k++) {
					if (s[k] == ']' || s[k] == '[') break;
					cout << s[k];
				}
			}
		}
		int k = 0;
		for (k; k <= len; k++) {
			if (s[k] == ']' || s[k] == '[') break;
			cout << s[k];
		}
		bool f = false;
		for (; k <= len; k++) {
			if (s[k] == ']') { f = true; continue; } 
			if (s[k] == '[') f = false;
			if (f) cout << s[k];
		}
		cout << endl;
	}
	return 0;
}