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
    switch(getOperator(datos)){
        case("Add"):{   add(getNum1(datos), getNum2(datos)); break;}
        case("Sub"):{   sub(getNum1(datos), getNum2(datos)); break;}
        case("Mul"):{   mul(getNum1(datos), getNum2(datos)); break;}
        case("Div"):{   div(getNum1(datos), getNum2(datos)); break;}
        case("Exp"):{   exp(getNum1(datos), getNum2(datos)); break;}
        default: mostrarError("Operacion no soportada"):
    }
}