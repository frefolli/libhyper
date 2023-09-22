#ifndef LIBHYPER_HYPERMAP
#define LIBHYPER_HYPERMAP
#include <libhyper/hyperobject.hh>
#include <string>
#include <map>
class HyperMap : public HyperObject {
    private:
        std::map<std::string, HyperObject*> data;
    public:
        HyperMap(std::map<std::string, HyperObject*> data = {});
        ~HyperMap();

        HyperObject* gets(std::string name);
        void sets(std::string name, HyperObject* ptr);
        bool has(std::string name);

        template<class T>
        T& get(std::string name) {
            return *((T*) gets(name));
        }

        std::string toString();
        void* asPtr();
};
#endif
