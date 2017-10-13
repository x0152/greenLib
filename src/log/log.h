#ifndef LOG_H
#define LOG_H
#include <string>
#include <iostream>
#include "flags.h"
#include "tests.h"


using std::string;
using std::ostream;
using std::endl;

enum LogFlags{
    LOG_PREFIX_TIME = 2,
    LOG_PREFIX_DATE = 4
};


class Log {
    TEST_CLASS;
public:
    Log(ostream* out);
    void WriteMsg(const string msg);
    void SetPrefix(const string prefix);
    void SetFlag(const int flag);
    void ResetFlag(const int flag);
private:
    string _prefix;
    ostream* _out;
    Flags<FLAG32> _flags;
};

#endif /* LOG_H */
