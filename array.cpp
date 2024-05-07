#include<bits/stdc++.h>
using namespace std;

int main()
{



    /*
//reverse array
int sz, A[sz];
cout<<"Enter number of element : ";
cin>>sz;


for(int i = 0 ; i<sz ; i++)
{
cin>> A[i];
}

int B[sz];
cout<<"Reverse of array : ";
for(int i =0 ; sz>0 ; i++)
{
B[i]=A[sz-1];
sz--;
cout<< B[i]<<" ";-
}
*/



/*
//find greatest
int sz, A[sz];
cout<<"Enter number of element : ";
cin>>sz;

cout<<"Enter values of array :  "<<endl;
for(int i = 0 ; i<sz ; i++)
{
cin>> A[i];
}
int max=A[0];
for(int i =1; sz>0; i++)
{
    if(A[i]>max)
    {
      max=A[i];
    }
    sz--;
}
cout<<"Maximum is : "<<max;
*/



/*
//arranging in increasing order
int sz, A[sz];
cout<<"Enter number of element : ";
cin>>sz;

cout<<"Enter values of array :  "<<endl;
for(int i = 0 ; i<sz ; i++)
{
cin>> A[i];
}
//can i solve this without nested loop------------------------------------------

*/












//---------------------------------------------------------------ALERT
//2D array and display it
/*
int r,c;
cout<<"Enter the number of rows you wanna enter : ";
cin>> r;
cout<<"Enter the number of columns you wanna enter : ";
cin>>c;
int A[r][c];
for(int i = 0; i<r; i++)
{
    for(int j = 0 ; j<c; j++)
    {
        cout<<"Enter "<<i<<" and "<<j<<" : ";
        cin>>A[i][j];
    }
}
for(int i = 0; i<r; i++)
{
    for(int j = 0 ; j<c; j++)
    {
        cout<<A[i][j]<<"  ";
    }
    cout<<"\n";
}

*/










/*
//2D array and find sum of its backward diagonal

int r, sum=0;
cout<<"Enter the number of rows and columns you wanna enter : ";
cin>> r;

int A[r][r];
int x=1, y=r;
for(int i = 0; i<r; i++)
{
    for(int j = 0 ; j<r; j++)
    {
        cout<<"Enter "<<i<<" and "<<j<<" : ";
        cin>>A[i][j];
           /* if(i==x && j==y)
            {
                sum = sum + A[i][j];
                x++;
                y-=1;
            }*/
            // array index started with 0
          /*  if(i+j==2)
            {
            sum = sum+A[i][j];
            }
    }
}
cout<<"Sum of backward diagonal : "<<sum;
*/




/*
//Input a 2D array and find product of 2 matrix.
int r;
cout<<"Enter the number of rows and columns you wanna enter : ";
cin>> r;

int A[r][r];
cout<<"Enter first 2D array";
for(int i = 1; i<=r; i++)
{
    for(int j = 1 ; j<=r; j++)
    {
        cout<<"Enter "<<i<<" and "<<j<<" : ";
        cin>>A[i][j];
    }
}
int B[r][r];
cout<<"Enter second 2D array";
for(int i = 1; i<=r; i++)
{
    for(int j = 1 ; j<=r; j++)
    {
        cout<<"Enter "<<i<<" and "<<j<<" : ";
        cin>>B[i][j];
    }
}




int Prod[r][r];
for(coloumn = 1 ; column <= r ; column++ )
{

    for(int i=coloumn; i<=r; i++)
    {
        int sum = 0;
        for(int j = 1 ; j<=r; j++)
        {
            sum = sum + (A[i][j] * B[j][i]);
        }
        C[i][j] = sum;
    }


}
*/
/*
//coping 1d array into another
int sz;
cout<<"Enter number of element : ";
cin>>sz;
int A[sz],B[sz];

for(int i = 0 ; i<sz ; i++)
{
cin>> A[i];
}

for(int i=0; i<sz ; i++)
{
B[i]=A[i];
cout<<B[i]<<endl;
}
*/






























}
