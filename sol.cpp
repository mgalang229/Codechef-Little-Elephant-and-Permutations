#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int inversions = 0;
		for (int i = 0; i < n; i++) {
			// note: check the elements at the next indices after 'i'
			for (int j = i + 1; j < n; j++) {
				if (a[i] > a[j]) {
					// if the current element is STRICTLY greater than the next elements,
					// then increment the 'inversions' variable
					inversions++;
				}
			}
		}
		int local_inversions = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) {
				// if the current element is STRICTLY greater than the next element,
				// then increase the 'local_inversions' variable
				local_inversions++;
			}
		}
		// check if the number of inversions and the number of local inversions are equal
		cout << (inversions == local_inversions ? "YES" : "NO") << '\n';
	}
	return 0;
}
