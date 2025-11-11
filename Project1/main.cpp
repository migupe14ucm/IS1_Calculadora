#include "inout.h";
#include "operations.h":

int main() {
    tDatos operacion;
    mensajeInicio();
    operacion = lectura();
    while (getOperator(operacion) != "Exit") {
        execute(operacion);
        operacion = lectura();
    }
    return 0;
}