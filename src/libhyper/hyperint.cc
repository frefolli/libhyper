#include <libhyper/hyperint.hh>

HyperInt::HyperInt(int data) {
    this->data = data;
}

std::string HyperInt::toString() {
    return std::to_string(data);
}

void* HyperInt::asPtr() {
    return (void*) (&data);
}
