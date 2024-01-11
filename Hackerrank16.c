#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double calculate_area(int a, int b, int c)
{
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


int compare_areas(const void *a, const void *b)
{
    double areaA = calculate_area(((triangle *)a)->a, ((triangle *)a)->b, ((triangle *)a)->c);
    double areaB = calculate_area(((triangle *)b)->a, ((triangle *)b)->b, ((triangle *)b)->c);

    if (areaA < areaB)
        return -1;
    else if (areaA > areaB)
        return 1;
    else
        return 0;
}

void sort_by_area(triangle *tr, int n)
{
    qsort(tr, n, sizeof(triangle), compare_areas);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}