# TextEditor

## Description
Implementation and demonstration of several functions, following the example of a text editor.

## Task
Создайте текстовый редактор с курсором, который может выполнять следующие действия:

- Добавлять текст в позицию курсора.
- Удалять текст из позиции курсора (симулируя нажатие клавиши "Backspace").
- Перемещать курсор влево или вправо.
Рекомендация: использовать стек, может быть даже не один

TextEditor() - инициализирует объект без текста

void addText(string text) - добавляет текст на позицию курсора

int deleteText(int k) -  удаляет k символов слева от курсора. Возвращает количество символов, которое было удалено.

string cursorLeft(int k) - Смещает курсор на k символов влево. Возвращает все символы, которые находятся левее курсора.

string cursorRight(int k) - Смещает курсор на k символов вправо. Возвращает все символы, которые находятся правее курсора.

## Running the Application
```bash
./ g++ main.cpp TextEditor.cpp -o MyProg
./ MyProg

```

