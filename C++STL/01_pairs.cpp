//C++ STL:
//1. Algorithms
//2. Containers-
//3. Functions
//4. Iterators-
#include<bits/stdc++.h>
using namespace std;

void print(){
    cout<<"Akshat"<<endl;
}

int sum(int a, int b){
    return a+b;
}

int main(){
    print();
    int s= sum(1,2);
    cout<<"Sum is: "<<s<<endl;
    return 0;
}

//Pairs

void explainPair(){
    pair<int, int> p= {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int>> q= {1, {3,4}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    
    pair<int, int> arr[]= {{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
}
