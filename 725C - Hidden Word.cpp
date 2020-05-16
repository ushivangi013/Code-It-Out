/*
                                         cODED by-
 
 __                         __
|  | ____ __  ____________ |__|____
|  |/ /  |  \/  ___/\____ \|  \__  \
|    <|  |  /\___ \ |  |_> >  |/ __ \_
|__|_ \____//____  >|   __/|__(____  /
     \/          \/ |__|           \/
 
 
        THNX TO  ...
 ____  ____    __    ___  ____   __    __
( ___)(  _ \  /__\  / __)(_  _) /__\  (  )
 )__)  )   / /(__)\( (__   )(  /(__)\  )(__
(__)  (_)\_)(__)(__)\___) (__)(__)(__)(____)
 
                                                 %
                                               *@@@
                                              @@@@@@(
                                            ,@@@@@@@@@
                                           @@@@@@@@@@@@*
                                          @@@@@@@@@@@@@@@
                                        &@@@@@@@@@@@@@@@@@,
                                          .@@@@@@@@@@@@@
                                            #@@@@@@@@@,
                                             @@@@@@@@(
                                             %@@@@@@@.
                                             @@@@@@@@@
                                            @@@@@@@@@@@
                                         .@@@@@@@@@@@@@@@
                             @@@%/,,(&@@@@@@@@@@@@@@@@@@@@@@@&(,*(&@@@
                           %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,
                          @@@@@@@@@@@@@@@@@@@   @@   @@@@@@@@@@@@@@@@@@@&
                        #@@@@@@@@@@@@@@@@@/@@   @@   @@/@@@@@@@@@@@@@@@@@@
                       @@@@@@@@@@@@@@@@@ ,,     ,,    ,,   @@@@@@@@@@@@@@@@%
                     *@@@@@@@@@@@@@@@@@   @#  .@(*@.  #@.  &@@@@@@@@@@@@@@@@@
                    #@@ &@.  @@   @@ @@   @#  (@*,@(  #@.  @@ @@   @@  ,@(,@& (
                  .@@@@ &@.  @@   @@ @@   @#  *@**@*  #@.  @@ @@   @@  ,@(,@@@@@
                 &@@@@@@@/   @@   *@@@.   @#   %@@@   #@.   @@@,   @@   #@@@@@@@@*
                @@@@@@@@@   #@@&  *@@,   @@@*  @@@   ,@@@   @@#   &@@%  %@@@@@@@@@@
              &@@@@@@@@@@@,,@/.@/  /@,  @@ @@   @@   @&.@@   @(  (@**@, &@@@@@@@@@@@.
             @@@@@@@@@@@@@@@@/.@#  /@,  @@ @@   @@   @&.@@   @(  #@,*@*@@@@@@@@@@@@@@&
           #@@@@@@@@@@@@@@@@@#,@*  /@,  &@ @@   @@   @@ @&   @(  ,@/(@@@@@@@@@@@@@@@@@@.
             .@@@@@@@@@@@@@. **    ..     /.    .,    ./     ,     **  ,@@@@@@@@@@@@@
               %@@@@@@@@@@  ,@@   @@#@(  *@#   @@@@  .%@.  (@/@&  *@@   @@@@@@@@@@@,
               .&@@@@@@@@@.  @@   @@ @@   @#  /@*,@(  #@.  @@ @@   @@  ,@(@@@@@@@@(
                (@@@@@@@@@.  @@   @@ @@   @#  /@*,@(  #@.  @@ @@   @@  ,@(%@@@@@@@.
                @@@@@@@@@@   @@   @@#@(   @#   @@@@   #@.  /@#@@   @@   @@@@@@@@@@&
               @@@@@@@@@@@   ./    ,,     (,   .,*    ,(    ,,.    //   .@@@@@@@@@@&
            .@@@@@@@@@@@@@@@@#,@,  /@,  &@ @@   @@   @@ @&   @(  *@//@.@@@@@@@@@@@@@@&
@@@(,..,#@@@@@@@@@@@@@@@@@@@@@@@%,.(@#@@@@ &@   @@   @& @@@@@@#..%@@@@@@@@@@@@@@@@@@@@@@@@(,..,(@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.@@   @@   @& @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@.       *@@@@@@@@@@@@@@@@@@@,   @@   ,@@@@@@@@@@@@@@@@@@@@.       /@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@#               @@@@@@@@@@@@@@@@@  %@@@  (@@@@@@@@@@@@@@@@/               @@@@@@@@@@@@@@
@@@@@@@@@@@                   @@@@@@@@@@@@@@@@@@*,@*@@@@@@@@@@@@@@@@@                   @@@@@@@@@@@@
@@@@@@@@@@                     @@@@@@@@@@@@@@@@@*,@@@@@@@@@@@@@@@@@@                    .@@@@@@@@@@@
 
*/
 
 
 
