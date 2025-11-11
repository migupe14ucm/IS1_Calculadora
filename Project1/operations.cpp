#include "operations.h";
#include <cmath>;

double add(double num1, double num2){
    return num1 + num2;
}
double sub(double num1, double num2){
    return num1 - num2;
}
double mul(double num1, double num2){
    return num1 * num2;
}
double div(double num1, double num2){
    return num1 / num2;
}
double exp(double num1, double num2){
    return pow(num1, num2);
}
double execute(tDatos datos){
    std:: string parse = getOperator(datos);
    double sol = 0;
    if (parse == "Add") {
        sol = add(getNum1(datos), getNum2(datos));
    }
    else if (parse == "Sub") {
        sol = sub(getNum1(datos), getNum2(datos));
    }
    else if (parse == "Mul") {
        sol = mul(getNum1(datos), getNum2(datos));
    }
    else if (parse == "Div") {
        sol = div(getNum1(datos), getNum2(datos));
    }
    else if (parse == "Exp") {
        sol = exp(getNum1(datos), getNum2(datos));
    }
    else {
        mostrarError("Comando no identificado");
    }
    return sol;
}