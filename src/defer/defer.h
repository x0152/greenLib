#ifndef DEFER_H
#define DEFER_H
#include <functional>
#include <tuple>

using std::function;

template <typename T, typename... Args>
class Defer{
public:
    Defer(T function){
        _function = function;
    }

    ~Defer(){
       _function(std::get<Args>(_args)...); 
    }
private:
    T _function;
    std::tuple<Args...> _args;
};

template <typename U, typename T>
class ClassDefer{
public:
    ClassDefer(U class_, T function){
        _function = function;
        _class = class_;
    }

    ClassDefer(T function){
        _function = function;
    }

    ~ClassDefer(){
        _function(_class); 
    }
private:
    T _function;
    U _class;
};

#define DEFER_CLASS(CLASS, FUNCTION, RESULT) ClassDefer<decltype(CLASS), function<RESULT(decltype(CLASS))> > def(CLASS, FUNCTION);
#define DEFER(FUNCTION) Defer<function<decltype(FUNCTION)> > def_##FUNCTION(FUNCTION)

#endif /* DEFER_H */
