#include <stdio.h>

int myOverFlow()
{
    short over = 32771; // 오버플로우
    short under = -32770; // 언더플로우

    double a = 216497100;
    // int 라서 문제 없음. float = 7번째 자리까지 오차없이 저장 가능(double은 16자리까지 보장)

    long double b = 0; // 128bit // %Lf long double 은 30자리까지 보장
    float c = 0;

    printf("32771 => %8d\n", over);
    printf("-32770 => %8d\n", under);

    // 지수형
    printf("%e \n", a); // 지수? 표현식 e
    printf("%f \n", c); // float 은 이렇게!
    printf("%Lf \n", b); // long double
    printf("%lf \n", a); // double의 표현식은 lf


    // char
    char ch = 'A';
    printf("%c \n", ch);
    printf("%d \n", ch);
    ch = '%';
    printf("%c \n", ch);
    printf("%% \n", ch);
    printf("\" \n", ch);

    double d = 3.14;
    float f = 3.14F; // 3.14f
    long double ld = 3.14L; // 3.14l


    printf("============== Q7 ============\n");
    char chTest = "\n";
    printf("%c \n", chTest);

    printf("============== Q7-1 ============\n");
    char chTest2 = '\n';
    printf("%c \n", chTest2);

    return 0;
}

int main(void) {

    // scanf 로 나이 계산 프로그램

    printf("====================== calculate(age) ======================\n");
    int birth_year = 2000;
    int current_year = 2024;

    printf("input birth year\n");
    //scanf("%d", &birth_year);
    printf("birthyear = %d, age = %d\n", birth_year, current_year-birth_year);

    myOverFlow();

    return 0;
}

