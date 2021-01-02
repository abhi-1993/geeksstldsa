 sort(vect.begin(), vect.end(), sortcol);
    cout<<"\n 2D Vector after comparator sort on 2nd column function \n";
    for(int i = 0; i < vect.size(); i++)
     {
         for(int j = 0; j < vect[0].size(); j++ )
            cout<<"Vect"<<"["<<i<<"]"<<"["<<j<<"]"<< vect[i][j] << "\n";
         cout<<endl;   
     }   