#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int row=4,col=4;
void setZeroes(int matrix[row][col])
{
        int i,j;
        bool first_row=false,first_col=false;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==0 && matrix[i][j]==0)
                    first_row=true;
                if(j==0 && matrix[i][j]==0)
                    first_col=true;
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(i=1;i<row;i++)
        {
            for(j=1;j<col;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(first_row)
        {
            for(i=0;i<col;i++)
            {
                matrix[0][i]=0;
            }
        }
        if(first_col)
        {
            for(j=0;j<row;j++)
            {
                matrix[j][0]=0;
            }
        }

}
int main()
{
    int row,col;
    cout<<"Enter the element in array\n";
    int mat[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>mat[i][j];
        }

    }
    setZeroes(mat);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

