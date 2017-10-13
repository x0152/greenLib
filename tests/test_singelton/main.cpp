#include <iostream>
#include "singelton.h"
#include "tests.h"

using namespace std;

class Singleton_class{
    SINGELTON(Singleton_class)
};

SINGELTON_INIT(Singleton_class)
Singleton_class::Singleton_class(){}

BEGIN_TEST(Singleton_class)

    BEGIN_TEST_FUNCTION(TEST_INIT_SINGELTON){
        TEST_NOT_COMPARE(test_object, 0) 
    }END_TEST_FUNCTION(TEST_INIT_SINGELTON)

    BEGIN_TEST_FUNCTION(TEST_DUBLICATE_OBJECT){
        TEST_COMPARE(Singleton_class::Instance(), test_object) 
    }END_TEST_FUNCTION(TEST_DUBLICATE_OBJECT)

END_TEST(Singleton_class)

int main(){
    Test test;
    return test.Testing(Singleton_class::Instance());
}
