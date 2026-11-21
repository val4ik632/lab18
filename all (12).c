#include <stdio.h>

typedef struct {
    int width;
    int height;
} Rectangle;

int area(Rectangle r) {
    return r.width * r.height;
}

int perimeter(Rectangle r) {
    return 2 * (r.width + r.height);
}

int main(void) {
    Rectangle rect;

    if (scanf("%d %d", &rect.width, &rect.height) != 2) {
        printf("Ошибка: введите два целых числа\n");
        return 0;
    }

    if (rect.width < 1 || rect.width > 1000 || rect.height < 1 || rect.height > 1000) {
        printf("Неверные данные: размеры должны быть от 1 до 1000\n");
        return 0;
    }

    printf("Площадь = %d\n", area(rect));
    printf("Периметр = %d\n", perimeter(rect));

    return 0;
}
