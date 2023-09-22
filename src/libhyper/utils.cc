#include <libhyper/utils.hh>
#include <libhyper/hyperstring.hh>
#include <regex>
#include <stdexcept>

std::string toString(Type type) {
    if (type == Void)
        return "void";
    if (type == String)
        return "string";
    if (type == Bool)
        return "bool";
    if (type == Int)
        return "int";
    return "undefined";
}

HyperBool* parseBool(std::string text) {
    if (std::regex_match(text, std::regex("[Tt][Rr][Uu][Ee]")))
        return new HyperBool(true);
    if (std::regex_match(text, std::regex("[Ff][Aa][Ll][Ss][Ee]")))
        return new HyperBool(false);
    return nullptr;
}

HyperInt* parseInt(std::string text) {
    if (std::regex_match(text, std::regex("[0-9]+")))
        return new HyperInt(std::stoi(text));
    return nullptr;
}

HyperObject* parseObject(std::string text, Type type) {
    if (type == String) {
        return new HyperString(text);
    } else if (type == Bool) {
        return parseBool(text);
    } else if (type == Int) {
        return parseInt(text);
    }
    throw std::runtime_error("InvalidTypeException");
}
