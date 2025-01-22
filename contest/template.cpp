#include <bits/stdc++.h>
#include <utility>
using namespace std;

#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) 13.09
#endif

using i32 = int;
using u32 = unsigned int;
using i64 = long long;
using u64 = unsigned long long;

using vi = vector<int>;

template <typename T> bool ckmin(T &a, const T &b) {
  return a > b ? a = b, 1 : 0;
}
template <typename T> bool ckmax(T &a, const T &b) {
  return a < b ? a = b, 1 : 0;
}

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define unique(x)                                                              \
  sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

const int INF = 1e9;

void solve() {
  int n;
  cin >> n;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
