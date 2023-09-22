#ifndef LIBHYPER_HYPERSTRING
#define LIBHYPER_HYPERSTRING
#include <libhyper/hyperobject.hh>
#include <string>
class HyperString : public HyperObject {
    private:
        std::string data;
    public:
        HyperString(std::string data);
        std::string toString();
        void* asPtr();
};
#endif
