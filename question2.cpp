#include<iostream>
using namespace std;
int main(){  

    int marks;
    cin>>marks;

// These are the marks of Arham Kalam.
if(marks>90){
    cout<<"Excellent!";
}
else if(marks>80){
    cout<<"Good!";
}
else if (marks>70){
    cout<<"Fair!";

}
else if (marks>60){
    cout<<"Meets expectations";
}
 if (marks<=60){
    cout<<"Below par";
 }
    return 0;
}