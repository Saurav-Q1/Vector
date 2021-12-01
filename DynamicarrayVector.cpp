#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    vector<int> vec; // declearing vector;
    vec.push_back(1);
    vec.push_back(2); // pushing value using push_back fuction;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);

    cout << "The size of the vector before pop = " << vec.size()<<endl; // show the whole vector size;

    vec.pop_back(); // pop-back function alaways remove last values;
    //vec.pop_back();
    cout << "The size of the vector after pop = " << vec.size()<<endl;

    //traversing a vector
    int len = vec.size();
    for (int i = 0; i < len;i++){
        //cout << " Index " << i << " Value " << vec[i]<<endl;
        cout << vec[i] << " ";
    }
    cout << endl;
    //inserting a value in vector (selected position)
    vec.insert(vec.begin() + 4, 7); // putting the value 7 in position 4;
    for (int i = 0; i < len+1;i++){
       // cout << " Index " << i << " Value " << vec[i]<<endl;
       cout << vec[i] << " ";
    }
    cout << endl;
    // if we want ti see 6 value, we have to do len+1;

    // deleting value from vector(selected position);
    vec.erase(vec.begin() + 4);
    for (int i = 0; i < len;i++){
       // cout << " Index " << i << " Value " << vec[i]<<endl;
       cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Easy way to traversing a vector" << endl;
    for(auto i: vec){
        cout << i << " ";
    }

    return 0;
  
}