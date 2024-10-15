#include <iostream>
#include <cstddef>  // size_t
#include <cstring>  // strlen, strcpy

struct String {
public:
    String(const char* str = "");
    String(size_t n, char c);
    ~String();

    String(const String& other);
    String& operator=(const String& other);
    friend std::ostream& operator<<(std::ostream& ostr, const String& src);
    String operator[](size_t ind) const;

    void append(const String& other);

private:
    size_t size;
    char* str;
};