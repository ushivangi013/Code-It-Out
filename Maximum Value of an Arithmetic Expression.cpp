
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



ll fn( ll a , ll b , char c)
{

    if(c=='*')
    ok a*b;
    else if(c=='+')
        ok a+b;
    else
        ok a-b;

}




kuspia
{
io;


string s;
cin>>s;

vll v;
vector <char> vc;

l1(0 , s esz)
{

    if(i%2==0)
    {
        ll tm=s[i]-48;

        v.pb(tm);


    }
    else
    {
        char tmm=s[i];
        vc.pb(tmm);


    }
}

// 5-8+7*4-8+9

ll l=  ( s esz);

if(l==1)
{

    cout<<s;
    ok 0;

}

if(l==3)
{
    char ch=s[1];
    ll a=s[0]-48;
    ll b=s[2]-48;


cout<< fn( a,b,ch) ;
 ok 0;

}

ll d= (l+1)/2;
ll m[d][d] , M[d][d];






l1(0 , d)
{

m[i][i]=v[i];
M[i][i]=v[i];

}

ll id=0;

l1(0, d-1)
{

ll ans=fn(v[i] , v[i+1] , vc[id]);
id++;
m[i][i+1]=ans;
M[i][i+1]=ans;

}






ll td=d-2;



ll add=2;

while(td!=-1)
{

ll kd=td;

l1(0, kd )
{

ll ch1=i;
ll ch2=i+add;

//cout<<ch1<<" "<<ch2 lc;


// splitting and storing optimal result now !!

ll top=ch2-ch1; // total operators to operate


vll vtm;  // temopary vector to sotre all sort of results




  

    ll totspl=ch2-ch1;

    ll rst=ch1 ;

     ll mno=-1;
     
    while(totspl--)
    {
        mno++;
        
          char tr=vc[ch1+mno];
          
        ll d1=ch1 , d2=rst , d3=rst+1 , d4=ch2;

/*
          cout<< d1 << " " << d2 << " " << d3 << " " << d4 << " "<< tr  lc;

       cout<< m[d1][d2] <<" " <<  m[d3][d4] lc;
           cout<< M[d1][d2] <<" " <<  M[d3][d4] lc;
            cout<< M[d1][d2] <<" " <<  m[d3][d4] lc;
             cout<< m[d1][d2] <<" " <<  M[d3][d4] lc;
             
*/
          vtm.pb(fn( m[d1][d2] , m[d3][d4] , tr ));
          vtm.pb(fn( M[d1][d2] ,  M[d3][d4] , tr ));
          vtm.pb(fn( M[d1][d2] , m[d3][d4] , tr ));
          vtm.pb(fn( m[d1][d2] , M[d3][d4] , tr ));
  
  /*        
         cout<<(fn( m[d1][d2] , m[d3][d4] , tr )) lc;
          cout<<(fn( M[d1][d2] ,  M[d3][d4] , tr )) lc ;
         cout<<(fn( M[d1][d2] , m[d3][d4] , tr )) lc;
          cout<<(fn( m[d1][d2] , M[d3][d4] , tr )) lc;

*/
        rst++;

    }





sort(all(vtm));


/*
l3( 0, vtm esz)
{
    cout<<vtm[k]<<" ";
}
*/



m[ch1][ch2]=vtm[0];
M[ch1][ch2]=vtm[vtm esz-1];


vtm clr;

//cout lc;

}

//cout lc;


add++;
td--;
}



cout<<M[0][d-1];

}
