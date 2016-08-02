#include <iostream>
using namespace std;

int foobar(int *pi) {
    *pi=1024;
    return *pi;
}

int main() {
    int *pi2=0;
    int ival=foobar(pi2);
    cout<<ival;
    return 0;
}
