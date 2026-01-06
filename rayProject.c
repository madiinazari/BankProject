#include <stdio.h>

int main() {
    int tedadnamayandegan, tedadraydahandeha;

    printf("Enter number of candidates: ");
    scanf("%d", &tedadnamayandegan);

    int rayha[tedadnamayandegan];
    for (int i = 0; i < tedadnamayandegan; i++)
        rayha[i] = 0;

    printf("Enter number of voters: ");
    scanf("%d", &tedadraydahandeha);

    int kodmelli[tedadraydahandeha];
    int zakhireshode = 0;

    for (int i = 0; i < tedadraydahandeha; i++) {
        int kod, ray, tekrar;

        printf("\nEnter national code: ");
        scanf("%d", &kod);

        tekrar = 0;
        for (int j = 0; j < zakhireshode; j++)
            if (kodmelli[j] == kod)
                tekrar = 1;

        if (tekrar) {
            printf("Already voted!\n");
            continue;
        }

        kodmelli[zakhireshode++] = kod;

        while (1) {
            printf("Enter candidate number : ", tedadnamayandegan);
            scanf("%d", &ray);
            if (ray >= 1 && ray <= tedadnamayandegan) {
                rayha[ray - 1]++;
                break;
            }
            printf("Invalid vote!\n");
        }
    }

    printf("\nNatije:\n");
    for (int i = 0; i < tedadnamayandegan; i++)
        printf("Namayande %d: %d ray\n", i + 1, rayha[i]);

    int barande = 0, t = 0;
    for (int i = 1; i < tedadnamayandegan; i++) {
        if (rayha[i] > rayha[barande]) {
            barande = i;
            t = 0;
        } else if (rayha[i] == rayha[barande]) t++;
    }

    if (t == 0)
        printf("\nBarande: Namayande %d\n", barande + 1);
    else
        printf("\nBarande nadarim \n");

    return 0;
}
