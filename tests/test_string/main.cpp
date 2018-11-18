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
        TEST_COMPARE(StringFormater::Join(strs, "|-|"), "");

    }END_TEST_FUNCTION(TEST_JOIN)



    BEGIN_TEST_FUNCTION(TEST_SPLIT){
        list<string> strs;
        string str2;
        #define SPLIT_COMPARE(STR) \
            strs = StringFormater::Split(STR, " "); \
            str2 = StringFormater::Join(strs, " "); \
            TEST_COMPARE(STR, str2); 

        SPLIT_COMPARE("one two three");
        SPLIT_COMPARE("one|-|two|-|three");
        SPLIT_COMPARE("one");
        SPLIT_COMPARE("one|-|");
        SPLIT_COMPARE("|-|one");
        SPLIT_COMPARE("");

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

    BEGIN_TEST_FUNCTION(TEST_REPLACE_ALL){
        list<string> strs;

        string str("hellow egor!");
        string str2 = StringFormater::ReplaceAll(str, "egor", "alex");
        TEST_COMPARE(str2, "hellow alex!");

        str = "hellow egor! How are you? I like programming too";
        str2 = StringFormater::ReplaceAll(str, " too", "");
        TEST_COMPARE(str2, "hellow egor! How are you? I like programming");

        str = "hellow egor! How are you? I like programming too";
        str2 = StringFormater::ReplaceAll(str, " too", "!");
        TEST_COMPARE(str2, "hellow egor! How are you? I like programming!");

        str = "hellow egor! How are you? I like programming";
        str2 = StringFormater::ReplaceAll(str, "hellow", "Hi");
        TEST_COMPARE(str2, "Hi egor! How are you? I like programming");

        str = "hello egor";
        str2 = StringFormater::ReplaceAll(str, "hello egor", "hello alex");
        TEST_COMPARE(str2, "hello alex");

        str = "";
        str2 = StringFormater::ReplaceAll(str, "word", "word2");
        TEST_COMPARE(str2, "");

        str = "word";
        str2 = StringFormater::ReplaceAll(str, "", "word2");
        TEST_COMPARE(str2, "");

        str = "";
        str2 = StringFormater::ReplaceAll(str, "", "word2");
        TEST_COMPARE(str2, "");

        str = "hello egor!";
        str2 = StringFormater::ReplaceAll(str, "egor", "");
        TEST_COMPARE(str2, "hello !");

        strs = { "zero ", " three"};
        str = "zero one two three";
        str2 = StringFormater::ReplaceAll(str, strs, "");
        TEST_COMPARE(str2, "one two");

        strs = {};
        str = "zero one two three";
        str2 = StringFormater::ReplaceAll(str, strs, "");
        TEST_COMPARE(str2, str);

    }END_TEST_FUNCTION(TEST_REPLACE_ALL)

    BEGIN_TEST_FUNCTION(TEST_REPLACE_FIRST){

        string str = "one two one two one!";
        string str2 = StringFormater::ReplaceFirst(str, "one", "zero");
        TEST_COMPARE(str2, "zero two one two one!");

    }END_TEST_FUNCTION(TEST_REPLACE_FIRST)

    BEGIN_TEST_FUNCTION(TEST_REPLACE_END){

        string str = "one two one two one!";
        string str2 = StringFormater::ReplaceEnd(str, "one", "zero");
        TEST_COMPARE(str2, "one two one two zero!");

    }END_TEST_FUNCTION(TEST_REPLACE_END)

    BEGIN_TEST_FUNCTION(TRIM_SPACE){
        
        string str = "one two one two one!";
        string str2 = StringFormater::TrimSpace(str);
        TEST_COMPARE(str2, "onetwoonetwoone!");

    }END_TEST_FUNCTION(TRIM_SPACE)

    BEGIN_TEST_FUNCTION(TRIM_SPECIAL_CHARS){

        string str = "one\ntwo\tone\rtwo\none!\t";
        string str2 = StringFormater::TrimSpecialChars(str);
        TEST_COMPARE(str2, "onetwoonetwoone!");
        
    }END_TEST_FUNCTION(TRIM_SPECIAL_CHARS)

    BEGIN_TEST_FUNCTION(HAS_PREFIX){
        string str = "stdout:r";
        TEST_COMPARE(StringChecker::HasPrefix(str, "stdout"), true);

        str = "stdout:r";
        TEST_COMPARE(StringChecker::HasPrefix(str, "s"), true);

        str = "stdout:r";
        TEST_COMPARE(StringChecker::HasPrefix(str, "r"), false);

        str = "stdout:r";
        TEST_COMPARE(StringChecker::HasPrefix(str, "stdoot"), false);

        str = "stdout:r";
        TEST_COMPARE(StringChecker::HasPrefix(str, str), true);

    }END_TEST_FUNCTION(HAS_PREFIX)

    BEGIN_TEST_FUNCTION(HAS_SUFFIX){
        string str = "stdout:r";
        TEST_COMPARE(StringChecker::HasSuffix(str, "r"), true);

        str = "stdout:r";
        TEST_COMPARE(StringChecker::HasSuffix(str, "stdout"), false);

        str = "stdout:r";
        TEST_COMPARE(StringChecker::HasSuffix(str, "t:r"), true);

        str = "stdout:r";
        TEST_COMPARE(StringChecker::HasSuffix(str, "t-r"), false);

        str = "stdout:r";
        TEST_COMPARE(StringChecker::HasSuffix(str, str), true);

    }END_TEST_FUNCTION(HAS_SUFFIX)

END_TEST(A)

int main(){

    Test test;
    A* a = new A();
    return test.Testing(a);
    return 0;
}
