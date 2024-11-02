#include <iostream>
#include <string>

// system memory and implementation (mono-directional cache)
/*

TODO Primary: (ignore the non-primary TODO's for now)
no need to run, but create a boolean array of 100 elements. Set all even indices with as true. Shift upward (in terms of index #) (no need to refill the empty first bit)  3 times.
Finally, apply and xor operation on the bit string and the boolean array called basic (fell free to searchi it up; I suggest using w3.) and convert the final array into binary and print it out
*/
int primary()
{
    bool basic[100];     // for xor
    for (bool x : basic) // only for setting up bool array basic
    {
        x = false;
    }
    // code below:
}

// system memory and implementation

/*TODO 1 Create  an array of bool's / booleans of 100 x 8 (ie, [32][8], which is 32 of 8 bits (1 or 0) or 1 byte)
(in main unless explicitly said otherwise)

TODO 2 write in the tagFinder function that finds a chunk (number of bytes plus tag byte infront )
*/

int tagFinder(bool (&mem)[]) // searches for a tag (one byte)
{
}

int del(bool (&mem)[], int pos) // deletes some memory
{
}

int allocate(bool (&mem)[], int bytePos) // for storing new variables and making intialisng
{
}

int get(bool (&mem)[], int pos) // get and interpret that value of a allocated chunk
{
}

int move(bool (&mem)[]) // move a chunk to another empty area (paraeters aren't full determined)
{
}

int commandLineInterface(std::string (&opt)[5]) // don't edit!!!
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << opt[i] << " : " i << std::endl;
    }
    int buff;
    std::cout << "Enter a choice (only 32 bytes): " << std::endl;
    std::cin >> buff;

    if (buff < 4)
        return 0;
    return buff;
}

int main()
{
    int choice;
    std::string options[] = {" Quit", "Move", "New", "Delete", "Get"}; // don't delete

    while ((choice = commandLineInterface(options)) > 0)
    {
        switch (choice)
        {
        case 0:
            std::cout << "\nThanks For Using ALLOCATOR! Goodbye...\n";
            break;
        case 1:
            // missing
            break;
        case 2:
            // missing
            break;
        case 3:
            // missing
            break;
        case 4:
            // missing
            break;
        }
    }
}
