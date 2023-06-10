/sets 
//sets are containers in stl which contains unique values
//internal implementation -> red black trees //O(log n)
//three types of sets
//set or ordered set, unordered set, multiset
 
// set -> sorted order, string(lexiographic)
// inbulit implementation - Red Black tress(BST) (log n) (Self balancing tress)
// insertion -> log n + string comparison(n) => s.size() * logn
// deletion -> log n
// search -> log n
#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int> s;
int n;  //size of set
cin >> n;
for(int i = 0; i < n; ++i)  //inserting elements
{
int k;  
cin >> k;
s.insert(k);
}
//  set<int>::iterator itr; 
//   for (itr = s.begin();itr != s.end(); itr++) // Displaying elements using iterator
//   {
//     cout << *itr << " ";
//   }
// }

for(int k : s)  // displaying elements using elements
{
    cout << k << " " ;
} 
}

// unordered set
// unordered_set -> unsorted order 
// inbulit implementation - hashmap
// insertion -> O(1)
// deletion -> O(1)
// search -> O(1)

#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_set<int> s;
int n;  //size of set
cin >> n;
for(int i = 0; i < n; ++i)  //inserting elements
{
int k;  
cin >> k;
s.insert(k);
}
//  unordered_set<int>::iterator itr; 
//   for (itr = s.begin();itr != s.end(); itr++) // Displaying elements using iterator
//   {
//     cout << *itr << " ";
//   }
// }

for(int k : s)  // displaying elements using elements
{
    cout << k << " " ;
} 
}

// multi set
// multiset -> sorted order(int), string(lexiographic)
// inbulit implementation - Red Black tress(BST) (log n) (Self balancing tress)
// insertion -> log n + string comparison(n) => s.size() * logn
// deletion -> log n
// search -> log n
// can contain duplicate values

#include<bits/stdc++.h>
using namespace std;
int main()
{
multiset<int> s;
int n;  //size of set
cin >> n;
for(int i = 0; i < n; ++i)  //inserting elements
{
int k;  
cin >> k;
s.insert(k);
}
//  multiset<int>::iterator itr; 
//   for (itr = s.begin();itr != s.end(); itr++) // Displaying elements using iterator
//   {
//     cout << *itr << " ";
//   }
// }

for(int k : s)  // displaying elements using elements
{
    cout << k << " " ;
} 
}
//inserting duplicate values
//s.insert(10);
//s.insert(10);
 
//some other methods 
// s.clear() //removes all elements from set
// s.erase(50) //removes an element
// s.size() //returns size of set
