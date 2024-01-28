//==================================================================================================================================
//SQUENTIAL
//==================================================================================================================================
/*
Q1)Input two number & display sum

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"The sum of two numbers is: "<<num1+num2;
}
*/
//------------------------------------------------------------------------------------------------------------------------
/*
Q2) Input values in rupees and convert it into paisa.

#include<iostream>
using namespace std;
int main(){
    int rupee;
    cout<<"Enter the amount in rupee: ";
    cin>>rupee;
    cout<<"The amount in paisa : "<<rupee*100;
}
*/
//------------------------------------------------------------------------------------------------------------------------
/*
Q3)Input principal, rate & time and calculate simple interest.

#include<iostream>
using namespace std;
int main(){
    int princ,rate,tme,si;
    cout<<"Enter Principle, rate, time: "<<endl;
    cin>>princ>>rate>>tme;
    si=(princ*rate*tme)/100;
    cout<<"Simple Interest: "<<si;
}
*/
//---------------------------------------------------------------------------------------------------------------------------
/*
Q4)Input temperature in Fahrenheit and convert it into degree celsius.

#include<iostream>
using namespace std;
int main(){
    int far,cel;
    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>far;
    cel = (far - 32) * 5/9;
    cout<<"The temperature in celsius: "<<cel;
}
*/
//---------------------------------------------------------------------------------------------------------------------------
/*
Q5)Input numerator and denominator and calculate quotient and remainder.

#include<iostream>
using namespace std;
int main(){
    int num,den;
    cout<<"Enter numerator,denominator: "<<endl;
    cin>>num>>den;
    cout<<"Quotient: "<<num/den<<endl;
    cout<<"Remainder: "<<num%den;
}
*/
//-----------------------------------------------------------------------------------------------------------------------------
/*
Q6)Input number of days and calculate no. of month and days in it. (assume 30 days in a month)

#include<iostream>
using namespace std;
int main(){
    int days;
    cout<<"Enter the number of days: ";
    cin>>days;
    cout<<"The number of months are: "<<days/30<<endl;
    cout<<"The number of days left are: "<<days%30<<endl;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
/*
Q7)Input radius of circle and find the area of circle.

#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    cout<<"The area of circle: "<<3.14*radius*radius;
}
*/
//=============================================================================================================================
//Conditional
//=============================================================================================================================
/*
Q8)Input two no and display greatest.

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<" is greater";
    }
    else{
        cout<<num2<<" is greater";
    }
}
*/
//-----------------------------------------------------------------------------------------------------------------------------
/*
Q9) Input any number and check it is -ve and +ve.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num>=0){
    cout<<"The number is +ve";
    }
    else{
    cout<<"The number is -ve";
    }
}
*/
//-----------------------------------------------------------------------------------------------------------------------------
/*
Q10) Input any no and check it is divisible by 47 or not.

#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
if(num%47==0){
    cout<<"The number is divisible by 47";
}
else{
    cout<<"THe number is not divisible by 47";
}
}

*/
//-------------------------------------------------------------------------------------------------------------------------------
/*
O11)Input any no and check it is even or odd.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
/*
Q12)Input any no and check it is between 11 and 23.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    if(num>=11&&num<=23){
        cout<<"The number is between 11 and 23";
    }
    else{
        cout<<"The number is not between 11 and 23";
    }
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
/*
Q13)Input any no and check it is exactly divisible by 5 & 18.

#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
if(num%5==0&&num%18==0){
    cout<<num<<" is exactly divisible by 5 and 18";
}
else{
    cout<<num<<" is not exactly divisible by 5 and 18";
}
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
/*
Q14)Find greater from three no without using multicondition in one if statement.

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter 3 numbers: "<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is the greatest number";
        }
        else{
            cout<<num3<<" is the greatest number";
        }
    }
    else{
        if(num2>num3){
            cout<<num2<<" is the greatest number";
        }
        else{
            cout<<num3<<" is the greatest number";
        }
    }
}
*/
//----------------------------------------------------------------------------------------------------------------------------------
/*
Q15)Input 4 no and check and display greatest.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4;
    cout<<"Enter 4 numbers: "<<endl;
    cin>>num1>>num2>>num3>>num4;
    if(num1>num2){
        if(num1>num3){
            if(num1>num4){
                cout<<num1<<" is the greatest number";
            }
            else{
                cout<<num4<<" is the greatest number";
            }
        }
        else{
            if(num3>num4){
                cout<<num3<<" is the greatest number";
            }
            else{
                cout<<num4<<" is the greatest number";
            }
        }
    }
    else{
        if(num2>num3){
            if(num2>num4){
                cout<<num2<<" is the greatest number";
            }
            else{
                cout<<num4<<" is the greatest number";
            }
        }
        else{
            if(num3>num4){
                cout<<num3<<" is the greatest number";
            }
            else{
                cout<<num4<<" is the greatest number";
            }
        }
    }
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
/*
Q16)Check divisibility from 2,3 and 7.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num%2==0&&num%3==0&&num%7==0){
        cout<<"The number is divisible by 2,3 and 7";
    }
    else{
        cout<<"The number is not divisible by 2,3 and 7";
    }
}
*/
//======================================================================================================================================
//ITERATION
//======================================================================================================================================
/*
Q17)Display first 10 no.

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        cout<<i<<endl;
    }
}
*/
//---------------------------------------------------------------------------------------------------------------------------------------
/*
Q18)Display first 10 no. in reverse order.

#include<iostream>
using namespace std;
int main(){
    for(int i=10;i>=0;i--){
        {
            cout<<i<<endl;
        }
    }
}
*/
//----------------------------------------------------------------------------------------------------------------------------------------
/*
Q19)Display first 10 even no. in reverse order.

#include<iostream>
using namespace std;
int main(){
    int num=20;
    while(num!=0){
        if(num%2==0){
            cout<<num<<endl;

        }
        num--;
    }
}
*/
//---------------------------------------------------------------------------------------------------------------------------------------
/*
Q20)Display first 10 odd no. in reverse order.

#include<iostream>
using namespace std;
int main(){
    int num=20;
    while(num!=0){
        if(num%2!=0){
            cout<<num<<endl;
        }
        num--;
    }
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------------
/*
Q21)Display sum of first 10 number.

#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum=sum+i;
    }
    cout<<"The Sum of first 10 numbers are: "<<sum;
}
*/
//----------------------------------------------------------------------------------------------------------------------------------------
/*
Q22)Product of first 5 no.

#include<iostream>
using namespace std;
int main(){
    int prod=1;
    for(int i=1;i<=5;i++){
        prod=prod*i;
    }
    cout<<"The product of first 5 numbers are: "<<prod;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------
/*
Q23)Input any no. & find it's factorial.

#include<iostream>
using namespace std;
int main(){
    int num,fact=1;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=1){
        fact=fact*num;
        num--;
    }
    cout<<"The factorial is " <<fact;

}
*/
//-------------------------------------------------------------------------------------------------------------------------------------------
/*
Q24)Input any no. & display it's table.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
        for(int j=1;j<=10;j++){
              cout<<num<<"*"<<j<<"="<<num*j<<endl;
        }
}
*/
