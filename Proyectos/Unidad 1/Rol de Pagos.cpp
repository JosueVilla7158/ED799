#include <iostream>
using namespace std;

int main()
{
    // Los descuentos en porcentaje
    double porcentajeDescuentoSeguroSocial = 9.75;
    string nombre;
    string cedula;
    double horasTrabajadas;
    double pagoPorHora;
    cout << "Calculo de salario\n Bienvenido\n";
    cout << "\nNombre del empleado:(Primer Nombre) ";
    cin >> nombre;
    cout << "\n Cedula: ";
    cin >> cedula;
    cout << "\n Horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "\n Pago por hora: ";
    cin >> pagoPorHora;
    // Realizar cálculos
    double salarioBruto = pagoPorHora * horasTrabajadas;
    // Descuentos
    double descuentoSeguroSocial = (porcentajeDescuentoSeguroSocial * salarioBruto) / 100;
    // Deducciones
    double totalDeducciones = descuentoSeguroSocial;
    // Restamos al salario bruto
    double sueldoNeto = salarioBruto - totalDeducciones;
    // Imprimir los valores
    cout << "Empleado: " << nombre << endl;
    cout << "Cedula: " << cedula << endl;
    cout << "Horas trabajadas: " << horasTrabajadas << endl;
    cout << "Pago por hora: " << pagoPorHora << endl;
    cout << "Salario bruto: " << salarioBruto << endl;
    cout << "Descuento por seguro social: " << descuentoSeguroSocial << endl;
    cout << "Total deducciones: " << totalDeducciones << endl;
    cout << "Sueldo neto: " << sueldoNeto << endl;
    return 0;
}