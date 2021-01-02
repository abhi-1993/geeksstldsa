#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool sortcol(const vector<int>& v1, const vector<int>& v2)
    {
        cout<<"\nV1[1] "<<v1[1] <<" "<<"V2[1]"<<v2[1];
        return v1[1] < v2 [1];
    }
int main()
{
    vector<vector<int> > vect { {3,4,2},
                                {6,9,5},
                                {8,1,7}};

    //loops to print 2d array 
    for(int i = 0; i < vect.size(); i++)
     {
         for(int j = 0; j < vect[i].size(); j++ )
            cout<<"Vect"<<"["<<i<<"]"<<"["<<j<<"]"<< vect[i][j] << "\n";
         cout<<endl;   
     }              
    //sort function to sort the 2d vector
    // for(int i = 0; i < 3 ; i++)
    // sort(vect[i].rbegin(),vect[i].rend());
    // cout<<"\n 2D Vector after sort function \n";
    // for(int i = 0; i < vect.size(); i++)
    //  {
    //      for(int j = 0; j < vect[i].size(); j++ )
    //         cout<<"Vect"<<"["<<i<<"]"<<"["<<j<<"]"<< vect[i][j] << "\n";
    //      cout<<endl;   
    //  }     
     //sort function by implementing own comparator function to sort on particular column
    sort(vect.begin(), vect.end(), sortcol);
    cout<<"\n 2D Vector after comparator sort on 2nd column function \n";
    for(int i = 0; i < vect.size(); i++)
     {
         for(int j = 0; j < vect[0].size(); j++ )
            cout<<"Vect"<<"["<<i<<"]"<<"["<<j<<"]"<< vect[i][j] << "\n";
         cout<<endl;   
     }   
     bool vector_empty_check = vect.empty();
     cout<<"Result of vector empty or not\n"<<vector_empty_check;
     cout<<"Checking the capacity of the vector\n"<<vect.capacity()<<" ";
     vect.clear();
     vector_empty_check = vect.empty();
     cout<<"Checking whether vector is empty or not after clear operation\n"<<vector_empty_check;
     return 0;                 
}