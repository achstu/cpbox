#include <iostream>
#include <string>
using namespace std;

template <typename T, typename = T::value_type>
ostream &operator<<(ostream &os, const T &x)
  requires(!same_as<T, string>)
{
  os << '{';
  string sep;
  for (const auto &v : x) {
    os << sep << v;
    sep = ", ";
  }
  return os << '}';
}

template <typename T, typename U>
ostream &operator<<(ostream &os, const pair<T, U> &x) {
  return os << format("({},{})", x.first, x.second);
}

template <typename... Args> void __print(const Args &...x) {
  ((cerr << ' ' << x), ...);
  cerr << endl;
}

#define debug(...)                                                             \
  do {                                                                         \
    cerr << '[' << #__VA_ARGS__ << "]:";                                       \
    __print(__VA_ARGS__);                                                      \
  } while (0)
