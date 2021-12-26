#include<iostream>

using namespace std;

int main()
{
    int red,kolona,brisikolona,p=0;

    cout << "Ve molime vnesete golemina na red : ";
    cin >> red;
    cout << "Ve molime vnesete golemina na kolona : ";
    cin >> kolona;

    int a[red][kolona];

    cout << "Vnesete gi elementite : " << endl;
    for(int i=0; i<red; i++)
    {
        for(int j=0; j<kolona; j++)
        {
            cout << "Ve molime vnesete go [" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    for(int i=0; i<red; i++)
    {
        for(int j=0; j<kolona; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    cout << "Vnesete kolona koja sakate da ja izbrisete(programski koloni pocnuvaat od 0) : ";
    cin >> brisikolona;

    for(int i=0; i<red; i++)
    {
        for(int j=0; j<kolona; j++)
        {

            if(i!=0 & j!=brisikolona)
            {
                cout << a[i][j] << " ";
                //Ovoj if ciklus e samo za da gi prikaze kako matrica (vo posebni redovi)
                if(p==kolona-2)
                {
                    p=0;
                    cout << endl;
                }
                else
                {
                    p++;
                }

            }
        }
    }


    return 0;
}
