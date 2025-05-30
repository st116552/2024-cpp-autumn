# Substring

## Description

## Task
 Создайте класс `Bank` для управления несколькими счетами:
- Закрытое поле `accounts` — вектор объектов `BankAccount`.
- Метод `AddAccount(BankAccount account)` для добавления нового счета.
- Метод `GetTotalBalance()` для получения общего баланса всех счетов.
- Метод `PrintAllAccounts()` для вывода информации обо всех счетах.

Использование классов:
- В `main()` создайте несколько объектов класса `BankAccount` и добавьте их в объект класса `Bank`.
- Выполните различные операции с счетами, такие как депозит и снятие средств.
- Выведите информацию обо всех счетах и общий баланс.
  
Класс `BankAccount` должен содержать:
- Закрытые (private) поля:
- `accountNumber` (тип `string`) — номер счета.
- `balance` (тип `double`) — текущий баланс счета.
- `accountHolder` (тип `string`) — имя владельца счета.
- Конструктор, который принимает значения для всех полей.
- Метод `Deposit(double amount)` для внесения денег на счет. Этот метод должен добавлять переданную сумму к текущему балансу.
- Метод `Withdraw(double amount)` для снятия денег со счета. Этот метод должен проверять, достаточно ли средств на счете перед тем, как произвести снятие. Если средств недостаточно, метод должен выводить сообщение об ошибке.
- Метод `GetBalance()` для получения текущего баланса.
- Метод `GetAccountHolder()` для получения имени владельца счета.
- Метод `GetAccountNumber()` для получения номера счета.
- Метод `PrintAccountInfo()` для вывода всей информации о счете.


## Running the Application
```bash
./ g++ main.cpp BankAccount.cpp Bank.cpp -o MyProg
./ MyProg

```

## Author

Smetanina Ekatherina
st116552

