
#include <bits/stdc++.h>
using namespace std;

// algorithms
// containers - vectors,list
// functions
// iterators


//PAIR 
//can be used as a datatype
// pair<int,int>p={1,3};

//VECTOR
//container which is dynamic in nature
//store elements as array
//vector<int> v;
//v.push_back(3); add 3
//v.emplace_back(5);  dynamically increases its size and add 5.faster than push back; 

int main(){
    //pair
// pair<int,int>p={1,3};
// cout<<p.first<<" "<<p.second<<endl;
// pair<int,pair<int,int>>pr={1,{3,4}};
// cout<<pr.second.second<<endl;

// pair<int,int>arr[] = {{3,4},{2,1},{5,6}};
// cout<<arr[1].second;


//vector 
vector<int> v(3);
v.push_back(4);
v.emplace_back(8);
v.insert(v.begin(),33);
v.insert(v.begin()+1,2,9);
v.erase(v.begin()+1,v.begin()+3); //delete both 9
cout<<v.size()<<endl;
cout<<v.empty()<<endl;
// for(vector<int>::iterator ite=v.begin();ite!=v.end();ite++)cout<<*(ite)<<" ";
for(auto it:v)cout<<it<<" ";




return 0;
}