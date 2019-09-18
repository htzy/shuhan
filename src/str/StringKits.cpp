//
// Created by 黄诗鹤 on 2019-09-18.
//

#include "StringKits.h"


void StringKits::Constucts() {
    std::string s1();
    std::cout << "std::string s1() -> '" << s1 << "'" << std::endl;
    std::string s2;
    std::cout << "std::string s2 -> '" << s2 << "'" << std::endl;
    std::string s3("");
    std::cout << "std::string s3(\"\") -> '" << s3 << "'" << std::endl;
    std::string s4("shuhan");
    // "std::string s4(\"shuhan\") -> \""
    std::cout << R"(std::string s4("shuhan") -> ")" << s4 << "\"" << std::endl;
    std::string s5(5, 'i');
    std::cout << "std::string s5(5, 'i') -> '" << s5 << "'" << std::endl;
    std::string s6("aishuhan", 2, 6);
    // "std::string s6(\"aishuhan\", 2, 6) -> \""
    std::cout << R"(std::string s6("aishuhan", 2, 6) -> ")" << s6 << "\"" << std::endl;
}
