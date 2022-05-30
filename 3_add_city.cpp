#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>

class country
{
private:
    char name[30];
    int dist;

public:
    
    country(char *a, int b)
    {
        strcpy(name, a);
        dist = b;
    }

    

    friend void AddDistance(country A, country B);
};

void AddDistance(country A, country B)
{
    int di;
    di = A.dist + B.dist;
    cout << "Distance from nepal to japan to italy is :" << di << endl;
}

int main()
{
    country F("japan", 324);
    country S("italy", 234);

    AddDistance(F, S);

    return 0;
}