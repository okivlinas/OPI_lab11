#include <iostream>
using namespace std;


string  weather;
int chooseWeather()
{
    cin>> weather;
    
    if (weather == "True" || weather == "true")// условие погоды
        cout << "go for a walk";
    
    else
    {
        cout << "do esay" << endl;
        cout << "eat" << endl;
        cout << "do essay";
    }

    return 0;
}
