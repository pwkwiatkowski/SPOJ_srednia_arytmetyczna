#include <iostream>

using namespace std;

int main()
{
    int t,n,odpowiedz;
    float srednia,roznica,minimum,suma;

    cin>>t;

    int * wyniki;
    wyniki=new int [t];

    for(int i=1; i<=t; i++)
    {
        suma=0;
        cin>>n;
        int * tab;
        tab=new int [n];

        for(int j=0; j<n; j++)
        {
            cin>>tab[j];
            suma+=tab[j];
        }
        srednia=suma/n;

        minimum=tab[0]-srednia;
        if(minimum<0)
            minimum=minimum*(-1);

        odpowiedz=tab[0];

        for(int j=0; j<n; j++)
        {
            roznica=tab[j]-srednia;
            if(roznica<0)
                roznica=roznica*(-1);

            if(roznica<minimum)
            {
                minimum=roznica;
                odpowiedz=tab[j];
            }
        }

        delete [] tab;
        wyniki[i-1]=odpowiedz;
    }

    for(int i=0; i<t; i++)
    {
        cout<<wyniki[i]<<endl;
    }

    delete [] wyniki;

    return 0;
}
