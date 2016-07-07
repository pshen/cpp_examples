#include <iostream>
#include <vector>
using namespace std;

template <class elemType>
elemType min1 (const vector<elemType> &vec) {
    int size=vec.size();
    elemType min=vec[0];
    for (int i=1; i<size; ++i) {
        if (min > vec[i])
            min=vec[i];
    }
    return min;
}

template <class elemType>
elemType min2 (const vector<elemType> &vec) {
    elemType min;
    vector<elemType>::const_iterator iter=vec.begin();
    if (iter<vec.end())
        min=*iter;
    else
        throw "Empty vector -interator";

    for (++iter; iter<vec.end(); ++iter)
        if(*iter < min)
            min=*iter;
    return min;
}

int main() {
    int array[] = {9,4,2,3,412,34,5,2};
    vector<int> a(array, array+8);

    cout<<"should be 2:"<<min1(a)<<endl;
    cout<<"should be 2:"<<min2(a)<<endl;
    return 0;
}
