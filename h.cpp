#include <iostream>
using namespace std;

int calcola(int arr[], int len, int tipo)
{
    int calcolatore = 0;
    int pari = 0;
    int dispari = 0;
    for (int i = 0; i <= len; i++)
    {

        if (i % 2 == 0)
        {
            pari += i;
        }
        else
        {
            dispari += i;
        }
    }
    if(tipo==0){
        calcolatore=pari;

    }else{
        calcolatore=dispari;
    }

    
  /*  int i = 0;
    while (i <= len)
    {
        if (i % 2 == 0)
        {
            pari += i;
        }
        else
        {
            dispari += i;
        }

        i++;
    }

    */

        return calcolatore;
}

int main()

{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(arr[-1]);

    /* 0 = pari, 1 = dispari */
    int sommapari = calcola(arr, len, 0);
    int sommadispari = calcola(arr, len, 1);
    cout << "calcola somma: " << sommapari << endl;
    cout << "calcola somma: " << sommadispari << endl;

}