#include <iostream>
using namespace std;

struct point {
    int x, y;
    friend istream& operator>>(istream& in, point& p) { return in >> p.x >> p.y; }
    friend ostream& operator<<(ostream& out, const point& p) { return out << '(' << p.x << ',' << p.y << ')' << '\n'; }
};

int main() {
    point a;
    cin >> a;
    cout << a;
}
