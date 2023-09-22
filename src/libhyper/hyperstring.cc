#include <libhyper/hyperstring.hh>

HyperString::HyperString(std::string data) {
    this->data = data;
}

std::string HyperString::toString() {
    return data;
}

void* HyperString::asPtr() {
    return (void*) (&data);
}
