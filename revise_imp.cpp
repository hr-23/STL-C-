// om namah shivaya 
// om namo narayanaya 
// om shri matre namaha 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // functions involved here are 
    // recall erase and clear functions and also the insert function 
    // erase function TC O(logn ) 
    // *min_element  TC O(n)
    // *max_element  TC O(n)
    // count(it.begin(),it.end(),val)  o(n) time complexity
    // acccumulate TC O(n) 
    // upper bound and lower bound both of them are O(log n) TC
   // upper bound means strictly greater 
    // UB of 30 in 10 20 30 30 40 50 is 40 at index 4
    // UB of 45 in the same vector is 50 at index 5
    // UB of 60 in the above vector is  not there so it points to the last of the vector at index 6
     // lower bound of the function is the vallue greater than or equal to 
     // UB -strictly greater  LB -greater than or equal to   
// lower bound of the element  30 in the array with values 10 20 30 40 50 is  30 at index 2

    // find
    // binary_search function O(log n) time oomplexity  
    // binary_search ,upper bound and lower bound , the array / vector should always be sorted 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   ios::sync_with_stdio(0); 
   cin.tie(0);
   // standard vector iterator 
   // vector<int>::iterator it

   vector<vector<int>>v{{1,2,3},{4,5,6}};
   for(int i=0;i<v.size();i++)
   {
    for(int j=0;j<v[i].size();j++)
        cout<<v[i][j]<<" ";
    cout<<"\n";
   }
   int m=*max_element(v[0].begin(),v[0].end());
   int n=*min_element(v[0].begin(),v[0].end());
   vector<int>v1{1,2,2,2,2,3};
   int c=count(v1.begin(),v1.end(),2);
   cout<<c<<"\n";
   cout<<m<<" "<<n<<"\n";
   int s=accumulate(v1.begin(),v1.end(),1);
   cout<<s<<"\n";
   sort(v1.begin(),v1.end());
   if(binary_search(v1.begin(),v1.end(),2))cout<<"yes\n";
   else cout<<"NO\n";
   vector<int>l{10,20,30,30,40,50};
   auto ub=upper_bound(l.begin(),l.end(),30);
   cout<<ub-l.begin()<<"\n";
   auto lb=lower_bound(l.begin(),l.end(),10);
   cout<<*lb<<"\n";
   cout<<l.at(5)<<"\n";


}