#include <bits/stdc++.h>
#include <algorithm>
#include <utility>
#include<vector>
#include<stack>
#include <set>
//
#define ll long long int
#define ld  double
#define l1(x,y) for(ll i=x;i<y;i++)
#define l2(x,y) for(ll j=x;j<y;j++)
#define l3(x,y) for(ll k=x;k<y;k++)
#define l4(x,y,uu) for(ll o=x;o<y;o+=uu)
#define lminus(x,y) for(ll zz=x;zz>y;zz--)
#define mkp make_pair
#define fi first
#define si second
#define pb push_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define lc <<"\n"
#define esz .size()
#define clr .clear()
#define vii vector<int>
#define vll vector<ll>
#define all(x) x.begin(),x.end()
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
//
#define pi 3.141592653589793
#define MOD 1000000007
#define maa LLONG_MAX
#define mii LLONG_MIN
//
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define lll ll t;cin>>t; while(t--)
#define kuspia int main()
#define ok return
using namespace std;
 
 
 
void aent (  ll *a , ll n )
{
l1(0,n)cin>>a[i];
}
 
string arrtostr ( ll *a , ll n )
{
ostringstream os;l1(0,n)os<<a[i];string str(os.str());return str;
}
 
 
///////////////
 
 
#define R 2
#define C 13 
 
 
void rotatematrix(int m, int n, char mat[R][C]) 
{ 
	int row = 0, col = 0; 
	char prev, curr; 
 
	while (row < m && col < n) 
	{ 
 
		if (row + 1 == m || col + 1 == n) 
			break; 
 
	
		prev = mat[row + 1][col]; 
 
	
		for (int i = col; i < n; i++) 
		{ 
			curr = mat[row][i]; 
			mat[row][i] = prev; 
			prev = curr; 
		} 
		row++; 
 
	
		for (int i = row; i < m; i++) 
		{ 
			curr = mat[i][n-1]; 
			mat[i][n-1] = prev; 
			prev = curr; 
		} 
		n--; 
 
	
		if (row < m) 
		{ 
			for (int i = n-1; i >= col; i--) 
			{ 
				curr = mat[m-1][i]; 
				mat[m-1][i] = prev; 
				prev = curr; 
			} 
		} 
		m--; 
 
 
		if (col < n) 
		{ 
			for (int i = m-1; i >= row; i--) 
			{ 
				curr = mat[i][col]; 
				mat[i][col] = prev; 
				prev = curr; 
			} 
		} 
		col++; 
	} 
 
 
/*	for (int i=0; i<R; i++) 
	{ 
		for (int j=0; j<C; j++) 
		cout << mat[i][j] << " "; 
		cout << endl; 
	}
	
	*/
} 
 
 
 
 
 
