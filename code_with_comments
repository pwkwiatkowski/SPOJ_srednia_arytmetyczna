#include <iostream>

using namespace std;

int main()
{
    int t,n,odpowiedz;
    float srednia,roznica,minimum,suma; //suma na poczatku rowna zero MUSI BYC TYPU FLOAT, bo inaczej obcina zera przy liczeniu sredniej
    cin>>t;

    int * wyniki;
    wyniki=new int [t];

    for(int i=1; i<=t; i++)
    {
        suma=0; //na poczatku lub koncu wykonania petli czyscimy sume, przypisujemy do niej zero, zeby w tej/nastepnej iteracji byla pusta
        cin>>n;
        int * tab;
        tab=new int [n];

        for(int j=0; j<n; j++)
        {
            cin>>tab[j];
            suma+=tab[j];
        }
        srednia=suma/n; //2.5
        //trzeba to bedzie zrobic na zasadzie znaleznienia najmniejszej wartosci, ta metoada na szukanie max/min co Zelent pokazal
        //leciec petla po elementach tablicy, ta roznica ktora wyjedzie z pierwszego elemetnu ustawic jako potencjaclne min, leciec po kolejnych
        //elementach i porownywac, ewentualnie nadpisac nowe min jezeli trzeba

        minimum=tab[0]-srednia;
        if(minimum<0)
            minimum=minimum*(-1); //1.5

        odpowiedz=tab[0]; //to bardzo wazne, musi byc! musimy ustalic poczatkowa wartosc odpowiedzi, ktora zostanie wyswietlona/zapisana w tablicy
        //wyniki; nie mozemy przypisywac odpowiedz=tab[j] tylko w ifie gdy roznica jest mniejsza od minimum (patrz na ifa nizej), bo gdy ani razu nie
        //zajdzie taki warunek, ze roznica jest od minimum, to do odpowiedz nic nie zostanie przypisane, a potem ze zmiennej odpowiedz nie zostanie
        //wyswietlone/zapisane do tablicy wyniki; stanie sie tak gdy uzytkownik wprowadzi takie same liczby, np. 3 3 3 3 albo 5 5 5 5
        //po to wlasnie ustalamy poczatkowa wartosc zmiennej odpowiedz, przypisujac jej zerowy element tablicy

        for(int j=0; j<n; j++)
        {
            roznica=tab[j]-srednia;
            if(roznica<0)
                roznica=roznica*(-1); //1.5

            if(roznica<minimum)
            {
                minimum=roznica;
                odpowiedz=tab[j];
            }

        }

        delete [] tab;
        wyniki[i-1]=odpowiedz;
        /*        cout<<srednia<<endl;
                cout<<roznica<<endl;
                cout<<minimum<<endl;
        */
    }
    for(int i=0; i<t; i++)
    {
        cout<<wyniki[i]<<endl;
    }
    delete [] wyniki;

    return 0;
}
