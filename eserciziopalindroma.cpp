#include <iostream>
#include <string>

using namespace std;

bool palindroma(string parola)
{
    bool risultato = true;

    int k = parola.length() - 1;

    for (int i = 0; i < parola.length(); i++)
    {
        cout << parola[i] << " == " << parola[k] <<endl ;
        if (parola[i] == parola[k])
        {
            k--;
        }

        else
        {
            return false;
            break;
        } 
        
    }  cout << parola << endl;
        return risultato; }

    int main()
    {
        string parola = "yamamay";

        
        if (palindroma(parola))
        {
            cout << "La parola in questione è palindroma" << endl;
        }
        else
        {
            cout << "La parola in questione non è palindroma" << endl;
        }
    }