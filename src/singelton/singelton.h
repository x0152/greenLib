#ifndef SINGELTON_H
#define SINGELTON_H

#include "non_movable.h"
#include "non_copyable.h"

#define SINGELTON(CLASS) \
    private: \
         /*NON_COPYABLE(CLASS)*/ \
        CLASS& operator=(const CLASS&) = delete; \
        CLASS(const CLASS&) = delete; \
        /*NON_MOVABLE(CLASS) */ \
        CLASS& operator=(CLASS&&) = delete; \
        CLASS(CLASS&&) = delete; \
    public:  \
        CLASS(); \
        static CLASS* Instance(); \
        static CLASS* _init;

#define SINGELTON_INIT(CLASS) \
    CLASS* CLASS ::_init = nullptr; \
    CLASS* CLASS ::Instance() { \
        if(_init == nullptr){ \
            _init = new CLASS; \
        } \
        return _init; \
    }

#endif /* SINGELTON_H */
