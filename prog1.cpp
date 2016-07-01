#include <iostream>
using namespace std;

void read() { cout << "read()\n"; }
void sort() { cout << "sort()\n"; }
void compact() { cout << "compact()\n"; }
void write() { cout << "write()\n"; }

int main() {
    read();
    sort();
    compact();
    write();

#ifdef DEBUG
    cout << "DEBUG!!\n";
#endif

    return 0;
}
