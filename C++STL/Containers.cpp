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

// list

void explainList(){
    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}

    ls.push_front(5);//{5,2,4}
    ls.emplace_front(6);//{6,5,2,4}
    //Rest of the functions are same as vector.
    // begin, end, rbegin, rend, clear, insert,size, swap.
}

//Deque

void explainDeque(){

    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}

    dq.pop_back();//{3,4,1}
    dq.pop_front();//{4,1}

    dq.back();
    dq.front();
    //Rest of the functions are same as vector.
    // begin, end, rbegin, rend, clear, insert,size, swap.
}

//Stack // LIFO // all operations happen in O(1)-->Constant time.

void explainStack(){
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,21}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}

    cout<<st.top(); // prints 5 "st[2] is invalid here. Indexing is not allowed in stack "
    st.pop();//{3,3,2,1}
    cout<< st.top();//3
    cout<< st.size();//4

    cout<< st.empty();// False
    stack<int>st1, st2;
    st1.swap(st2);
}

//Queue// FIFO

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back()+=5;
    cout<<q.back();//prints 9
    //q is {1,2,9}

    cout<< q.front();// prints 1
    q.pop();//{2,9}

    cout<<q.front();// prints 2
    // size, swap, empty are same as stack.
}

//Priority Queue(PQ)// largest element stays at top. // inside it a tree datastructure is maintained. Data isn't maintained in linear way.// can be called as Max Heap.

void explainPQ(){
    priority_queue<int> pq;
    pq.push(5);//{5} // O(log n)
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<< pq.top();//prints 10// O(1)

    pq.pop();//{8,5,2}// O(log n)
    cout<< pq.top();//prints 8
    //size, swap, empty function same as others.



    //Minimum Heap //pq with minimum element at the top.
    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout<<pq.top();//prints 2

}

//Set// everything is sorted and unique. Although entire it, the entire tree is maintained.// O(log n)

void explainSet(){
set<int> st;
st.insert(1);//{1}
st.emplace(2);//{1,2}
st.insert(2);//{1,2}
st.insert(4);//{1,2,4}
st.insert(3);//{1,2,3,4}

//Functionality of insert in vector can be used also, that only increases efficiency.

//begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above.

//{1,2,3,4,5,}
auto it= st.find(3);

//{1,2,3,4,5}
auto it= st.find(6);//st.end(). The iterator will point the after last element if the searched one isn't present.

//{1,4,5}
st.erase(5);// erases 5// O(log n)


int cnt= st.count(1);// 1 or 0
auto it= st.find(3);
st.erase(it);//O(1)

//{1,2,3,4,5}
auto it1= st.find(2);
auto it2= st.find(4);
st.erase(it1, it2);// {1,4,5}// [start, end)

// lower_bound() and upper_bound() function works in the same way as it does in the vector.
auto it= st.lower_bound(2);
auto it= st.upper_bound(3);
}

//MultiSet// ordered but not unique

void explainMultiSet(){
    //Everything is same as set
    //only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);// all 1's erased

    int cnt= ms.count(1);// 3 1's
    //only a single 1 is erased.
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(3));
    //rest all functions are same as set.
}

//Unordered Set // Unique but not ordered// O(1). Only in worst case(once in a blue moon)-->O(n).

void explainUSet(){
    unordered_set<int> st;
    // lower_bound() and upper_bound() function doesn't work, rest all functions are same as above. It doesn't store in any particular order. It has a better complecity than set in most cases, except some when collision happens.

}

//Map // key-value pair and keys(any datastructure) are unique.but values can be duplicate. Map stores unique keys in sorted order.
// O(log n)
void explainMap(){
    map<int,int> mpp;// key-value
    mpp[1]=2;// {1,2}//key-value
    mpp.emplace(3,1);//{3,1}//{key, value}
    mpp.emplace(2,4);//{2,4}//{key, value}
// since keys are stored in sorted order. therefore, [{1,2},{2,4},{3,1}]
//for-each loop
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl; //it.first is 1 and it.second is 2. Therefore, {1,2}....
    }
    cout<<mpp[1];//gives 2
    cout<<mpp[5];// 0/null
    auto it= mpp.find(3); //will point {3,1}
    cout<<(*it).second;//prints 1
    auto it= mpp.find(5);//not present. therefore, will point after the map,mpp.end()

    //This is the syntax for lower bound and upper bound.
    auto it= mpp.lower_bound(2);
    auto it= mpp.upper_bound(3);

    map<int, pair<int,int>> mpp2;


    map<pair<int,int>, int> mpp3;
    mpp3[{2,3}]= 10;// {{2,3},10}

    //All other functions like erase, swap, size, empty are same.
}

//MultiMap// sorted but duplicate keys
void explainMultiMap(){
    //everything same as map, only it can store multiple keys.
    //map[key] can't be used here.
}

//UnorderedMap// unique keys but not sorted// O(1)
void explainUnorderedMap(){
    // same as set and unordered_set difference
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second){return true;}
    else if(p1.second==p2.second){if(p1.first>p2.second){return true;}}
    return false;
}
