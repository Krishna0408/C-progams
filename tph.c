#include<stdio.h>

void findCommon(int t[], int p[], int h[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (t[i] == p[j] && p[j] == h[k]) {
            printf("%d ", t[i]);
            i++;
            j++;
            k++;
        }
        else if (t[i] < p[j])
            i++;
        else if (p[j] < h[k])
            j++;
        else
            k++;
    }
}

int main()
{
    int t[1000], p[1000], h[1000];
    for (int i = 1; i < 1000; i++) {
        t[i] = (i * (i + 1)) / 2;
        p[i] = (i * (3 * i - 1)) / 2;
        h[i] = i * (2 * i - 1);
    }
    int n1 = 1000, n2 = 1000, n3 = 1000;
    findCommon(t, p, h, n1, n2, n3);
    return 0;
}
