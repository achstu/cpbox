// Problem: D. Yet Another Monster Fight
// Contest: Educational Codeforces Round 158 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1901/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// #pragma GCC optimize("Ofast,inline,unroll-loops")
// #define _GLIBCXX_DEBUG //交题前记得注释掉不然容易T。
#include<bits/stdc++.h>
#define File(s) freopen(#s".in","r",stdin),freopen(#s".out","w",stdout)
#ifdef GTRAKIOI
#define defrog(...) fprintf(stderr,__VA_ARGS__)
#define deb(x) (std::cerr<<#x<<"@"<<__LINE__<<"="<<(x)<<'\n')
#else
#define defrog(...) 1
#define deb(x) 1
#endif
#define defrogf(...) defrog(__VA_ARGS__)
#if __cplusplus>=201703L
#define rg
#else
#define rg register
#endif
#define ri rg int
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int>pii;
typedef std::vector<int>vi;
typedef std::vector<ll>vll;
typedef std::vector<pii>vpii;
typedef std::vector<vi >vvi;
typedef long double ld;
typedef __int128 i128;
typedef __uint128_t u128;
#define Tp template<typename T>
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define all(cont) cont.begin(),cont.end()

char ibuf[1<<15],*p1,*p2;
#define getchar() (p1==p2&&(p2=(p1=ibuf)+fread(ibuf,1,1<<15,stdin),p1==p2)?EOF:*p1++)
struct FastIO{
	/*inline void ou128(u128 x){
		u128 y=1;
		while(y<=x/10)y*=10;
		do putchar(x/y|48),x%=y,y/=10;while(y);
	}*/
	inline int rint(){rg char c,f=0;while((c=getchar())<48||c>57)f|=c=='-';ri unsigned a=c&15;while((c=getchar())>=48&&c<=57)a=a*10+(c&15);return f?~a+1:a;}
	inline ll rll(){rg char c,f=0;while((c=getchar())<48||c>57)f|=c=='-';rg ull a=c&15;while((c=getchar())>=48&&c<=57)a=a*10+(c&15);return f?~a+1:a;}
//	inline operator int(){return rint();}
	inline operator ll(){return rll();}
	inline char rchar(){rg char c;while(!isgraph(c=getchar()));return c;}
	inline int rstr(char*s){rg char c;while(!isgraph(c=getchar()));int cnt=-1;do s[++cnt]=c;while(isgraph(c=getchar()));s[++cnt]=0;return cnt;}
}g90;

template<typename T=int>std::vector<T>rvec(std::size_t n,std::size_t start=0) {
	std::vector<T>res(start+n);
	for(std::size_t i=start;i<start+n;++i)res[i]=g90;
	return res;
}

std::mt19937 rng(std::chrono::high_resolution_clock::now().time_since_epoch().count());
inline int rnd(const int&a,const int&b){
	return std::uniform_int_distribution<int>(a,b)(rng);
}
inline ld rnd(const ld&a,const ld&b){
	return std::uniform_real_distribution<ld>(a,b)(rng);
}
namespace MY_STD{
	Tp inline T abs(const T&a){return a<0?-a:a;}
}

struct DSU{//unweighted
	using key_type=int;

	std::vector<key_type>fa,size;
	inline DSU(key_type n):fa(n),size(n,1){std::iota(fa.begin(),fa.end(),0);}
	inline key_type& getFa(key_type x){
		while(x^fa[x])x=fa[x]=fa[fa[x]];
		return fa[x];
	}
	inline key_type& operator[](const key_type&x){return getFa(x);}
	inline auto canMerge(const key_type&u,const key_type&v){return getFa(u)!=getFa(v);}
	inline bool merge(key_type u,key_type v){
		u=getFa(u),v=getFa(v);
		return (u)!=(v)&&(size[u]<size[v]&&(std::swap(u,v),1),fa[v]=u,size[u]+=size[v],size[v]=0,true);
	}

};

constexpr int N=-2023,M=1000000007;
inline int qpow(ll a,ll b){ri res=1;for(;b;a=a*a%M,b>>=1)if(b&1)res=res*a%M;return res;}
// #define pow qpow

signed main(){
	//std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
	int n=g90;
	vi a=rvec(n,1);
	int l=*std::max_element(all(a)),r=1.05e9,mid;
	while((mid=(l+r)/2),l<r){
		if([&]{
			int flag=0;
			for(int i=1;i<=n;++i){
				if(flag==0){
					if(mid-(n-i)<a[i])flag=1;
				}else{
					if(mid-(i-1)<a[i])return false;
				}
			}
			return true;
		}()){
			r=mid;
		}else l=mid+1;
	}
	printf("%d\n",mid);
}//main()