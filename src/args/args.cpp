#include "args.h"

bool* Args::Bool(const string name, 
                 const bool defaultValue, 
                 const string description,
                 const bool isRequired){
    bool* ptr_value = new bool;

    Var<bool>* var = new Var<bool>(
                    TYPE_VAR::BOOL, 
                    name,
                    description,
                    isRequired, 
                    defaultValue, 
                    ptr_value);

    _vars.push_back(var);

    return ptr_value;
}

int* Args::Int(const string name, 
               const int defaultValue, 
               const string description,
               const bool isRequired){

    int* ptr_value = new int;

    Var<int>* var = new Var<int>(
                    TYPE_VAR::INT, 
                    name, 
                    description,
                    isRequired, 
                    defaultValue, 
                    ptr_value);

    _vars.push_back(var);

    return ptr_value;
}

string* Args::String(const string name, 
                     const string defaultValue, 
                     const string description,
                     const bool isRequired){

    string* ptr_value = new string;

    Var<string>* var = new Var<string>(
                    TYPE_VAR::STRING, 
                    name, 
                    description,
                    isRequired, 
                    defaultValue, 
                    ptr_value);

    _vars.push_back(var);

    return ptr_value;
}

float* Args::Float(const string name, 
                   const float defaultValue, 
                   const string description,
                   const bool isRequired){

    float* ptr_value = new float;

    Var<float>* var = new Var<float>(
                    TYPE_VAR::FLOAT, 
                    name, 
                    description,
                    isRequired, 
                    defaultValue, 
                    ptr_value);

    _vars.push_back(var);

    return ptr_value;
}

//Call last
bool Args::Parse(int argv, char** argc){

}
