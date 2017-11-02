#include <iostream>
#include "string_formater.h"
#include "string_checker.h"
#include "tests.h"

using namespace std;

class A{};

BEGIN_TEST(A)
    BEGIN_TEST_FUNCTION(TEST_JOIN){

        list<string> strs = {"word 1", "word 2", "word 3"};
        TEST_COMPARE(StringFormater::Join(strs, "|-|"), "word 1|-|word 2|-|word 3");

        strs = {"word 1", "word 2", ""};
        TEST_COMPARE(StringFormater::Join(strs, "|-|"), "word 1|-|word 2|-|");

        strs = {"word 1"};
        TEST_COMPARE(StringFormater::Join(strs, "|-|"), "word 1");

        strs = {};
        TEST_COMPARE(StringFormater::Join(strs, "|-|"), "word 1");

    }END_TEST_FUNCTION(TEST_JOIN)

    BEGIN_TEST_FUNCTION(TEST_SPLIT){

        auto l_compare = [](string str){
            list<string> strs = StringFormater::Split(str, " ");
            string str2 = StringFormater::Join(strs, " ");
            TEST_COMPARE(str, str2);
        }

        l_compare("one two three");
        l_compare("one|-|two|-|three");
        l_compare("one");
        l_compare("one|-|");
        l_compare("|-|one");
        l_compare("");

    }END_TEST_FUNCTION(TEST_SPLIT)

    BEGIN_TEST_FUNCTION(TEST_UPPER){
        string str("word");
        StringFormater::Upper(str);
        TEST_COMPARE(str, "WORD");
    }END_TEST_FUNCTION(TEST_UPPER)

    BEGIN_TEST_FUNCTION(TEST_LOWER){
        string str("WORD");
        StringFormater::Lower(str);
        TEST_COMPARE(str, "word");
    }END_TEST_FUNCTION(TEST_LOWER)

END_TEST(A)

int main(){

    Test test;
    A* a = new A();
    return test.Testing(a);
    return 0;
}
