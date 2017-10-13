#ifndef TESTS_H
#define TESTS_H
#include <functional>
#include <string>
#include <list>

using std::list;
using std::cerr;
using std::string;

#define TEST_CLASS friend Test;

#endif /* TESTS_H */

#define TEST_OK return true
#define TEST_FAILD \
    cerr << _name_function;\
    return false

class Test;

#define TEST(CLASS) \
private: \
    typedef CLASS TEST_OBJECT; \
    list<function<bool(TEST_OBJECT* test_object)>> _test_functions; \
    string _name_function; \
public: \
    int Testing(TEST_OBJECT* object){ \
        for(auto f : _test_functions){ \
          if (f(object) == false){return -1;}  \
        } \
    } 


#define TEST_FUNCTION(NAME_FUNCTION) [&](TEST_OBJECT* test_object)

#define BEGIN_TEST_FUNCTION(NAME_FUNCTION) \
     _name_function = string(__FILE__) + ":" + std::to_string(__LINE__) + " -> " + string(#NAME_FUNCTION) + " failed!"; \
    _test_functions.push_back(function<bool(TEST_OBJECT*)>(TEST_FUNCTION(NAME_FUNCTION){

#define END_TEST_FUNCTION(TEST_FUNCTION) TEST_OK;}));


#define BEGIN_TEST(TEST_OBJECT) \
class Test{ \
    TEST(TEST_OBJECT) \
    Test(){

#define END_TEST(TEST_OBJECT) }};\


//////////////////////////////////TESTING FUNCTIONS/////////////////////////////////////////////

#define TEST_NOT_COMPARE_ELSE(VAR1, VAR2, LYMDA) \
    if (VAR1 == VAR2){\
        function<void()> l = LYMDA;\
        l();\
        TEST_FAILD; \
    }

#define TEST_NOT_COMPARE(VALUE1, VALUE2) \
    TEST_NOT_COMPARE_ELSE(VALUE1, VALUE2, [&](){ \
        cerr << "ERROR: VALUE1(" << VALUE1 << ") == VALUE2(" << VALUE2 << ")" << endl;\
    })\

#define TEST_COMPARE_ELSE(VALUE1, VALUE2, LYMDA) \
    if (VALUE1 != VALUE2){\
        function<void()> l = LYMDA;\
        l();\
        TEST_FAILD; \
    }

#define TEST_COMPARE(VALUE1, VALUE2) \
    TEST_COMPARE_ELSE(VALUE1, VALUE2, [&](){ \
        cerr << "ERROR: VALUE1(" << VALUE1 << ") != VALUE2(" << VALUE2 << ")" << endl;\
    })

