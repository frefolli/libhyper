#ifndef LIBHYPER_UTILS_HH
#define LIBHYPER_UTILS_HH

#include <libhyper/type.hh>
#include <libhyper/hyperobject.hh>
#include <libhyper/hyperbool.hh>
#include <libhyper/hyperint.hh>

std::string toString(Type type);
HyperBool* parseBool(std::string text);
HyperInt* parseInt(std::string text);
HyperObject* parseObject(std::string text, Type type);

#endif
