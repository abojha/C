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
void sort_by_area(triangle* tr, int n) {
    int *ptr = malloc(sizeof(float));
	for(int i = 0; i < n; i++)
    {
        float a = (tr[i].a+tr[i].b+tr[i].c)/2;
        ptr[i] = (a*(a-tr[i].a)*(a-tr[i].b)*(a-tr[i].c));
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int temp;
                temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;

                temp = tr[j].a;
                tr[j].a = tr[j+1].a;
                tr[j+1].a = temp;

                temp = tr[j].b;
                tr[j].b = tr[j+1].b;
                tr[j+1].b = temp;

                temp = tr[j].b;
                tr[j].b = tr[j+1].b;
                tr[j+1].b = temp;
            }
        }
    }
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