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

using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;

const u64 MAX_K = 100'000;
const u64 MOD = 998'244'353;

vector<u64> primes;

void sieve() {
  bitset<MAX_K> is_prime;
  is_prime.set();
  // is_prime[0] = false;
  // is_prime[1] = false;
  for (u64 i = 2; i <= MAX_K; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (u64 j = i * i; j <= MAX_K; j += i) {
        is_prime[j] = false;
      }
    }
  }
}

void solve() {
  u64 k, n;
  cin >> k >> n;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  sieve();
  debug(primes);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
