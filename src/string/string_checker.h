#ifndef STRING_CHECKER_H
#define STRING_CHECKER_H
#include <string>

using std::string;

class StringChecker
{
public:
    StringChecker() = delete;

    static bool HasPrefix(const string str1, const string prefix);
    static bool HasSuffix(const string str1, const string suffix);

    virtual ~StringChecker(){}
};

#endif /* STRING_CHECKER_H */
