#ifndef LIBHYPER_HYPERBOOL
#define LIBHYPER_HYPERBOOL
#include <libhyper/hyperobject.hh>
#include <string>
class HyperBool : public HyperObject {
    private:
        bool data;
    public:
        HyperBool(bool data);
        std::string toString();
        void* asPtr();
};
#endif
