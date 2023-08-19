//PRN: 22070123102
//Exp-8

#include<iostream>
using namespace std;

int main() {
    int *ptr, b=10;
    ptr=&b;
    cout<<*ptr<<"    "<<b<<endl<<ptr<<"    "<<&b<<endl;
    ptr++;
    cout<<"After increament: "<<ptr<<endl;

    float *n, a=8.923;
    n=&a;
    cout<<endl<<*n<<"    "<<a<<endl<<n<<"    "<<&a<<endl;
    n++;
    cout<<"After increament: "<<n<<endl;

    char *ch, c(10);
    c='abcd';
    ch=&c;
    cout<<endl<<(void*)ch<<"    "<<endl;
    ch++;
    cout<<"After increament: "<<(void*)ch<<endl;
}
