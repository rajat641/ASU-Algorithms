/*
RAJAT SINGH
VIT VELLORE
*/

#include<bits/stdc++.h>
using namespace std;
#define ll   long long 
//#define max 706000
#define gc getchar_unlocked
#define pc putchar_unlocked
//inline void get(int *p){register  int n=0,sign=1,a=gc();while(a<'0'||a>'9'){ if(a=='-'){sign=-1;a=gc();break;} a=gc();}while(a>='0' && a<='9'){n=(n<<1)+(n<<3)+a-'0';a=gc();}*p=n*sign;}
  
 
//inline void put(int n){char d[10];int i=0;if(n<0){pc('-');n=-n;}do{d[i++]=n%10+'0';n=n/10;}while(n);while(i)pc(d[--i]);pc('\n');}
#define     sc(a)  scanf("%d",&a) 
#define     p(a)  printf("%d\n",a) 
#define     l(i,a)  for(int i=0;i<a;i++)
#define     re(j,a,b)  for(int j=a;j<=b;j++)  
# define ll   long long 
#define modu 1000000007
ll  modular_pow(ll int  base, ll int  exponent)
{
    if(exponent==0)
    return 1;
    else if(exponent%2==0){
        ll int res=modular_pow(base,exponent/2)%modu;
        return (res*res )%modu;
        
        
    }
    else{
        return (modular_pow(base,exponent-1) * base)%modu;
        
    }
}
 
 
 
 int gcd(int a,int b){
    if(b==0)
    return a;//gcd
    else return gcd(b,a%b);
 }
 
bool chek(int x){
    return (x&&!(x&(x-1)));// power of 2
}
int onebits(int n){
    return __builtin_popcount(n);//count number od set bits in a number
 
}


ll max(ll x, ll y){
	if(x>=y) return x;
	else return y;
}
string s;
void swap(char *x, char *y){
	char t;
	t= *x;
	*x= *y;
	*y=t;
	
}
int c=0;
void pr(int st, int e){
	if(st==e){
	cout<<s<<endl;
	}
	else re(i,st,e){
	swap(&s[i],&s[st]);	
	pr(st+1,e);
	swap(&s[i],&s[st]);
		
	}
	
}

ll a[200];
int main()
{
//freopen("inp.txt","r",stdin);

ll n, a1, b,c,d;
cin>>n>>a1>>b>>c>>d;
ll ans=n;
//ll a[122];
a[0]=a1+b;
 a[1]= a1+c;
a[2]=b+d;
 a[3]=c+d;
sort(a,a+4);
int j=0;
map< int , int >mm;

ll diff= a[3]-a[0];
if(diff>=n) puts("0");
else{
	cout<< n*(a[0]+n-a[3])<<endl;
	
}

  return 0;
}
