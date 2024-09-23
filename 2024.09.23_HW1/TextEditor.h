#include <iostream>
#include <string>
#include <stack>

#pragma once

class TextEditor {
private:
	std::stack<char> leftPart;
	std::stack<char> rightPart;

public:
	TextEditor();
	TextEditor(std::string input);
	TextEditor(const TextEditor& src);
	~TextEditor();
	TextEditor& operator=(const TextEditor& other);
	friend std::ostream& operator << (std::ostream& os, const TextEditor& src);
	void addText(std::string text);
	int deleteText(int k);
	std::string cursorLeft(int k);
	std::string cursorRight(int k);
};
