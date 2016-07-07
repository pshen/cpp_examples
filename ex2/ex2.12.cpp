#include <iostream>
using namespace std;

class Shapes {
    public:
        Shapes();
        virtual ~Shapes();
        virtual void draw();
        virtual void rotate(float);
    protected:
        //...
};

class Rectangle::public Shapes {
    public:
        Rectangle(float width, float height);
        Rectangle(const Rectangle &);
        virtual ~Rectangle();
        Rectangle &operator=(const Rectangle &);
        virtual void draw();
        virtual void rotate(float);
    protected:
        //
};

int main() {
}
