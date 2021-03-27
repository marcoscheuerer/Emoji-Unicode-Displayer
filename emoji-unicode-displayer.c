#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include "my_color.h"
#include "my_emojis.h"

#define clear() printf("\x1b[2J\x1b[H")

int main(void)
{
    setlocale(LC_ALL, "");
    int i;

    clear();

    printf("Unicodes for Smiley-Emojis\n"
           "==========================\n\n");
    printf("This program shows you a table of emojis. You can use them on a console.\n");
    printf("Usage: <Ctrl> + <Shift> + <U> [Unicode] <RETURN>\n\n");

    for(i = 1; i <= sizeof(SMILEYS) / sizeof(*SMILEYS); i++)
    {
        printf("%ls ", SMILEYS[i-1]);
        printf("%s(U+%lx)%s", BLUE, *SMILEYS[i-1], DEFAULT);
        if (i % 5 == 0)
            printf("\n\n");
        else
            printf("\t");
    }

    printf("\n");

    return 0;
}