bool  fn ( char mt[R][C] ,   char st   ,    char ed   ,     char  tm   )
{
    
    int rw , cl ;
    
    
    l1(0,2)
    l2(0,13)
    {
        if(mt[i][j]==tm)
        {
            rw=i;
            cl=j;
            break;
        }
        
    }
    
  
//  cout<<rw<<" "<<cl lc;
  
    
    
    // check adjacent letters and store it 
    
    vector <char> v;
    
    if(rw==0&&cl==0)
    {
        v.pb(mt[0][1]);
         v.pb(mt[1][0]);
          v.pb(mt[1][1]);
        
    }
    else if(rw==1&&cl==0 )
    {
         v.pb(mt[0][1]);
         v.pb(mt[1][0]);
          v.pb(mt[0][0]);
        
    }
    else if(rw==0&&cl==12 )
    {
        
        v.pb(mt[0][11]);
         v.pb(mt[1][11]);
          v.pb(mt[1][12]);
        
    }
    else if( rw==1&&cl==12  )
    {
        
        
        v.pb(mt[0][11]);
         v.pb(mt[1][11]);
          v.pb(mt[0][12]);
        
    }
    else
    {
        
        if(rw==0)
        {
           
            
             v.pb(mt[rw][cl+1]);
             v.pb(mt[rw][cl-1]);
             v.pb(mt[rw+1][cl+1]);
             v.pb(mt[rw+1][cl-1]);
             v.pb(mt[rw+1][cl]);
             
            
        }
        else
        {
             v.pb(mt[rw][cl+1]);
             v.pb(mt[rw][cl-1]);
             v.pb(mt[rw-1][cl+1]);
             v.pb(mt[rw-1][cl-1]);
             v.pb(mt[rw-1][cl]);
            
        }
        
    }    
    
    ////////////////////////////////////////////////////////////////////////
    
    
    if(ed=='*')
    {
        int fl=0;
        
        l1(0, v esz)
        {
            if(st==v[i])
            fl++;
            
            
        }
        
        if(fl==1)
        ok 0;
        
        
    }
    else if(st=='*')
    {
         int fl=0;
        
        l1(0, v esz)
        {
            if(ed==v[i])
            fl++;
            
            
        }
        
        if(fl==1)
        ok 0;
        
        
    }
    else
    {
        
        
         int fl=0;
        
        
        l1(0, v esz)
        {
            if(st==v[i]||ed==v[i])
            fl++;
            
          //  cout<<v[i]<<" ";
            
            
        }
        
        if(fl==2)
        {
            
        ok 0;
       
        }
        
    }
    
    
    ok 1;
    
    
}
 
 
 
kuspia
{
io;
 
string s;
cin>>s;
 

 
 
/////// s lengthh 27
 
 
char tm , st ,ed ;
 
int pos;
 
 
map <char , int > mp;
 
 int fff=0;
 
l1(0,26)
{
    
    mp[s[i]]++;
    
    if(mp[s[i]]==2)
    {
      pos=i;
        fff=1;
        
        
    }
    
    if(s[i]==s[i+1])
    {
        
        cout<<"Impossible";
        ok 0;
    
    }
 
 
        
}
 
 
 if(!fff)
 pos=26;
 
 
 
char mt[R][C] ;
 
 
ll ii=0 , jj=0;
 
l1(0,27)
{
    if(i==pos)
    continue;
    
 
    
    
mt[ii][jj]=s[i];
jj++;
 
if(jj==13)
{
ii++;
jj=0;
}
 
    
}
 
 
vector <char> vv;
 
l1(0,13)
{
vv.pb(mt[1][i]);
}
reverse(all(vv));
 
l1(0,vv esz)
mt[1][i]=vv[i];
    
 


if(s[0]==s[26])
{
     
    l1(0,13)
    cout<<mt[0][i];
    cout lc;
    
    l1(0,13)
    cout<<mt[1][i];
        ok 0;
} 
 
 //cout<<pos;
 
 
 
if(pos==0)
{
    ed=s[1];
    st='*';
}
else if(pos==26)
{
    st=s[25];
    ed='*';
    
}
else
{
    st=s[pos-1];
    ed=s[pos+1];
    
}
 
 
 
tm=s[pos];
 
 
//cout<<tm <<" "<<ed <<" "<<st ;
 

    while(     fn ( mt , st , ed , tm   )    )
{
    
    rotatematrix(R, C, mt); 
    
}    
    
    
    
    l1(0,13)
    cout<<mt[0][i];
    cout lc;
    
    l1(0,13)
    cout<<mt[1][i];
    
 
  
  
  
    
}
 
