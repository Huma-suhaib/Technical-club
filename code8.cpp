#include<iostream>
using namespace std;
int main(){
int date=21,month=12;
cout<<"The product of date and month is: "<<++date*--month;

cout<<"\nOn dividing date from month we get: "<<date--/month++;
cout <<"\nWhen we subtract month from date we get: "<<date-month;

    return 0;
}