#include <iostream>
using namespace std;

namespace Exercise {
    template <class elemType>
        class Array {};

    template <class Etype>
        void print (Arrary< Etype>);

    class String {};
    template <class listType>
        class List {};

   }

int main() {
    const int size=1024;
    Exercise::Array<Exercise::String> as (size);
    Exercise::List<int> il(size);

    Exercise::Array<Exercise::String> *pas=new Exercise::Array<Exercise::String>(as);
    Exercise::List <int> *pil= new Exercise::List<int>(il);

    Exercise::print (*pas);
}
