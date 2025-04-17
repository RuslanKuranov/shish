#include "lab.h"

int LR1(int a, int b, int h){
    return ((a-(b*h))/h);
}
int shish(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); // || - логический оператор или. shish - функция, которая проверяет, является ли символ буквой, сравнивая его с диапазонами символов для заглавных и строчных букв.
}
void elkipalki(char *str) {
    int i = 0, j = 0;
    int inSpace = 0; // для отслеживания пробелов

    while (str[i] != '0') {
        // Проверяем, является ли текущий символ пробелом
        if (str[i] != ' ') {
            str[j++] = str[i]; // Копируем символ, если он не пробел
            inSpace = 0; // Сбрасываем флаг
        } else if (inSpace == 0) {
            str[j++] = ' '; // Копируем пробел только если предыдущий символ не пробел
            inSpace = 1; // Устанавливаем флаг
        }
        i++;
    }
    str[j] = '0';
}

void lab1()

{
    printf("Из пункта А в пункт Б, расстояние между которыми L км, одновременно вышли два пешехода. Первый двигался со скоростью v1 км/час. Каковаскорость второго, если они встретились через t часов?\n");
    float L;
    float v1;
    float v2;
    float t;
    printf ("L=");
    scanf("%f", &L);
    printf ("v1=");
    scanf("%f", &v1);
    printf ("t=");
    scanf("%f", &t);
    v2 = (L-(v1*t))/t;
    printf("speed2= %f\n",v2);
}
void lab1d()
{
    printf("Из пункта А в пункт Б, расстояние между которыми L км, одновременно вышли два пешехода. Первый двигался со скоростью v1 км/час. Каковаскорость второго, если они встретились через t часов?\n");
    printf(" Задание: засунуть все вычисления в функцию\n");
   int L = 0, v1 = 0, t = 0, v2 = 0;
    printf ("L=");
    scanf("%d", &L);
    printf ("v1=");
    scanf("%d", &v1);
    printf ("t=");
    scanf("%d", &t);
  v2 = LR1(L,v1,t);
  printf("speed2(%d,%d,%d) = %d\n",L,v1,t);
}
void lab2()
{
    printf("Для заданного значения x вычислить сумму первых N элементов ряда: x-x^2/2+x^3/3-x^4/4\n");
     float s;   
    float a;  
    float x;
    float c;
    int n;  
    int i;  
    int sign; 
printf("n="); 
scanf("%d", &n); 
printf("x="); 
scanf("%f", &x); 
s = 0; 
sign = 1; 
i = 0;
c = x;
while( i<n ) 
{
a = c/(i+1);
s = s + a*sign; 
sign = (-1)*sign; 
i = i + 1; 
c = c*x;
} 

printf("s = %f\n", s); 
    
}
void lab2d()
{
    printf(" Для заданного значения x вычислить сумму первых N элементов ряда: x-x^2/2+x^3/3-x^4/4\n");
    printf(" вместо цикла вайла цикл фор, выход из цикла внутри через выбранное тобой условие с помощью оператора брейк\n ");
    float s;   
    float a;  
    float x;
    float c;
    int n;  
    int sign; 
printf("n="); 
scanf("%d", &n); 
printf("x="); 
scanf("%f", &x); 
s = 0; 
sign = 1; 
c = x;
for (int i=0;i<n;i++)
{
a = c/(i+1);
s = s + a*sign; 
sign = (-1)*sign; 
i = i + 1; 
c = c*x;
if (i == 3)
   break;
}
printf("s = %f\n", s); 

}
void lab3()
{
    printf("В потоке символов сосчитать число слов, состоящих из более чем N букв.\n");
    int N;
    printf("Введите значение N: ");
    scanf("%d", &N);
    int count = 0; 
    char c;
    int word_length = 0; 
    while ((c = getchar()) != '\n' && c != EOF); // && - логический оператор и
    printf("Введите текст, в конце +):\n");
    while ((c = getchar()) != '+') {
        if (shish(c)) { 
            word_length++;
        } else if (word_length > 0) { 
            if (word_length > N) {
                count++;     }
            word_length = 0; 
        }
    }
    if (word_length > N) {
        count++;
    }
    printf("Количество слов, содержащих больше %d букв: %d\n", N, count);
  
}

void lab4()
{
    printf("Тема лабы: В символьной строке удалить все лишние подряд идущие пробелы.\n");
    
    char str[1000]; // Массив для хранения строки
 while ((str == getchar()) != '+') {
    printf("Введите строку: ");
    scanf("%[^\n]", str); // Читаем строку с пробелами до символа новой строки

    elkipalki(str); // Удаляем лишние пробелы

    printf("Строка без лишних пробелов: '%s'\n", str);
 break;
}
}
void lab4d()
{
    printf(" Тема лабы");
    printf(" Задание");
}
void lab5()
{
    printf("В массиве из 10 целых чисел обнулить все элементы, значение которых меньше среднего арифметического элементов данного массива.\n");
    #define N 20
int x[N];
// массив из N элементов
int shish;
// среднее арифметическое
int i;
// ввод массива
printf("Введите N целых чисел через пробел, в конце нажмите ввод\n");
for( i = 0; i < N; i++ )
scanf("%d", &x[i]);
int tmp;
int noSwap;

for (int i = N - 1; i >= 0; i--)
{
    noSwap = 1;
    for (int j = 0; j < i; j++)
    {
        if (x[j] > x[j + 1])
        {
            tmp = x[j];
            x[j] = x[j + 1];
            x[j + 1] = tmp;
            noSwap = 0;
        }
    }
    if (noSwap == 1)
        break;
}
// вычисление среднего арифметического значения
shish = 0;
for( i = 0; i < N; i++ )
shish = shish + x[i];
shish = shish / N;
// выборочное обнуление элементов
for( i = 0; i < N; i++ )
{
if( x[i] < shish )
x[i] = 0;
}
// вывод массива
for( i = 0; i < N; i++ )
printf("%d ", x[i]);
printf("\n");
}

void lab5d()
{
    printf(" Тема лабы");
    printf(" Задание");
}
void lab6()
{
    printf("Тема лабы");
}
void lab6d()
{
    printf(" Тема лабы");
    printf(" Задание");
}
