#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int kodas;
    cout<<"Iveskite zmogu kuris turi isvaziuoti i sibira, pasirinkimai yra tokie - 1. adomas, 2. dominykas, 3. montvis" << endl;
    cin>>kodas;

    switch (kodas)
    {
    case 3:
        cout << "Montvis jau sibire!";
        break;
    case 2:
        cout << "Klaida! Sis zmogus negali buti istremtas!";
        break;
    case 1:
        cout << "Klaida! Sis zmogus negali buti istremtas!";
        break;
    default:
        cout << "Klaida, tokio pasirinkimo net nera!";;
        break;
    }

    while (kodas>=0001&&kodas<=5000);

    return 0;

}
