#include <iostream>
using namespace std;

int ival=1024, ival2=2048;
int *pi1=&ival, *pi2=&ival2, **pi3=0;

int main() {
    // (a) wrong! pointer to int
    //ival=*pi3;
    
    // (b) wrong! pointer to int
    //*pi2=*pi3;

    // (c) wrong! pointer to int
    //ival=pi2;

    // (d) wrong! int to pointer
    //pi2=*pi1;
    
    // (e) OK! pointer to pointer
    //pi1=*pi3;

    // (f) OK! int to int
    //ival=*pi1;

    // (g) wrong! int to pointer
    //pi1=ival;

    // (h) OK! pointer of pointer to pointer of pointer
    //pi3=&pi2;

}
