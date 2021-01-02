#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int count = 0;
    vector<int> v; 
    int size_vector = v.size();
    cout <<"Size of the vector \n"<<size_vector<<"\n";
    int capacity = v.capacity();
    cout<<"Capacity of the vector "<<capacity<<"\n";
    bool vector_check = v.empty();
    cout<<"Vector check empty or not \n"<<vector_check<<"\n";
    for(int i = 0; i < 10 ; i++ )
    v.insert(v.begin() + i , i);
    size_vector = v.size();
    cout<<"Size of the new vector \n"<<size_vector<<"\n";
    capacity = v.capacity();
    cout<<"Capacity of the vector after insertion \n"<<capacity<<"\n";
    v.shrink_to_fit();
    capacity = v.capacity();
    cout<<"Capacity of the vector after resize \n"<<capacity<<"\n";
    vector_check = v.empty();
    cout<<"Vector check empty or not after insert operation\n"<<vector_check<<"\n";
    cout<<"The value of the vector is \n";
    for(auto i : v)
    cout<< i << " ";
    auto res = find(v.begin(),v.end(),12);
    if(res != v.end())
    {
        int index = res  - v.begin();
        cout<<"\nfind "<<index<<" (counting from zero)\n";
    }
    else
    cout<<"\nThe given element doesn't exist in the vector\n";
    cout<<"\n Reverse output of the vector \n";
    for(auto i = v.rbegin(); i != v.rend(); i++)
    cout<< *i << " ";
    for(int i = 0; i <= 10; i++)
    v.push_back(i + 10);
    cout<<"The value of the vector after push_back operation \n";
    for(auto i : v)
    cout<< i << " ";
    capacity = v.capacity();
    cout<<"\nCapacity of the vector after push_back operation \n"<<capacity<<"\n";
    v.shrink_to_fit();
    capacity = v.capacity();
    cout<<"\nCapacity of the vector after second resize operation \n"<<capacity<<"\n";
    v.erase(v.begin());
    cout<<"The value of the vector after erase operation \n";
    for(auto i : v)
    cout<< i << " ";
    v.emplace(v.begin(), 72);
    cout<<"The value of the vector after emplace operation \n";
    for(auto i : v)
    cout<< i << " ";
    v.clear();
    cout<<"Value of vector after clear operation and assigning it with 20 spaces field with 10 "<<" ";
    v.assign(20,10);
    for(auto i : v)
    cout<<i<<" ";
    vector<string> vect(5,"XYZ");
    for(auto i : vect)
    cout<<"\n"<<i<<" ";
    vector<vector<int> > Matrix(3, vector<int>(2 , -1));
    int i;
    cout<<"\nValue of Matrix.size() "<<Matrix.size()<<"\nValue of Matrix[i].size() "<<Matrix[0].size();
    for(int i = 0; i < Matrix.size(); i++)
        {
            for(int j = 0; j < Matrix[i].size(); j++ )
            {
                cout<<"\n"<<"Matrix"<<"["<<i<<"]"<<"["<<j<<"]"<<Matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}