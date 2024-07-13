#include "ExtendedCharacter.h"
#include <iostream>
using namespace std;

int main() {
    ExtendedCharacter a(65);
    ExtendedCharacter b('A');
    b = a;
    cout<<"Assign: "<<b.get()<<endl;
    ExtendedCharacter c;
    c = a + b;
    cout<<"Add: "<<c.get()<<endl;
    cout<<"Equal: "<<(a==b)<<endl;
    cout<<"Not Equal:"<<(a!=b)<<endl;
    cout<<"Less than or equal to: "<<(a<=b)<<endl;
    cout<<"Greater than or equal to: "<<(a>=b)<<endl;
    cout<<"Less than: "<<(a < b)<<endl;
    cout<<"Greater than: "<<(a > b)<<endl;
    a.set(66);
    cout<<"A:"<<a.get()<<endl;
    cout<<"Increment by 1 (A++): "<<(a++).get()<<endl;
    cout<<"Increment by 1 (++A): "<<(++a).get()<<endl;
    cout<<"Decrement by 1 (A--): "<<(a--).get()<<endl;
    cout<<"Decrement by 1 (--A): "<<(--a).get()<<endl;
}
