#include<iostream>
using namespace std;

void increment(int *a){
    ++*a;
}

void swap(int *a, int *b){
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
}


int main() {
    int a = 2;
    cout<<a<<"  "<<&a<<endl;
    increment(&a);
    cout<<a<<"  "<<&a<<endl;

    int x, y;
    cin>>x>>y;
    cout<<"Before Swapping: "<<x<<"   "<<y<<endl;
    swap(&x,&y);
    cout<<"After Swapping: "<<x<<"   "<<y;
}