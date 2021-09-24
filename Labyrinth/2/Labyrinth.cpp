//Labyrinth: Znajdowanie drogi w labiryncie
//Pewien plik tekstowy zawiera plansze labiryntu zapisana jak ponizej. Caly labirynt jest
//otoczony murem a chodzic po nim mozna tylko poziomo lub pionowo. Napisz program
//labyrinth znajdujacy droge miedzy cyframi 1 i 2.
//Program powinien wczytac plansze ze standardowego wejscia, a nastepnie wypisac na standardowe
//wyjscie te sama plansze ze znaleziona droga zaznaczona gwiazdkami.

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

std::vector <std::string> labyrinth;


bool move(int row,int column)
{
    if (labyrinth [row][column ]=='2')
    {
        return true;
    }
    labyrinth [row][column]='#';
    for (int vertical = -1; vertical <= 1; vertical ++)
        for (int horizon = -1; horizon <= 1; horizon ++)
            {
            if ((vertical && horizon) || !(vertical || horizon))
                continue;
            if (labyrinth [row+vertical][column+horizon]!='@' && labyrinth [row+vertical][column+horizon]!='#')
                {
                if (move(row + vertical,column + horizon))
                    {
                    labyrinth [row][column]='*';
                    return true;
                    }
                }
            }
return false;
}

void print()
{
    int row,column;
    for (row = 0; row < labyrinth.size(); row ++)
    {
        for (column = 0; column < labyrinth[row].size(); column++)
        {
            if (labyrinth[row][column]=='1')
            {
                break;
            }
        }
        if (labyrinth[row][column]=='1')
        {
            break;
        }
    }
    if (!move(row,column))
    {
        std::cout<<"Nie ma przejscia"<<std::endl;
    }

    labyrinth[row][column]='1';

    for (row=0;row<labyrinth.size();row++)
    {
        for (column = 0; column < labyrinth[row].size(); column ++)
        {
            if (labyrinth[row][column]=='#')
            {
                labyrinth[row][column]=' ';
            }
        }
    }
    for (int row = 0; row < labyrinth.size(); row ++)
    {
        std::cout<<labyrinth[row]<<std::endl;
    }
}

int main ()
{
    std::string line;
    while (getline(std::cin,line))
    {
        labyrinth.push_back (line);
    }
    print();
return 0;
}
