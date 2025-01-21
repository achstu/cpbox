#include <random>
using namespace std;

int randint(int l, int r) {
    static random_device rd;
    static mt19937 mt{rd()};

    uniform_int_distribution<int> uid(l, r);
    return uid(mt);
}
