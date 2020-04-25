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
#define mp make_pair
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
 
ll n;
cin>>n;
 
vll v;
 
l1(0,n)
{
    
    ll a;
    cin>>a;
    v.pb(a);
    
}
 
 
 
ll s=0 , e=n-1;
 
string ss="";
 
ll mi=mii;
 
while(s<=e)
{
 
    if(s==e)
    {
        if(mi<v[s])
        ss+="L";
        break;
    }
ll st=v[s];
ll ed=v[e];
 
if(st<mi&&ed<mi)
break;

if(st==ed)
{
    string s1="L" , s2="R";
    
    int rs=s;
    
    if(st<mi)
    break;
    
    //left travel
    int chk=st;
    
    while(s+1<e)
    {
        if(v[s+1]>chk)
        {
            s1+="L";
            
             chk=v[s+1];
             s++;
             
        }
        else
        break;
        
    }
    
    // Right travel
    
    chk=ed;
    
     while(e-1>rs)
    {
       
        if(v[e-1]>chk)
        {
            // cout<<"gfd\n";
            s2+="R";
            
             chk=v[e-1];
             e--;
             
        }
        else
        break;
        
    }
    
//    cout<<s1<<" "<<s2 lc;
  
  
  if(s1 esz >= s2 esz)
  {
      
      ss+=s1;
      
  }
      else
      ss+=s2;
      
      
       cout<<ss esz lc;
    cout<<ss;
    
 ok 0;
 
      
      
}

 
if(ed<st)
{
    if(ed>mi)
    {
    //    cout<<"1";
    ss+="R";
    e--;
    mi=ed;
    }
    else
    {
      //  cout<<"2";
      if(st>mi)
      {
       ss+="L";
    s++;
    mi=st;
      }
      else
      break;
      
    }
}
else
{
     if(st>mi)
     {
       //  cout<<"3";
         ss+="L";
        s++; 
         mi=st; 
     }
     
     else
     {
        // cout<<"4";
        
    if(ed>mi)
    {
         ss+="R";
         e--;
         mi=ed;
    }
    else
    break;
    
    
     }
     
}
    
    
  
    
}
 
 
 cout<<ss esz lc;
    cout<<ss;
}
