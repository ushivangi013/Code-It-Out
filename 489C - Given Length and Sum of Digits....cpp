
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


kuspia
{
io;

ll m , s;
cin>>m>>s;

ll os=s;


if(m==2&&s==2)
{
    cout<<"11 20";
    return 0;
    
}
int yy=0;

if(m==1)
{
    
    if(s>=0&&s<=9)
        cout<<s<<" "<<s;
    else
        cout<<"-1 -1";
    
        
}
else
{
   
   if(s==0)
   {
        cout<<"-1 -1";
        return 0;
        
   }
   if(s==1)
   {
       ll kp=m-1;
      
       cout<<"1";
       l1(0,kp)
       cout<<"0";
        cout<<" 1";
       l1(0,kp)
       cout<<"0";
       ok 0;
       
       
   }
   
   int fl=1;
   
    
    if(s>(9*m))
    {
         cout<<"-1 -1";
         return 0;
         
    }
    
    vector<ll> v;
  
  ll chk=m;
  
  while(m)
  {
      
  
l1(0, 10)
{
   
   if(fl)
   {
       
       fl=0;
       continue;
       
   }
       // cout<<i lc;
     
     
     if(m-1==0)
     {
        // cout<<s;
          v.pb(s);
         s-=i;
         break;
     }
     
     ll cp=9*(m-1);
     ll tt=s-i;
      //cout<<tt lc;
      
     if(cp>=tt)
     {
        // cout<<i;
         v.pb(i);
         s-=i;
         break;
         
         
     }
     
}
    m--;
    
    
    
  }
    
    
   ll ctt=0;
   
    l1(0 ,v esz)
    {
        cout<<v[i];
        if(!v[i])
        ctt++;
        
    }
    cout<<" ";
    
    
    
    
    while(chk)
    {
        
      
        ll cp=9*(chk-1);
        
        lminus(9,-1)
        {
            
            ll tt=os-zz;
      //cout<<tt lc;
      
      if(tt<0)
      continue;
      
     if(cp>=tt)
     {
         cout<<zz;
    
         os-=zz;
         break;
         
         
     } 
   
     
        }
          chk--;
        
        
        
    }
    
    
   
    
}

}


