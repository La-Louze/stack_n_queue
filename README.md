# Алгоритмы тренировка

## Задача: реализовать очередь и стек на массивах и на списках  
![стек](./README_images/stack.png)  
![очередь](./README_images/queue.png)  

## Графическое представление решения задачи

![](./README_images/hop.png)

![](./README_images/hops.png)

## Пограничные случаи

### Стек на массивах:   
1. Стек пуст. Указатель ни на что не указывает
2. Стек переполнен. Добавлять элементы больше некуда.

### Очередь на массивах

1. Очередь пуста. Указатель на первый элемент никуда не указывает.
2. Очередь переполнена. Добавлять элементы некуда.

## Реализация на языке c++

| структура данных | функция добавления | функция извлечения |
|------------------|--------------------|--------------------|
| стек на массивах |![add stack](./README_images/stArrCompl.png)|![get stack](./README_images/stArrGet.png)|
| стек на списках |![add stack](./README_images/stListAdd.png)|![get stack](./README_images/stListGet.png)|
| очередь на массивах |![add que](./README_images/queArrAdd.png)|![get que](./README_images/queArrGet.png)|
| очередь на списках |![add que](./README_images/queListAdd.png)|![get que](./README_images/queListGet.png)|

## Заключение

### Таблица времени

|кол-во эл\структура|стек на массиве|стек на списках|очередь на массиве|очередь на списках|
|-------------------|---------------|---------------|------------------|------------------|
|1.000|![](./README_images/stArr.png)|![](./README_images/stList.png)|![](./README_images/queArr.png)|![](./README_images/queList.png)|
|10.000|![](./README_images/stArr10.png)|![](./README_images/stList10.png)|![](./README_images/queArr10.png)|![](./README_images/queLIst10.png)|

### Вывод:

По сравнению с масивами, списки выполняют свою работу быстрее.
