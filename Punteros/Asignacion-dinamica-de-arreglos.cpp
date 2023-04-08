#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void askfornotes();
void shownotes();

int numnot,*notes;

int main()
{
    askfornotes();
    shownotes();

    delete[] notes;

    getch();
    return 0;
}

void askfornotes() {
    cout<<"Type a number of notes: ";
    cin>>numnot;

    notes = new int[numnot];

    for (int i = 0; i < numnot; i++)
    {
        cout<<"Type a note: ";
        cin>>notes[i];
    }
}

void shownotes() {
    cout<<endl<<"Show Notes for usser"<<endl;
    for (int i = 0; i < numnot; i++)
    {
        cout<<notes[i]<<endl;
    }
}