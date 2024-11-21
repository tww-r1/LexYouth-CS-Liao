// what else do you need to include (put it here):

#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main()
{
    // Initialize random seed (don't edit)
    srand(time(0));
    int notaList[100];
    for (int x : notaList)
    {
        x = rand() % 1000;
    }
    // you can edit the below stuff

    // TODO 1: Sort the Array using bubble sort (algorithm introduced in class or binary tree search)

    // TODO 2: Print me the average (very simple):

    // TODO 3: Print me the median (fell free to look these terms up online)

    // TODO 4: Print me the mode/ modes (ie numbers with the highest frequency)

    return 0;
}
