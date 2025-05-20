#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(20);
// Regular loop
    for (int i=0; i<v1.size(); i++)
   printf("%d ", v1[i]) ; 
   cout<< endl ;
    
// Range based loop
   for (int i: v1)  
   printf("%d ", i);
   cout << endl;
    
// using iterator
   for (vector <int> :: iterator it = v1.begin(); it !=v1.end(); it++) 
   { 
      cout<< *it << " ";
   }  
    
    return 0;
}
