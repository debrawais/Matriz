#include <iostream>
#include <conio.h>

using namespace std;

int main() { int m[100][100], f, c, i, j;

    cout<<"\t carga de la matriz de 3x3 \n";
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++){
            cout<<"Digite un valor ["<<i<<"]["<<j<<"]==";
            cin>>m[i][j];}

    cout<<"\t Mostrar la matriz original \n";
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++){
            cout>>m[i][j]<<"";}
            cout<<" \n";      }

    cout<<"\t Mostrar la matriz transpuesta \n";
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++){
            cout>>m[i][j]<<"";}
            cout<<" \n";      } getch();system("pause");}
