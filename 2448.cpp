#include <stdio.h>
void trip(int, int, int, char**);
int main()
{
    char** display;
    int size;
    scanf("%d",&size);

    display = new char*[size];
    for(int i = 0; i<size; i++)
    {
        display[i] = new char[(size/3)*6-1];
        for(int j = 0; j < (size/3)*6-1; j++)
        {
            display[i][j] = ' ';
        }
    }

    trip(size, 0, size-1, display);

    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j < (size/3)*6-1; j++)
        {
            printf("%c", display[i][j]);
        }
        printf("\n");
    }
}

void trip(int size, int x, int y, char** display)
{
    if(size>3)
    {
        trip(size/2,x,y,display);
        trip(size/2, x+size/2, y-size/2, display);
        trip(size/2, x+size/2, y+size/2, display);
    }
    else
    {
        display[x][y] = '*';
        display[x+1][y-1] = '*';
        display[x+1][y+1] = '*';
        display[x+2][y-2] = '*';
        display[x+2][y-1] = '*';
        display[x+2][y] = '*';
        display[x+2][y+1] = '*';
        display[x+2][y+2] = '*';
        return;
    }
}