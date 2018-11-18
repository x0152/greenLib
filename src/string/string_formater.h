#ifndef STRING_FORMATER_H
#define STRING_FORMATER_H

#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using std::list;
using std::string;

class StringFormater
{
public:
    StringFormater() = delete;

    static list<string> Split(const string& str, const string& sign);
    static string Join(const list<string>& strs, const string& sep);
    
    static string ReplaceAll(const string& str, const list<string>& fstr, const string& rstr);

    static string ReplaceAll(const string& str, const string& fstr, const string& rstr);
    static string ReplaceFirst(const string& str, const string& fstr, const string& rstr);
    static string ReplaceEnd(const string& str, const string& fstr, const string& rstr);

    static void Upper(string& str);
    static void Lower(string& str);

    //Remove all spaces
    static string TrimSpace(const string& str);
    static string TrimSpecialChars(const string& str);
private:
};

#endif /* STRING_FORMATER_H */
