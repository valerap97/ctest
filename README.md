[![CI/CD GitHub Actions](https://github.com/valerap97/ctest/actions/workflows/test-action.yml/badge.svg)](https://github.com/valerap97/ctest/actions/workflows/test-action.yml)
[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=DenisTerehin_ctest&metric=alert_status)](https://sonarcloud.io/dashboard?id=valerap97_ctest)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=valerap97_ctest&metric=bugs)](https://sonarcloud.io/summary/new_code?id=valerap97_ctest)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=valerap97_ctest&metric=code_smells)](https://sonarcloud.io/dashboard?id=valerap97_ctest)
[![Coverage Status](https://coveralls.io/repos/github/valerap97/ctest/badge.svg?branch=main)](https://coveralls.io/github/valerap97/ctest?branch=main)
## План тестирования:

### Аттестационное тестирование:

1. **Тест А1 (положительный)**
   - Начальное состояние: Открытый терминал
   - Действие: Пользователь запускает программу с аргументами 2 -5 3
   - Ожидаемый результат:
      - 1 корень = 1.50
      - 2 корень = 1.00

2. **Тест А2 (негативный)**
   - Начальное состояние: Открытый терминал
   - Действие: Пользователь запускает программу без аргумента
   - Ожидаемый результат: Аргументов функции должно быть три!

### Блочное тестирование (класс my_func)

**Метод int my_sqrt(double a, double b, double c, double* roots)**

- **Тест B1.1 (положительный)**
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=1, b=-3, c=2
  - Ожидаемый результат: 
    - 1 корень = 2.00
    - 2 корень = 1.00

- **Тест B1.2 (положительный)**
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=1, b=2, c=1
  - Ожидаемый результат: 
    - 1 корень = -1.00

- **Тест B1.3 (положительный)**
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=0, b=2, c=3
  - Ожидаемый результат: 
    - 1 корень = NaN
    - 2 корень = -INF

- **Тест B1.4 (положительный)**
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=1, b=-3, c=2
  - Ожидаемый результат: 
    - 1 корень = NaN
    - 2 корень = NaN

- **Тест B1.5 (негативный)**
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=1, b=2, c=3
  - Ожидаемый результат: массив roots[] не меняется

### Интеграционное тестирование:

1. **Тест И1**
   - Методы: int fibonachi(int num), int my_sqrt(double a, double b, double c, double* roots)
   - Описание: Проверяем, можно ли использовать результат работы функции fibonachi в функции my_sqrt
   - Входные данные: (fibonachi(6), -22, 14)
   - Ожидаемый результат: 
    - 1 корень = 1.75 
    - 2 корень = 1.00
