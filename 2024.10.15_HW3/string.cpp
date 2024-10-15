#include "string.h"

String::String(const char* str) {
    size = strlen(str);
    this->str = new char[size + 1];
    for (size_t i = 0; i <= size; ++i)
        this->str[i] = str[i];
}

String::String(size_t n, char c) : size(n), str(0)
{
    this->str = new char[size + 1];
    for (int i = 0; i < size; this->str[i] = c, ++i);
    str[size] = '\0';
}

String::~String()
{
    delete[] str;
}

String::String(const String& other) :size(other.size)
{
    str = new char[size + 1];
    strcpy(str, other.str);
}

String& String::operator=(const String& other)
{
    if (this != &other)
    {
        delete[] this->str;
        this->size = other.size;
        this->str = new char[this->size + 1];
        strcpy(this->str, other.str);
    }

    return *this;
}

void String::append(const String& other)
{
    size += other.size;
    char* new_str = new char[size + 1];
    strcpy(new_str, str);
    strcat(new_str, other.str);
    delete[] str;
    str = new_str;
}

std::ostream& operator<<(std::ostream& ostr, const String& src)
{
    for (int i = 0; i <= src.size; i++)
    {
        ostr << src.str[i];
    }
    return ostr;
}

String String::operator[](size_t ind) const
{
    String ans = String();
    if (ind < this->size)
    {
        ans.append(String(this->str + ind));
        ans.size = ind;
    }
    else
    {
        ans.append(String(ind - this->size + 1, 0));
        for (int i = 0; i < ind - this->size; i++)
        {
            ans.str[i] = this->str[i];
        }

        ans.str[ind - this->size] = '\n';
        ans.size = ind - this->size;
    }
    return ans;
}
