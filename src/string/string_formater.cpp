#include "string_formater.h"

list<string> StringFormater::Split(const string str, const string sign){

    if(str.size() == 0){
        return list<string>(); 
    }

    list<string> strs;

    string tmp(str.begin(), str.end());
    size_t pos = tmp.find(sign);
    while(pos != std::string::npos){
        strs.push_back(string(tmp.begin(), tmp.begin() + pos));
        tmp = string(tmp.begin() + pos + sign.size(), tmp.end());
        pos = tmp.find(sign);
    }

    string endStr(tmp.begin(), tmp.end());
    //if(!endStr.empty()){
        strs.push_back(endStr);
    //}

    return strs;
}

string StringFormater::Join(const list<string> strs, const string sep){

    if(strs.size() == 0){
        return string(); 
    }

    std::stringstream ss;

    int i = 0;
    int count = strs.size();
    for(auto str : strs){
        if (i < count - 1){
            ss << str << sep;
        }else{
            ss << str;
        }

        ++i;
    }

    return ss.str();
}

string StringFormater::ReplaceAll(const string str, const list<string> fstrs, const string rstr){

}

string StringFormater::ReplaceAll(const string str, const string fstr, const string rstr){

}

string StringFormater::ReplaceFirst(const string str, const string fstr, const string rstr){

}

string StringFormater::ReplaceEnd(const string str, const string fstr, const string rstr){

}

void StringFormater::Upper(string& str){
    std::transform(str.begin(), str.end(), str.begin(), static_cast<int(*)(int)>(std::toupper));
}

void StringFormater::Lower(string& str){
    std::transform(str.begin(), str.end(), str.begin(), static_cast<int(*)(int)>(std::tolower));
}

//Remove all spaces
string StringFormater::TrimSpecialChars(const string str){
    list<string> specialChars = {"\n", "\t", "\t"};
    return ReplaceAll(str, specialChars, "");
}

string StringFormater::TrimSpace(const string str){
    return ReplaceAll(str, " ", "");
}

