Программа для вычисления функции F(x,y) = x*n+y
n ∈ [0;9]
x,y - целочисленные переменные, вводимые пользователем.

Эта программа использует ленту для хранения промежуточных значений и головку ленты для отслеживания текущей позиции на ленте. 
Переменная state представляет текущее состояние машины Тьюринга, а переменная step отслеживает количество шагов, сделанных машиной.

Машина Тьюринга выполняет следующие действия:

1. Инициализирует N в 1 и переходит в состояние 1.


2. В состоянии 1 машина Тьюринга проверяет, больше ли N, чем 10. Если да, то машина переходит в состояние остановки (-1). 
Если нет, то она перемещает головку ленты вправо и переходит в состояние 2.

В состоянии 2 машина Тьюринга умножает N на X и записывает результат на ленту. 
Затем она перемещает головку ленты вправо и переходит в состояние 3.


В состоянии 3 машина Тьюринга прибавляет Y к результату и сохраняет конечный результат на ленте. 
Затем она перемещает головку ленты влево и переходит в состояние 4.


В состоянии 4 машина Тьюринга печатает результат для текущего значения N и увеличивает N. Затем она переходит обратно в состояние 1.
Машина Тьюринга продолжает выполнять эти шаги, пока не достигнет состояния остановки (-1). 
Вывод программы будет включать промежуточные состояния и содержимое ленты на каждом шаге, а также конечный результат для каждого значения N от 1 до 10.

В моей программе лента реализована как массив целых чисел с фиксированным размером 100. 
Изначально лента инициализируется нулями, поэтому на выходе программы мы видим последовательность нулей (0, 0, 0, 0, ...).

Лента используется для хранения промежуточных значений, а текущая позиция на ленте обозначается головкой ленты. 
На каждом шаге работы машины Тьюринга головка ленты указывает на текущую позицию на ленте, и значение в этой позиции используется в вычислениях.

В примере, который вы введете, значения на ленте, которые используются в вычислениях - ненулевые. 
Нули - это просто заполняющие значения на ленте, которые не используются.
