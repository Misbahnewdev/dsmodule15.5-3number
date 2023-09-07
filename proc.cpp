#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }

     int low = 0;
     int high = row*col-1;
     int target;
     cout<<"en t"<<endl;
     cin>>target;
     while (low<=high)
     {
        int mid = low+(high-low)/2;
        int r = mid/col;
        int c = mid%col;

        if(a[r][c] == target)
        {
        cout<<"found "<<a[r][c]<<endl<<"location :"<<r<<c;
        return 0;
        }
         else if(a[r][c]>target)
         {
        high = mid-1;
         }
        else 
        {
        low = mid+1;
        }
     }
      cout<<"Not found"<<endl;
      return 0;  
}