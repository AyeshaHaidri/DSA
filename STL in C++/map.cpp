//maps are containers in stl that store key value pairs in which each key is unique.
//three types of maps 
//ordered map or map,unordered map,multimap

//map
// map -> sorted order(int), string(lexiographic)
// inbulit implementation - Red Black tress(BST) (log n) (Self balancing tress)
// insertion -> log n + string comparison(n) => s.size() * logn
// deletion -> log n
// search -> log n
// duplicate values are not allowed

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; //size of map
    map<int,string> m;
    for(int i =0;i<n;++i) //inserting elements 
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        m.insert({k,s});
    }
    // for(auto k : m) //printing using elements 
    // {
    //     cout << k.first << " "<< k.second<<"  " ;
    // }
    //printing using iterator
    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
       cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}

// unordered map
// unordered_map -> unsorted order 
// inbulit implementation - hashmap
// insertion -> O(1)
// deletion -> O(1)
// search -> O(1)
// duplicate values are not allowed

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    unordered_map<int,string> m;  
    for(int i =0;i<n;++i) //inserting elements 
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        m.insert({k,s});
    }
    // for(auto k : m) //printing using elements 
    // {
    //     cout << k.first << " "<< k.second<<"  " ;
    // }
    //printing using iterator
    unordered_map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
       cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}

// multi map
// multimap -> sorted order(int), string(lexiographic)
// inbulit implementation - Red Black tress(BST) (log n) (Self balancing tress)
// insertion -> log n + string comparison(n) => s.size() * logn
// deletion -> log n
// search -> log n
// duplicate values are allowed

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    multimap<int,string> m;  
    for(int i =0;i<n;++i) //inserting elements 
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        m.insert({k,s});
    }
    // for(auto k : m) //printing using elements 
    // {
    //     cout << k.first << " "<< k.second<<"  " ;
    // }
    //printing using iterator
    multimap<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
       cout << (*it).first << " " << (*it).second << endl;
    }
    // m[1] = "ABC"; //inserting through keys
    // m[1] = "CDE";

    // m.insert({1,"ABC"});   //inserting using insert method
    //m.insert({1,"CDE"});  
    return 0;
}
// some other methods are
//  m.size()    // returns size of map
// m.erase(12)  // erases the key value pair having the key 12
// m.clear()    // removes all elements from map
