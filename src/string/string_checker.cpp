#include "string_checker.h"

bool StringChecker::HasPrefix(const string str, const string prefix){

    if(str.empty() || prefix.empty() || 
       str.size() < prefix.size()){
        return false; 
    }

    auto it_str = str.begin();
    auto it_prefix = prefix.begin();

    while(it_prefix != prefix.end()){
        if(*it_str == *it_prefix){
            ++it_str;
            ++it_prefix;
        }else{
            return false;
        }
    }

    return true;

}

bool StringChecker::HasSuffix(const string str, const string suffix){

    if(str.empty() || suffix.empty() || 
       str.size() < suffix.size()){
        return false; 
    }

    auto it_str = str.rbegin();
    auto it_suffix = suffix.rbegin();

    while(it_suffix != suffix.rend()){
        if(*it_str == *it_suffix){
            ++it_str;
            ++it_suffix;
        }else{
            return false;
        }
    }

    return true;

}
