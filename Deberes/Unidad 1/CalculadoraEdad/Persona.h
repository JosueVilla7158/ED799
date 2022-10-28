/***********************************************************************
 * Module:  Persona.cpp
 * Author:  Cesar Loor - Josue Villavicencio
 * Create: jueves, 27 de octubre de 2022
 * Modified: viernes, 28 de octubre de 2022 6:11:44
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#if !defined(__Calculadora_Edad_Persona_h)
#define __Calculadora_Edad_Persona_h

class Persona
{
public:
   string getNombre(void);
   void setNombre(string newNombre);
   string getApellido(void);
   void setApellido(string newApellido);
   int getEdad(void);
   void setEdad(int newEdad);
   int getDiaNacimiento(void);
   void setDiaNacimiento(int newDiaNacimiento);
   int getMesNacimiento(void);
   void setMesNacimiento(int newMesNacimiento);
   int getAno_Nacimiento(void);
   void setAno_Nacimiento(int newAno_Nacimiento);
   Persona(string Nombre, string Apellido, int Edad, int DiaNacimiento, int MesNacimiento, int AnoNacimiento);
   ~Persona();
   int CalcularEdad(void);
   void ImprimirDatos(void);

protected:
private:
   string Nombre;
   string Apellido;
   int Edad;
   int DiaNacimiento;
   int MesNacimiento;
   int Ano_Nacimiento;


};

#endif