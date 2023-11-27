[![CI/CD GitHub Actions](https://github.com/valerap97/ctest/actions/workflows/test-action.yml/badge.svg)](https://github.com/valerap97/ctest/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/valerap97/ctest/badge.svg?branch=main)](https://coveralls.io/github/valerap97/ctest?branch=main)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=valerap97_ctest&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=valerap97_ctest)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=valerap97_ctest&metric=bugs)](https://sonarcloud.io/summary/new_code?id=valerap97_ctest)
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=valerap97_ctest&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=valerap97_ctest)

# План тестирования:

# Аттестационное тестирование:
- Тест А1 (положительный)
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=1, b=-3, c=2
  - Ожидаемый результат: 
    ```
    Два корня.
    1 корень = 2.00
    2 корень = 1.00
    ```
- Тест А2 (положительный)
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=1, b=2, c=1
  - Ожидаемый результат:
    ```
    Один корень.
    Корень = -1.00
    ```
- Тест А3 (положительный)
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=2, b=4, c=2
  - Ожидаемый результат:
    ```
    Один корень.
    Корень = -1.00
    ```
- Тест А4 (положительный)
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=2, b=3, c=1
  - Ожидаемый результат:
    ```
    Два корня.
    1 корень = -0.50
    2 корень = -1.00
    ```

# Блочное тестирование (функция my_sqrt):
<ol>
  <li>
    <h3>Тест Б1.1 (положительный)</h3>
    <ul>
      <li>Входные данные: a=1, b=-3, c=2</li>
      <li>Ожидаемый результат:
        ```
        Два корня.
        1 корень = 2.00
        2 корень = 1.00
        ```
      </li>
    </ul>
  </li>
  <li>
    <h3>Тест Б1.2 (положительный)</h3>
    <ul>
      <li>Входные данные: a=1, b=2, c=1</li>
      <li>Ожидаемый результат:
        ```
        Один корень.
        Корень = -1.00
        ```
      </li>
    </ul>
  </li>
  <li>
    <h3>Тест Б1.3 (положительный)</h3>
    <ul>
      <li>Входные данные: a=2, b=4, c=2</li>
      <li>Ожидаемый результат:
        ```
        Один корень.
        Корень = -1.00
        ```
      </li>
    </ul>
  </li>
  <li>
    <h3>Тест Б1.4 (положительный)</h3>
    <ul>
      <li>Входные данные: a=2, b=3, c=1</li>
      <li>Ожидаемый результат:
        ```
        Два корня.
        1 корень = -0.50
        2 корень = -1.00
        ```
      </li>
    </ul>
  </li>
</ol>

# Интеграционное тестирование:
<ol>
  <li>
    <h3>Тест И1</h3>
    <ul>
      <li>Методы: my_sqrt(int a, int b, int c)</li>
      <li>Описание: Проверяем работу функции my_sqrt в различных ситуациях</li>
      <li>Входные данные: a=1, b=-3, c=2</li>
      <li>Ожидаемый результат:
        ```
        Два корня.
        1 корень = 2.00
        2 корень = 1.00
        ```
      </li>
    </ul>
  </li>
</ol>

