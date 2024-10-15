# Substring

## Description
Implementation and demonstration of the [][] operator for a custom string, according to the condition below.

## Task
Реализовать оператор [ ] для уже реализованного класса String. 
Этот оператор должен реализовывать следующее поведение: оператор нужно реализовать таким образом, чтобы для объекта str класса String можно было писать str[i][j] и это выражение возвращало подстроку начинающуюся в позиции i (считая с 0) и заканчивающуюся в позиции j (не включая).
Пример:
String const hello("hello");
String const hell = hello[0][4]; // теперь в hell хранится подстрока "hell"
String const ell  = hello[1][4]; // теперь в ell хранится подстрока "ell"
i может равняться j, в этом случае результатом должна быть пустая строка. Гарантируется, что i никогда не будет больше j, и они не будут выходить за пределы длины строки.

## Running the Application
```bash
./ g++ main.cpp string.cpp -o MyProg
./ MyProg

```

## Author

Smetanina Ekatherina
st116552

