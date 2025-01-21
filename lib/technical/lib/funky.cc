#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
using namespace __gnu_pbds;
#define all(x) (x).begin(), (x).end()
#define sz(x) static_cast<int>((x).size())
template <typename T>
using indexset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename U, typename T>
U &operator>>(U &s, vector<T> &v) { for (T& x : v) s >> x; return s; }
template <typename U, typename T>
U &operator<<(U &s, vector<T> &v) { for(T& x : v) s << x << ' '; return s; }
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
template <typename T> inline T myRand(T B) { return (uint64_t) rng() % B; }
#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...) 42
#define dba(...) 69
#endif

//*******************************************************************************************

const string x = "vika";

void solve(int tc) {
	int n;
	cin >> n;
	vector<int> b(n);
	cin >> b;
	vector<int> a(1, b[0]);
	for (int i = 1; i < n; i++) {
		if (b[i] < b[i - 1]) {
			a.push_back(1);
		}
		a.push_back(b[i]);
	}
	cout << sz(a) << '\n';
	cout << a << '\n';
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif 

	auto start = chrono::high_resolution_clock::now();
	int tcno = 1;
	cin >> tcno;
		
	for (int tc = 1; tc <= tcno; tc++) {
		dbg(tc);
		solve(tc);
	}

	auto stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(stop - start);
	cerr << "Time taken : " << ((long double) duration.count())/((long double) 1e9) << " s\n";
	return 0;
}