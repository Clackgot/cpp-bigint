[![Build Status](https://travis-ci.org/ishmukhamet/cpp-bigint.svg)](https://travis-ci.org/ishmukhamet/cpp-bigint)

#Описание
Класс, реализующий длинную арифметику. По умолчанию работает с числами длиной до 2000 десятичных знаков.

#Операторы
##Объявление и определение
```C++
Bigint a = 12323467445;
Bigint b;
b = 159712312353;
```

##Арифметика
Реализованы сложение, вычитание, умножение, деление и взятие остатка от деления. Возможны операции с присваиванием.
```C++
c = a + b;
c += a;
c = a * 6;
c %= 6;
```

##Инкремент и декремент
Рабоают префиксный и постфиксный варианты.
```C++
a++;
--a;
```

##Унарный минус
Возвращает число с противоложным знаком.
```C++
-a;
```

##Сравнение
Работают все операторы сравнения: ==, !=, >, <, >=, <=.

##Потоковые операторы
```C++
cin >> a;
cout << a*b;
```

#Методы
##.input()
Считывает длинное число из консоли.
```C++
a.input();
```

##.output()
Выводит длинное число в консоль.
```C++
a.output();
```

##.isEven(), .isOdd()
Проверяют чётность/нечётность.
```C++
bool even = a.isEven();
bool odd = b.isOdd();
```

#Математические функции
##pow(BigInt a, BigInt n)
Возводит число a в степень n аналогично стандартной функции.
```C++
BigInt a = 2;
BigInt n = 100;
cout << pow(a, n);
```

##fact(BigInt a)
Возвращает факториал числа - a!
```C++
BigInt a = 100;
cout << fact(a)
```

##sqrt(BigInt a)
Ищет квадратный корень из данного числа a (наибольшее число, квадрат которого не превосходит данное).
```C++
BigInt a = 1000000000000;
cout << sqrt(a)
```
##abs(BigInt a)
Возвращает модуль числа.
```C++
BigInt a = -4234345350;
cout << abs(a)
```
Благодарность [cppalgo.blogspot.ru](http://cppalgo.blogspot.ru/2010/05/blog-post.html) и [www.pvsm.ru](http://www.pvsm.ru/algoritmy/29587) за некоторые подсмотренные алгоритмы.
