/***********************************************************************

        Switch Statements

************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    // Stores enemies State (b - busy, c - chase, h - hide)
    char State = 'c';

    // Holds string that player will express when he is asked how they are feeling
    string MoodComment = "";

    switch (State)
    {
    case 'b':
        MoodComment = "I am really busy right now, come back later...";
        break;

    case 'c':
        MoodComment = "I will  catch up to you - and when I do, watch out!";
        break;

    case 'h':
        MoodComment = "You will never find me, ha ha ha!";
        break;

    default:
        MoodComment = "I am not sure exactly how I feel?";
        break;
    }

    // Output mood of enemies
    cout << '\n' << MoodComment << '\n';

    return 0;

}
