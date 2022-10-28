/***********************************************************************
 * Module:  Persona.cpp
 * Author:  Cesar Loor - Josue Villavicencio
 * Create: jueves, 27 de octubre de 2022
 * Modified: viernes, 28 de octubre de 2022 6:11:44
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"
#include <cstring>
#include <iostream>
#include "Persona.h"
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     string
////////////////////////////////////////////////////////////////////////

string Persona::getNombre(void)
{
   return Nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(string newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNombre(string newNombre)
{
   Nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     string
////////////////////////////////////////////////////////////////////////

string Persona::getApellido(void)
{
   return Apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(string newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setApellido(string newApellido)
{
   Apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getEdad()
// Purpose:    Implementation of Persona::getEdad()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getEdad(void)
{
   return Edad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setEdad(int newEdad)
// Purpose:    Implementation of Persona::setEdad()
// Parameters:
// - newEdad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setEdad(int newEdad)
{
   Edad = newEdad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getDiaNacimiento()
// Purpose:    Implementation of Persona::getDiaNacimiento()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getDiaNacimiento(void)
{
   return DiaNacimiento;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setDiaNacimiento(int newDiaNacimiento)
// Purpose:    Implementation of Persona::setDiaNacimiento()
// Parameters:
// - newDiaNacimiento
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setDiaNacimiento(int newDiaNacimiento)
{
   DiaNacimiento = newDiaNacimiento;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getMesNacimiento()
// Purpose:    Implementation of Persona::getMesNacimiento()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getMesNacimiento(void)
{
   return MesNacimiento;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setMesNacimiento(int newMesNacimiento)
// Purpose:    Implementation of Persona::setMesNacimiento()
// Parameters:
// - newMesNacimiento
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setMesNacimiento(int newMesNacimiento)
{
   MesNacimiento = newMesNacimiento;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getAno_Nacimiento()
// Purpose:    Implementation of Persona::getAno_Nacimiento()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getAno_Nacimiento(void)
{
   return Ano_Nacimiento;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setAno_Nacimiento(int newAno_Nacimiento)
// Purpose:    Implementation of Persona::setAno_Nacimiento()
// Parameters:
// - newAno_Nacimiento
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setAno_Nacimiento(int newAno_Nacimiento)
{
   Ano_Nacimiento = newAno_Nacimiento;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona(string Nombre, string Apellido, int Edad, int DiaNacimiento, int MesNacimiento, int AnoNacimiento)
// Purpose:    Implementation of Persona::Persona()
// Parameters:
// - Nombre
// - Apellido
// - Edad
// - DiaNacimiento
// - MesNacimiento
// - AnoNacimiento
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::Persona(string Nombre, string Apellido, int Edad, int DiaNacimiento, int MesNacimiento, int AnoNacimiento)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::~Persona()
// Purpose:    Implementation of Persona::~Persona()
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::~Persona()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::CalcularEdad()
// Purpose:    Implementation of Persona::CalcularEdad()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::CalcularEdad(void)
{
   // TODO : implement
   return 0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::ImprimirDatos()
// Purpose:    Implementation of Persona::ImprimirDatos()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::ImprimirDatos(void)
{
   // TODO : implement
}