#include <iostream>
#include "log.h"
#include <sstream>

using namespace std;

std::stringstream* ss;

BEGIN_TEST(Log)
    BEGIN_TEST_FUNCTION(ADD_MSG){
    
        test_object->WriteMsg("test_data");

        std::stringstream s;
        s << "test_data" << endl;

        TEST_COMPARE(s.str(), ss->str())

    }
    END_TEST_FUNCTION(ADD_MSG)

    BEGIN_TEST_FUNCTION(INIT_LOG){
        TEST_NOT_COMPARE(test_object->_out->rdbuf()->in_avail(), 0)
    }
    END_TEST_FUNCTION(INIT_LOG)
END_TEST(Log)

int main(){
    Test test;

    ss = new std::stringstream();
    return test.Testing(new Log(ss));
}
