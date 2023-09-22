#ifndef LIBHYPER_HYPEROBJECT
#define LIBHYPER_HYPEROBJECT
#include <string>

class HyperObject {
    public:
        virtual ~HyperObject();
        virtual std::string toString() = 0;
        virtual void* asPtr() = 0;
};
#endif
