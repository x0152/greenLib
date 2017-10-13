#ifndef FLAGS_H
#define FLAGS_H

typedef char FLAG8;
typedef short FLAG16;
typedef int FLAG32;
typedef int64_t FLAG64;

template <typename T>
class Flags{
public:
    bool IsFlag(const T flag){
        if ((_flags & flag) == flag) {
            return true;
        }

        return false;
    }

    void SetFlag(const T flag){
        _flags |= flag;
    }

    void ResetFlag(const T flag){
        _flags = _flags ^ flag;
    }
    
private:
    T _flags;
};

#endif /* FLAGS_H */
