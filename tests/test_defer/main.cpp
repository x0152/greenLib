#include <iostream>
#include "defer.h"

using namespace std;

static bool isOk = false;
static bool isOk2 = false;

class A{
public:
    void func(){
        isOk = true;
        cout << "func1" << endl;
    }
};

void func2(){
    isOk2 = true;
    cout << "func2" << endl;
}

int main(){

    {
        A a;

        DEFER_CLASS(&a, &A::func, void)
        DEFER(func2);
    }

    return isOk == true && isOk2 == true ? 0 : -1;
}
