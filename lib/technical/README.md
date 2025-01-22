### Randomness

```cpp
int randint(int l, int r) {
    static random_device rd;
    static mt19937 mt{rd()};

    uniform_int_distribution<int> uid(l, r);
    return uid(mt);
}
```

### Pragmas

Standard optimizations
```cpp
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
```

Bit manipulation instruction sets
```cpp
#pragma GCC target("abm,bmi,bmi2")
#pragma GCC target("popcnt")
```

Provides 8, 16 and 32 byte vector instructions
```cpp
#pragma GCC target("avx2")
```

Debug pragma, kills the program on integer overﬂows (but is really slow)
```cpp
#pragma GCC optimize("trapv")
```
