#ifndef STRING_FORMATER_H
#define STRING_FORMATER_H

#include <list>
#include <string>

using std::list;
using std::string;

class StringFormater
{
public:
    StringFormater() = delete;

    static list<string> Split(const string str);
    static string Join(const list<string> strs, const string sep);
    
    static list<string> Replace(const string str1, const string str2);
    static list<string> ReplaceFirst(const string str1, const string str2);
    static list<string> ReplaceEnd(const string str1, const string str2);

    static string Upper(const string str);
    static string Lower(const string str);

    //Remove all spaces
    static string TrimSpace(const string str);
    static string TrimSpecialChars(const string str);

    static string Repeat(const string str1, const int count);
private:
};

#endif /* STRING_FORMATER_H */
