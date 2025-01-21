#include <bits/stdc++.h>
using namespace std;

class alpha : public numpunct<char> {
protected:
    string do_truename() const override { return "YES"; }
    string do_falsename() const override { return "NO"; }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout.imbue(locale(locale(), new alpha));
    cout << boolalpha;
    // cout << noboolalpha;

    cout << true << false << true << '\n';
}
