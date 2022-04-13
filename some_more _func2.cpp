// om namah shivaya 
// om namo narayanaya 
// om shri matre namaha 
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    // built in pop count and next permutation  and bitset 

    // priority quueue as the name suggests it sorts the elments based on the priority ,so the highest value stays on the top 
    // if we want the min element in the top then use the comparator 
    // use __builtin_popcountll() for the long long values  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   ios::sync_with_stdio(0); 
   cin.tie(0);
   // finding first occurance 
  //  auto it=find(a,a_n,1);
    priority_queue<int>pq;
    pq.emplace(2);
    pq.emplace(3);
    pq.emplace(-1);
    cout<<pq.top()<<"\n";
    int n=7;
   cout<<__builtin_popcount(n)<<"\n";  // this is only for the integes but if we have long long
   long long i=164786578687;
  cout<<__builtin_popcountll(i)<<"\n";
    // built in pop count coutns the number of bits in the number whereas bitset count is different 
     int a=__builtin_popcount(2);
  cout<<a<<"\n";
  // recall the differene between biiset count function and builtin popcount 
    // map functions use unordered map when there si no need with the sorting 
    // make sure to use ll fo r long long 
  // next permutation 
     string s="123";
     do
     {
        cout<<s<<"\n";
     }while(next_permutation(s.begin(),s.end()));

     // bitset 
     bitset<10>bt; // it accepts either only zero or 1 
     //cout<<bt[0]<<"\n";   cout<<bt[1]<<"\n";   cout<<bt[2]<<"\n";   cout<<bt[3]<<"\n"; 
     //bitset functions 
     bt=1111111111;
     cout<<bt.all()<<" ";// returns true if and only if all the bits are set to true and false if not 
     bt=1111111101;
     cout<<bt.any()<<"\n"; // returns true if any one is set or not 
     bt.flip(); // flips the bits 
     cout<<bt<<"\n";
     cout<<bt.none()<<"\n";// returns true if no bits are set 
     cout<<bt.count()<<"\n"; // counts the number of set bits are there 
     bt.reset(); // turns all the bits to zero 

     cout<<bt<<"\n";



}
