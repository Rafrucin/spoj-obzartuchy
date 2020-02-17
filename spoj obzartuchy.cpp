//SPOJ submission 24113058 (CPP)plaintext list.Status: AC, problem GLUTTON, contest SPOJPL.By ravruc(ravruc), 2019 - 07 - 20 21 : 13 : 01.
#include <iostream>

using namespace std;



int main()
{
    int ryj, ciast, ile, zje, totciast = 0, pudel;
    cin >> ile;
    for (int i = 1; i <= ile;i++)
    {
        cin >> ryj >> ciast;
        for (int j = 1; j <= ryj; j++)
        {
            cin >> zje;
            if (zje != 0)
                totciast = totciast + 86400 / zje;
        }
        if (ciast != 0)
        {
            pudel = totciast / ciast;
            if (totciast % ciast == 0)
                cout << pudel << endl;
            else cout << pudel + 1 << endl;
        }
        totciast = 0;
    }
    return 0;
}
