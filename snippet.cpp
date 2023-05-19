#include<bits/stdc++.h>
using namespace std;
#define int  long long int 
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define pf push_front
#define popb pop_back
#define popf pop_front
#define all(a) a.begin(), a.end()
#define mp make_pair
#define mod 1000000007
#define fast_io             ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define N 101
int ARR[3];
int II[3][3],T[3][3];
void mul(int A[3][3],int B[3][3], int dim) {int res[dim+1][dim+1];for(int i =1;i<=dim;i++) {for(int j =1;j<=dim;j++) {res[i][j] = 0;for(int k =1;k<=dim;k++) {int x = (A[i][k] * B[k][j])%1000000007;res[i][j] = (res[i][j] + x)%1000000007;   } }}for(int i = 1;i<=dim;i++) {for(int j = 1;j<=dim;j++) {A[i][j] = res[i][j];}}}
    
int getfib(int n) {if(n<=2) {return ARR[n];}II[1][1] = II[2][2] = 1;II[1][2] = II[2][1] = 0;T[1][1] = 0;T[1][2] = T[2][2] = T[2][1] = 1;n = n-1;while(n) { if(n%2)mul(II,T,2),n--;else mul(T,T,2),n/=2;}int x = (ARR[1]*II[1][1]+ARR[2]*II[2][1])%1000000007;return x;} 

int AR[N][N], I[N][N];
void mul(int A[][N],int B[][N],int dim) { int res[dim+1][dim+1]; for(int i = 1;i<=dim;i++) {  for(int j = 1;j<=dim;j++){res[i][j] = 0;for(int k = 1;k<=dim;k++) {res[i][j] += A[i][k]*B[k][j];}  }   } for(int i = 1;i<=dim;i++) {for(int j = 1;j<=dim;j++) {A[i][j] = res[i][j];}  }}

void power(int A[][N],int dim,int n) {for(int i = 1;i<=dim;i++) {for(int j = 1;j<=dim;j++){if(i==j) {  I[i][j] = 1; } else {I[i][j] = 0;} }}while(n) { if(n%2){mul(I,A,dim);n--; } else {mul(A,A,dim);n/=2;}}for(int i = 1;i<=dim;i++) {for(int j = 1;j<=dim;j++){A[i][j] = I[i][j]; }}}

int bin(int a,int n,int p) { int res = 1; while(n) { if(n%2) {  res = (res*a)%p; n--;} else {  a=(a*a)%p; n/=2;}  } return res;}

void primefactorizationoptimized(int n,vector<pair<int,int>>&v){  for(int i=2; i*i<=n; i++){ if(n%i==0){ int cnt=0;   while (n%i==0) {cnt++;n/=i;} v.push_back({i,cnt});}}if(n>1) {v.push_back({n,1});}}

bool is_prime(int n) { if(n==1) { return false;}for(int i = 2;i*i<=n;i++) {if(n%i==0) { return false;}}  return true;}

bool ar[90000001];
vector<int>pn;
void sieve() {int maxN = 90000000;ar[0] = ar[1] = true;for(int i = 2;i*i < maxN;i++) {if(!ar[i]) {for(int j = i*i;j<=maxN;j+=i) {ar[j] = true;}}}for(int i = 2;i<= maxN;i++) {if(!ar[i]) {pn.push_back(i);}} }

int fac[1000001];
void pfac() {int maxN = 1000000;for(int i =1;i<=maxN;i++) {fac[i] = -1;}for(int i = 2;i<=maxN;i++) {if(fac[i] == -1) {     for(int j = i;j<=maxN;j+=i) {if(fac[j] == -1) {fac[j] = i;}}}}}

const char nl = '\n';

int max(int a,int b){if(a>b)return a;return b;}
int addm(int a,int b) {return ((a%mod)+(b%mod))%mod;}
int mulm(int a,int b) {return ((a%mod)*(b%mod))%mod;}
int dmod(int a,int b,int m) {int res = ((a%m)*(bin(b,m-2,m))%m)%m;return res;}
int smod(int a,int b,int m) {int res = (m+a%m-b%m)%m;return res;}
int min(int a,int b){ if(a<b)return a;return b;}
int gcd(int a, int b) { return b?gcd(b,a%b):a;}  
int lcm(int a, int b) { return a/gcd(a,b)*b;} 

int F[1000001];int C(int n, int k) {if(k>n) {return 0;}int res = F[n]%mod; res = (res*bin(F[k],mod-2,mod))%mod;res = (res*bin(F[n-k],mod-2,mod))%mod; return res%mod;}

int phi[1000001];
void init(int maxN) { for(int i = 1; i <= maxN; i++) phi[i] = i;   for(int i = 2;i<= maxN;i++) { if(phi[i]==i) {for(int j = i;j<=maxN;j+=i) {phi[j]/=i;phi[j]*=(i-1);} }}}

#define read(v,n) for(int i = 0;i<n;i++){ int p; cin>>p; v.push_back(p);}
int computeXOR(int n)
{if (n % 4 == 0)  return n; if (n % 4 == 1) return 1; if (n % 4 == 2)   return n + 1; return 0;}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int uid(int l, int r) {return uniform_int_distribution<int>(l, r)(rng);}
 main()  {
fast_io;
int t;
cin>>t;
while(t--) {


}
return 0;
}

