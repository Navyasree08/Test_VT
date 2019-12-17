#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator> 
#include <map> 
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> arr;
    string str;
    int a,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        cin>>a;
        arr.insert(pair<string,int>(str,a));
    }
    for(i=0;i<n;i++)
    {
        
        cin>>str;
        auto itr = arr.find(str);
        cout << itr->first <<"="<<itr->second;
        
    }
    /*for(itr=arr.begin();itr!=arr.end();++itr)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }*/


    return 0;
}
