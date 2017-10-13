#ifndef NON_COPYABLE_H
#define NON_COPYABLE_H

#define NON_COPYABLE(CLASS) \
CLASS& operator=(const CLASS&) = delete; \
CLASS(const CLASS&) = delete; 

/*class NonCopyable
{
private:
    NonCopyable& NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;
    virtual ~NonCopyable(){}
};*/

#endif /* NON_COPYABLE_H */
