
#include <cstdio>
#include <cstring>

using namespace std;

int vetor[10001];

int main()
{
    int n, m, t, cont;

    while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        memset(vetor, 0, sizeof(vetor));
        cont = 0;

        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &t);
            vetor[t]++;
            if (vetor[t] == 2)
                cont++;
        }

        printf("%d\n", cont);
    }

    return 0;
}


