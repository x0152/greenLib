#ifndef NON_COPYABLE_H
#define NON_COPYABLE_H

#define NON_MOVABLE(CLASS) \
CLASS& operator=(CLASS&&) = delete; \
CLASS(CLASS&&) = delete; 

/*class NonMovable
{
private:
    NonMovable& NonCopyable(const NonCopyable&&) = delete;
    NonMovable& operator=(const NonCopyable&&) = delete;
    virtual ~NonMovable(){};
};*/

#endif /* NON_COPYABLE_H */
