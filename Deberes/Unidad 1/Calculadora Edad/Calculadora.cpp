/*
UFA-ESPE
Cesar Loor - Josue Villavicencio
27/10/2022
27/10/2022
Calculadora de edad
3er nivel 7999
*/
    
    #include <stdlib.h>
	#include <iostream>
    #include <cstdlib>
    using namespace std;
int main (void)
{
    int present_year, birth_year, present_day, birth_day, age;
    int present_month, birth_month;
    cout << "Ingrese el anio actual: ";
    cin >> present_year;
    cin.get();
    cout << "Ingrese su anio de nacimiento: ";
    cin >> birth_year;
    cin.get();
    cout << "Ingrese que dia es hoy: ";
    cin >> present_day;
    cin.get();
    cout << "Ingrese el dia de su nacimiento: ";
    cin >> birth_day;
    cin.get();
    cout << "Ingrese el mes actual: ";
    cin >> present_month;
    cin.get();
    cout << "Ingrese su mes de nacimiento: ";
    cin >> birth_month;
    cin.get();
    age=present_year-birth_year;
    if(birth_month>present_month||(birth_month==present_month&&birth_day>present_day))
        age=age-1;
    cout << "Su edad es : " << age << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}