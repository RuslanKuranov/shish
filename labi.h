
int LR1(int a, int b, int h){
    return ((a-(b*h))/h);
}
int shish(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); // || - логический оператор или. shish - функция, которая проверяет, является ли символ буквой, сравнивая его с диапазонами символов для заглавных и строчных букв.
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
    printf("Тема лабы");
}
void lab4d()
{
    printf(" Тема лабы");
    printf(" Задание");
}
void lab5()
{
    printf("Тема лабы");
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
