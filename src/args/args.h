#ifndef ARGS_H
#define ARGS_H
#include <string>
#include <list>

using std::string;
using std::list;

enum class TYPE_VAR{
    INT,
    FLOAT,
    BOOL,
    STRING
};
struct _var_info_{
    TYPE_VAR type_var;
    string name;
    string description;
    bool isRequired;

    _var_info_(const TYPE_VAR _tv, 
               const string _name, 
               const string _description, 
               const bool _isRequired) : 

               type_var(_tv), 
               name(_name), 
               description(_description), 
               isRequired(_isRequired){}

};

template <typename T>
struct Var : public _var_info_{
    Var(const TYPE_VAR _tv, 
        const string _name, 
        const string _description,
        const bool _isRequired 
        const T _defaultValue, 
        const T* _value) : 
        
        _var_info_(_tv, _name, _name, _description, isRequired), 
        value(_value), 
        defaultValue(_value) {}

    T* value;
    T defaultValue;
};

class Args {
public:
    static bool* Bool(const string name, 
                      const bool defaultValue, 
                      const string description, 
                      const bool isRequired);

    static int* Int(const string name, 
                    const int defaultValue, 
                    const string description, 
                    const bool isRequired);

    static string* String(const string name, 
                          const string defaultValue, 
                          const string description, 
                          const bool isRequired);

    static float* Float(const string name, 
                        const float defaultValue, 
                        const string description, 
                        const bool isRequired);

    //Call last
    static bool Parse(int argv, char** argc);
private:
    static int _argv;
    static char** _argc;
    static list<_var_info_*> _vars;
};

#endif /* ARGS_H */
