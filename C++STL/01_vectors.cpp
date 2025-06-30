#include<bits/stdc++.h>
using namespace std;
// auto keyword is for auto assignment of datatype.
// Vector are kinda Dynamic Array. Since the array is constant in size.
void explainVector(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);// faster thn push_back

    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> vi(5,100);

    vector<int> vi(5);// size is still dynamic
    vector<int> v1(5,20);
    vector<int> v2(v1);// v2 is copy of v1

    //Accessing elements of the vector
    //v[0]
    //v[1]--> same as arrays.

    //Or we can use iterators:
    vector<int>::iterator it=v.begin();// iterator "it" points directly to the memory, not to the element. maybe a pointer.
    it++; // goes to second memory location of vector or you can say 1st index.
    cout<<*(it)<<" ";//printing the value at second memory location of at the 1st index.
    it= it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();// will point to the memory location right after the last element. so to print the last element. do "it--" then do "*(it)"
   // vector<int>::iterator it=v.rend();// pointing to the memory address even before the first element.
    //vector<int>::iterator it=v.rbegin();// pointing to the last element. Here is catch that it++ will move towards 0th index.

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";// last element

    //Printing
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    //for-each
    for(auto it: v){// auto here is int. since iterate on the datatype here.
        cout<<it<<" ";
    }

    //Deletion in a vector

    //{10,20,12,23}
    v.erase(v.begin()+1);// {10,12,23}
    //v.erase(it+1)//{10,12,23}

    //{10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4); //{10,20,35}// [start, end)



    //Insert function for vector
    vector<int> v(2,100); //{100, 100}
    v.insert(v.begin(),300);//{300, 100, 100}
    v.insert(v.begin()+1, 2, 10);//{300,10,10,100,100}

    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());//{50,50,300,10,10,100,100}

    //{10,20}
    cout<< v.size();//2

    //{10,20}
    v.pop_back();//{10}

    //v1-->{10,20}
    //v2-->{30,40}
    v1.swap(v2); // swapped both

    v.clear();// earses the entire vector//{}

    cout<<v.empty();// check if it's empty or not.

}