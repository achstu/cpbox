#include <bits/stdc++.h>
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

using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<pii> e;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    e.push_back({l, +1});
    e.push_back({r, -1});
  }

  sort(e.begin(), e.end(), [&](pii a, pii b) {
    return a.first == b.first ? a.second > 0 : a.first < b.first;
  });

  set<int> begin;
  begin.insert(e[0].first);

  for (int i = 1; i < 2 * n; i++) {
    if (e[i].second > 0) {
      begin.insert()
    }
  }
}
