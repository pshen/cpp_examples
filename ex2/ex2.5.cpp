#include <iostream>
using namespace std;

class Boolean {
    public:

        bool getValue() {
            return _value;
        }

        void setValue(bool value) {
            _value=value;
        }

        void setTrue() {
            _value=true;
        }

        void setFalse() {
            _value=false;
        }

        Boolean() {
            _value=false;
        }

        ~Boolean() {}

    private:

        bool _value;
};

int main() {
    Boolean b;
    b.setTrue();
    cout << b.getValue() <<endl;
    b.setFalse();
    cout << b.getValue() <<endl;
}
