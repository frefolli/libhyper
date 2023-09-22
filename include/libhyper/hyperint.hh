#ifndef LIBHYPER_HYPERINT
#define LIBHYPER_HYPERINT
#include <libhyper/hyperobject.hh>
#include <string>
class HyperInt : public HyperObject {
    private:
        int data;
    public:
        HyperInt(int data);
        std::string toString();
        void* asPtr();
};
#endif
