#include <stdio.h>
#include "listgame.h"

void LISTGAME(TabStr *T)
{
    printf("Berikut adalah daftar game yang tersedia\n");
    int i;
    for (i = 0; i < T->Neff; i++)
    {
        printf("\t %d. %s\n", i + 1, T->TI[i]);
    }
    printf("\n");
}
/*
    Menampilkan daftar game yang tersedia
*/