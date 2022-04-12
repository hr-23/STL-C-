// om namah shivaya
// om namo narayanaya
// om shri matre namaha
// 12 april 2022
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
  // STL documentation 
  // vectors ,vector of vectors vector of pairs vector of string s ,etc 
 // pairs 
 // map unordered , unordered multi map 
// set (unordred ,multi and multi set )
    // vector 
 vector<int>v; // declaration 
  v.emplace_back(10); // emplace_back is faster then push back 
  v.push_back(20);
  //v.pop_back();
  //v.pop_back();

  sort(v.begin(),v.end()); // O(nlog n)
  // sort(v.begin(),v.begin()+2) can also sort in ranges and reverse also  
  reverse(v.begin(),v.begin()+2); // TC O(n)
  // reverse can also occur in the range 
  // find tells us the first occurance of the value we wanted 
  cout<<v.back()<<"\n"; // returns the back element of the vector   TC  O(1)
  // vector inseert 
  // syntax: vector_name.insert(pos iterator,val);
   //          vector_name.inseet(pos iterator,size,val) inserts the val in size no of times 
   //        vector_name.insert(pos iterator ,it1,it2); pos means at which position it should be insereted and it1 specifies the range from it should be inserted and it2 the ending point at which it should be inserted  

 v.insert(v.begin()+1,-1);
for(auto it:v)
    cout<<it<<" ";
cout<<"\n";
v.insert(v.begin(),v.begin()+1,v.end());
for(auto it:v)
    cout<<it<<" ";
cout<<"\n";
v.insert(v.begin(),2,0);
for(auto it:v)
    cout<<it<<" ";
    cout<<"\n";
// v.clear() this  deletes all the elements and the time complexoty is O(n);
  // v.erase(position) and v.erase(position1,position2) 
  // erase time comp1exity is o(n+m) because for deleting n elements and moving m elements 
// v.size()  time complexity is O(1) (standard operation)

v.erase(v.begin());
for(auto it:v)
    cout<<it<<" ";
    cout<<"\n";


  bool x=binary_search(v.begin(),v.end(),10); // this function works only when an array/vector is sorted only 
  // this returns  true if the element is present  else  returns false 
  // time complexity O(logn)
  // upper_bound and lower bound 
   // upper bound --> strictly greater 
  // lower nound  --> greater than or equal to 
 // standard  iterator  vector<int>:: iterator it;
  // for lower bound 
  vector<int>:: iterator it=upper_bound(v.begin(),v.end(),3);
  // iterators are the following in the stl 
  // begin() ,end() , rbegin() , rend() 
  // begin() points to the first element 
  // end() points to the after of the last element 
  // rbegin() its just reverse of the begin it means that it points to the last person 
  // rend() points to the before first element 


  // reverse timecomplexity is o(n) as we konw 

     vector<int>v1(5,20);   // inotializes the array of size 5 with 20 
     for(auto it:v1)cout<<it<<" ";
        //there is also a function to find the min and max element in the vector or array 
    vector<int>w{1,2,3,4,5};cout<<"\n";
int m1=*min_element(w.begin(),w.begin()+5);
cout<<m1<<"\n";
int m2=*max_element(w.begin(),w.end());cout<<m2<<"\n
";
     int sum=accumulate(w.begin(),w.end(),0);
     cout<<sum<<"\n";   
}
