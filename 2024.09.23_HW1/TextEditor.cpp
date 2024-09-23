#include "TextEditor.h"
#include <string>
#include <stack>
#include <iostream>

TextEditor::TextEditor() {
	leftPart = std::stack<char>();
	rightPart = std::stack<char>();
}


TextEditor::TextEditor(std::string input) {
	leftPart = std::stack<char>();
	rightPart = std::stack<char>();
	for (int i = 0; i < input.size(); i++) {
		leftPart.push(input[i]);
	}
}

TextEditor::TextEditor(const TextEditor& src) {
	if (&src != NULL) {
		leftPart = src.leftPart;
		rightPart = src.rightPart;
	}
}

TextEditor::~TextEditor() {
	leftPart.~stack();
	rightPart.~stack();
}

TextEditor& TextEditor::operator=(const TextEditor& other) {
	if (this != &other) {
		leftPart.~stack();
		rightPart.~stack();
		leftPart = other.leftPart;
		rightPart = other.rightPart;
	}
	return *this;
}

std::ostream& operator << (std::ostream& os, const TextEditor& src) {
	std::string output = "";
	std::stack<char> lp = src.leftPart;
	std::stack<char> rp = src.rightPart;
	while (!lp.empty()) {
		output = lp.top() + output;
		lp.pop();
	}
	while (!rp.empty()) {
		output = output + rp.top();
		rp.pop();
	}
	return os << output;
}

void TextEditor::addText(std::string text) {
    for (int i = 0; i < text.size(); i++) {
        leftPart.push(text[i]);
    }
}

int TextEditor::deleteText(int k) {
    while (k > 0 && !leftPart.empty()) {
        leftPart.pop();
        k--;
    }
    return k;
}
std::string TextEditor::cursorLeft(int k) {
    std::string str = "";
    char tmp;
    while (k > 0 && !leftPart.empty()) {
        tmp = leftPart.top();
        leftPart.pop();
        rightPart.push(tmp);
        str = tmp + str;
        k--;
    }
    return str;
}

std::string TextEditor::cursorRight(int k) {
    std::string str = "";
    char tmp;
    while (k > 0 && !rightPart.empty()) {
        tmp = rightPart.top();
        rightPart.pop();
        leftPart.push(tmp);
        str = str + tmp;
        k--;
    }
    return str;
}

