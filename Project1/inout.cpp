#pragma once
#include "inout.h"
#include <iostream>
#include <iomanip>
#include <string>

tDatos lectura() {
	tDatos datos;
	std::cin >> datos.operador;
	if (!(datos.operador == "Exit" || datos.operador == "Help")) { std::cin >> datos.num1 >> datos.num2; }
	return datos;
}

void mostrarSolucion(double sol) {
	std::cout << " :" << sol << std::endl;
}

void mostrarError(std::string error) {
	std::cout << error << std::endl;
}

void mensajeInicio() {
	std::cout << "------Calculadora nivel 2do de carrera------" << std::endl;
	std::cout << "Escribir el comando, el numero 1 y el numero 2" << std::endl;
	std::cout << std::setw(6) << "[Help] para mostrar comandos" << std::endl;
	std::cout << std::setw(6) << "[Exit] para apagar  calculadora" << std::endl;
}
void help() {
	std::cout << "Operaciones disponibles: " << std::endl;
	std::cout << "Help: muestra este mensaje de ayuda" << std::endl;
	std::cout << "Add: suma ambos numeros" << std::endl;
	std::cout << "Sub: resta el primero menos el segundo" << std::endl;
	std::cout << "Mul: mustiplica ambos numeros" << std::endl;
	std::cout << "Div: divide el primero por el segundo" << std::endl;
	std::cout << "Exp: eleva el primero al segundo" << std::endl;
}
double getNum1(tDatos datos) {
	return datos.num1;
}
double getNum2(tDatos datos) {
	return datos.num2;
}
std::string getOperator(tDatos datos) {
	return datos.operador;
}