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
# define ll   long long 
#define     p(a)  printf("%d\n",a) 
#define     l(i,a)  for(int i=0;i<a;i++)
#define     re(j,a,b)  for(ll int j=a;j<=b;j++)  

#define modu 1000000007
/*ll modular_pow(ll base, ll exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % MOD;
        exponent = exponent >> 1;
        base = (base * base) % MOD;
    }
    return result;
}
 */
 
 
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


//ll max(ll x, ll y){
//	if(x>=y) return x;
//	else return y;
//}

void swap(char *x, char *y){
	char t;
	t= *x;
	*x= *y;
	*y=t;
	
}
/*string s;
void pr(int st, int e){
	if(st==e){
	cout<<s<<endl;
	}
	else re(i,st,e){
	swap(&s[i],&s[st]);	
	pr(st+1,e);
	swap(&s[i],&s[st]);
		
	}
	
}*/

//int a[300001];


/*int calmax(int x, int y, int g, int h ){
	
	for(int u=1000;u>=1;u--){
		if(mm[u].size()>0){
			int k= mm[u].size();
			for(int j=0;j<k;j++){
				pair< int , int >pp=mm[u][j];
				if(pp.first>=x&&pp.first<=g && pp.second>=y && pp.second<=h) return u;
				
			}
			
			
		}
		
	}
	
	
	
}*/
// use sparse matrix logic!!!





multiset<int> s;
vector<pair<int, int> > res;
int main(){
//	freopen("inp.txt","r", stdin);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string s1;
        int in;
        cin >> s1;
        if (s1 != "removeMin") cin >> in;
        if (s1 == "insert"){
            res.push_back(make_pair(0, in));
            s.insert(in);
        }
        else if (s1 == "getMin"){
            while (!s.empty() && *(s.begin()) < in){
                res.push_back(make_pair(1, -1));
                s.erase(s.begin());
            }
            if (s.empty() || *(s.begin()) > in){
                res.push_back(make_pair(0, in));
                s.insert(in);
            }
            res.push_back(make_pair(2, in));
        }
        else{
            if (s.empty()){
                res.push_back(make_pair(0, 1));
                s.insert(1);
            }
            res.push_back(make_pair(1, in));
            s.erase(s.begin());
        }
        int a;
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++){
        if (res[i].first == 1) cout << "removeMin" << endl;
        else if (res[i].first == 0) cout << "insert" << " " << res[i].second << endl;
        else cout << "getMin" << " " << res[i].second << endl;
    }
}
