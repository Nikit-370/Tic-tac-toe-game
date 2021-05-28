#include <stdio.h>
#include <conio.h>

char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int winner();
void design();

int main()
{
    int player = 1, i, ch;
    char mark;

    do
    {
        design();

        if (player % 2)
        {
            player = 1;
        }
        else
        {
            player = 2;
        }

        printf("\n==>Player %d, enter a number:  ", player);
        scanf("%d", &ch);

        if (player == 1)
        {
            mark = 'X';
        }
        else
        {
            mark = 'O';
        }

        if (ch == 1 && box[1] == '1')
            box[1] = mark;

        else if (ch == 2 && box[2] == '2')
            box[2] = mark;

        else if (ch == 3 && box[3] == '3')
            box[3] = mark;

        else if (ch == 4 && box[4] == '4')
            box[4] = mark;

        else if (ch == 5 && box[5] == '5')
            box[5] = mark;

        else if (ch == 6 && box[6] == '6')
            box[6] = mark;

        else if (ch == 7 && box[7] == '7')
            box[7] = mark;

        else if (ch == 8 && box[8] == '8')
            box[8] = mark;

        else if (ch == 9 && box[9] == '9')
            box[9] = mark;

        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = winner();

        player++;
    } while (i == -1);

    design();

    if (i == 1)
    {
        printf("==>>Congratulations, #Player %d wins", --player);
    }
    else
    {
        printf("==>>Oops!!!! Game draw.\n");
        printf("Try again......\n");
    }
    getch();

    return 0;
}

int winner()
{
    if (box[1] == box[2] && box[2] == box[3])
        return 1;

    else if (box[4] == box[5] && box[5] == box[6])
        return 1;

    else if (box[7] == box[8] && box[8] == box[9])
        return 1;

    else if (box[1] == box[4] && box[4] == box[7])
        return 1;

    else if (box[2] == box[5] && box[5] == box[8])
        return 1;

    else if (box[3] == box[6] && box[6] == box[9])
        return 1;

    else if (box[1] == box[5] && box[5] == box[9])
        return 1;

    else if (box[3] == box[5] && box[5] == box[7])
        return 1;

    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
             box[4] != '4' && box[5] != '5' && box[6] != '6' &&
             box[7] != '7' && box[8] != '8' && box[9] != '9')

        return 0;
    else
        return -1;
}

void design()
{

    printf("\n\n\t\"!***~~~~ Tic Tac Toe ~~~~***!\"\n\n");

    printf("\t\t  Player 1 is X\n");
    printf("\t\t  Player 2 is O\n\n");

    printf("\t\t*****************\n");
    printf("\t\t|    |     |    |\n");
    printf("\t\t| %c  |  %c  | %c  |\n", box[1], box[2], box[3]);
    printf("\t\t|____|_____|____|\n");
    printf("\t\t|    |     |    |\n");
    printf("\t\t|  %c |  %c  | %c  |\n", box[4], box[5], box[6]);
    printf("\t\t|____|_____|____|\n");
    printf("\t\t|    |     |    |\n");
    printf("\t\t|  %c |  %c  | %c  |\n", box[7], box[8], box[9]);
    printf("\t\t|    |     |    |\n");
    printf("\t\t*****************\n\n");
}
