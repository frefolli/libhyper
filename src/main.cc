#include <libhyper/hyperobject.hh>
#include <libhyper/hypermap.hh>
#include <libhyper/hyperint.hh>
#include <libhyper/hyperbool.hh>
#include <libhyper/hyperstring.hh>
#include <libgc/box.hh>
#include <iostream>

int main(int argc, char** args) {
    Box<HyperObject> obj = new HyperMap ({
        {"a", new HyperMap({
            {"x", new HyperInt(17)}
        })},
        {"b", new HyperMap({
            {"y", new HyperBool(1)}
        })},
        {"c", new HyperMap({
            {"z", new HyperString("42")}
        })}
    });
    std::cout << "obj = " << obj->toString() << std::endl;
}
