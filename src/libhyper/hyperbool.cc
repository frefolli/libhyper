#include <libhyper/hyperbool.hh>

HyperBool::HyperBool(bool data) {
    this->data = data;
}

std::string HyperBool::toString() {
    if (data)
        return "true";
    return "false";
}

void* HyperBool::asPtr() {
    return (void*) (&data);
}
