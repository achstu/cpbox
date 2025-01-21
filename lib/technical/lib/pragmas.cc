// standard optimizations
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

// bit manipulation instruction sets
#pragma GCC target("abm,bmi,bmi2")

// __builtin_popcount
#pragma GCC target("popcnt")

// provides 8, 16 and 32 byte vector instructions
#pragma GCC target("avx2")

// debug pragma, kills the program on integer overﬂows
// (but is really slow)
#pragma GCC optimize("trapv")
