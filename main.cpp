#include <iostream>

using namespace std;

void sortuj(int tablica[], int n)
{
    for(int j = 0; j < n; j++)
        for(int i = 1; i < n; i++)
            {
                if(tablica[i-1]<tablica[i])
                    swap(tablica[i-1], tablica[i]);
            }

        n--;

}

int main()
{

    int n;

    cout << "Ilosc elementow tablicy do posortowania: ";
    cin >> n;

    int tablica[n];

    for(int i = 0; i < n; i++)
        {
            cout << "Podaj liczbe nr " << i + 1 << ": ";
            cin >> tablica[i];
        }

    sortuj(tablica, n);

    for(int i = 0; i < n; i++)
        cout << tablica[i] << endl;



    return 0;
}
