#include "text_editor.h"

int main()
{
    std::string input1 = "";
    std::string input2 = "abcd";
    std::string input3 = "efghi";
    TextEditor te0 = TextEditor();
    std::cout << te0 << '\n';
    TextEditor te1 = TextEditor(input1);
    std::cout << te1 << '\n';
    TextEditor te2 = TextEditor(input2);
    std::cout << te2 << '\n';
    TextEditor te3 = TextEditor(input3);
    std::cout << te3 << '\n';
    te3 = te2;
    std::cout << te3 << '\n';
    te0.addText("112233");
    std::cout << te0 << '\n';
    std::string str = te0.cursorLeft(3);
    std::cout << te0 << " " << str << '\n';
    str = te0.cursorRight(2);
    std::cout << te0 << " " << str << '\n';
    te0.deleteText(3);
    std::cout << te0 << '\n';
    str = te0.cursorLeft(1);
    std::cout << te0 << " " << str << '\n';
    te0.addText("44");
    std::cout << te0 << '\n';
    std::cout << "-----" << '\n';
    
    return 0;
}

