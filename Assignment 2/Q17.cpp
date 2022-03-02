#include <iostream>
using namespace std;

int main()
{

    string table[9][18] = {{"H", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "He"},
                           {"Li", "Be", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "B", "C", "N", "O", "F", "Ne"},
                           {"Na", "Mg", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "Al", "Si", "P", "S", "Cl", "Ar"},
                           {"K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr"},
                           {"Rb", "Ar", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe"},
                           {"Cs", "Ba", " ", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn"},
                           {"Fr", "Ra", " ", "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Uut", "Fl", "Uup", "Lv", "Uus", "Uuo"},
                           {" ", " ", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", " "},
                           {" ", " ", "Ac", "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr", " "}};

    cout << "\t\t\t\t\t\t\t      ***** Periodic Table ***** \n\n";
    for (int i = 0; i < 9; i++)

    {
        cout << "        -------------------------------------------------------------------------------------------------------------------------------------------------\n";
        for (int j = 0; j < 18; j++)
        {
            cout << "\t|   " << table[i][j];
        }
        cout << "\t|" << endl;
    }
    cout << "        -------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    cout << endl;

    int AtomicNumber[9][18];
    int AtomicNo = 1;
    for (int i = 0; i < 9; i++)
    {
        if (i == 7)
            AtomicNo = 57;
        if (i == 8)
            AtomicNo = 89;

        for (int j = 0; j < 18; j++)
        {
            if ((i == 0 && (j > 0 && j < 17)) || (i == 1 && (j > 1 && j < 12)) || (i == 2 && (j > 1 && j < 12)) || (i == 7 && (j < 2 || j == 17)) || (i == 8 && (j < 2 || j == 17)))
            {
                AtomicNumber[i][j] = 0;
            }
            else if (i == 5 && j == 2)
            {
                AtomicNumber[i][j] = 0;
                AtomicNo = 72;
            }
            else if (i == 6 && j == 2)
            {
                AtomicNumber[i][j] = 0;
                AtomicNo = 104;
            }
            else
            {
                AtomicNumber[i][j] = AtomicNo++;
            }
        }
    }

    cout << "\t\t\t\t\t\t\t      ***** Atomic Number of Periodic Table ***** \n\n";
    for (int i = 0; i < 9; i++)

    {
        cout << "        -------------------------------------------------------------------------------------------------------------------------------------------------\n";
        for (int j = 0; j < 18; j++)
        {
            cout << "\t|" << AtomicNumber[i][j] << table[i][j];
        }
        cout << "\t|" << endl;
    }
    cout << "        -------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    cout << endl;

    // first conditon of question
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 18; j++)
        {
            int a = AtomicNumber[i + 1][j] - AtomicNumber[i][j];
            int b = AtomicNumber[i][j];
            float c = a / b;
            float per = c * 100;

            if (per > 15)
            {
                cout << "\t" << table[i][j] << " " << AtomicNumber[i][j] << endl;
            }
        }
    }
}