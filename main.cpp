#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

int liczba, strzal, ile_prob=0;

int main()

{
    cout << "welcome. I am junior software engineer.Shall we play a game!? "<<endl;
    srand(time(NULL));
    cout <<"But first... "<<endl;
    system("pause");

    cout<< "I will erase your data"<<endl;
    Sleep(1000);
    for (int i=3; i>=0; i--)
    {
    Sleep(1000);
    system("cls");
    cout << i<< endl;
    }
    cout<< "HAHA"<<endl;
    cout<< "I just kidding"<<endl <<endl;
    cout<<"I figured a number in the range 1...100" << endl;

    liczba = rand()%100+1;


    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"Guess what is the number (it's your "<<ile_prob<<" try): ";
        cin>>strzal;

        if(strzal==liczba)
        cout<< "GREAT! YOU WON in "<<ile_prob<<" try"<<endl;

        else if(strzal<liczba)
        cout<< "It's not enough"<<endl;

        else if(strzal>liczba)
        cout<< "It's too much"<<endl;
    }
        cout<<"                                    Thank you. Wrote by Krzysztof"<<endl;
    getchar(); getchar();
    return 0;
}
