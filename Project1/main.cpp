#include "inout.h";
#include "operations.h":

int main() {
    tDatos operacion;
    mensajeInicio();
    operacion = lectura();
    std :: string op = getOperator(operacion);
    while (op != "Exit") {
        if (op == "Help") {
            execute(operacion);
        }
        else {
            mostrarSolucion(execute(operacion));
        }
        operacion = lectura();
        op = getOperator(operacion);
    }
    return 0;
}