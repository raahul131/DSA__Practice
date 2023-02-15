#include<bits/stdc++.h>
using namespace std;

// Pairs
void explainPair(){

    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second; // 1 3

    pair<int, pair<int, int>> p = {1,{3,5}};
    // cout << p.first << " " << p.second.second << " " << p.second.first; // 1 5 3

    pair<int, int> arr[] = { {1,3}, {2,4}, {3,6}};
    cout << arr[1].first;
}


//Vectors
void ExplainVectors(){

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v(5, 100); // v = {100,100,100,100,100}

    vector<int> v(5); // v = {0,0,0,0,0}

    vector<int> v1(5,20); // v1 = {20,20,20,20,20}
    vector<int>v2(v1); // this will copy all v1 elememnts in the v2

    cout << v1.back() << " "; // 20 from the back side or end side of the array

    vector<int> vect;
    vect.emplace_back(2);
    vect.emplace_back(3);
    vect.emplace_back(4);
    vect.emplace_back(5);
    vect.emplace_back(6); //{ 2,3,4,5,6}
    
    // to print all vector array ans it is just name it can be anything like array, rahul, pri....etc
    for(vector<int>::iterator it = v.begin(); it != vect.end(); it++) {
        cout << *(it) << " "; 
    } // 2 3 4 5 6

    for(auto it : vect){
        cout << it << " ";
    } // 2 3 4 5 6

    for(auto array : vect) {
        cout << array << " ";
    } // 2 3 4 5 6

    // deletion in the vector array
    // {10,20,30,40}
    vect.erase(vect.begin()+1); // 10 30 40


    // Insert function
    vector<int> v3(2,100); // {100, 100}
    v.insert(v3.begin(), 300); // {300,100,100}
    v.insert(v3.begin() + 1, 2, 10); // {300 10 10 100 100}

    // to know the size of the vector
    cout << v3.size();

    v3.clear(); // erase the entire vector

}



void elxplainList(){

    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); //{5,2,4}
    ls.emplace_front(7); // {7,5,2,4}

    // and rest all are same as the vector

}

void explainDeque(){
    deque<int> dq;

}

void explainStack(){

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}

    cout << st.top(); // print 4

    st.pop(); // 3

    cout << st.top();

    cout << st.empty();

}


void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3); // {1,2,3}
    q.push(4); // {1,2,3,4}
    q.push(5); // {1,2,3,4,5}
    q.emplace(6); // {1,2,3,4,5,6}

    cout << q.back(); // print 6

    cout << q.front(); // prints 1

    q.pop();

    cout << q.front(); // prints 2
    
}




int main(){


    pair<int, int> arr[] = { {1,3}, {2,4}, {3,6}};
    cout << arr[1].second; // 4

    return 0;
}