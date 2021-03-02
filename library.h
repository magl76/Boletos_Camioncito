#ifndef BOLETOS_CAMIONCITO_LIBRARY_H
#define BOLETOS_CAMIONCITO_LIBRARY_H

#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

enum Tmes{enero, febrero, marzo, abril ,mayo, junio, julio, agosto, septiembre, octubre, noviembre, diciembre};

struct Tfecha{
    short dia;
    Tmes mes;
    unsigned anno;
    short hora, min;
};

struct TBoleto{
    string origen, destino;
    Tfecha fecha;
    int precio;
};

bool fnbuscar(vector <TBoleto> &vec, function <bool (TBoleto&)> callback);//funcion que recibe UN VECTOR POR REFERENCIA LLAMADO vec, y una funcion tipo BOOL QUE RECIBE COMO PARÀMETRO UN TTICKET POR REFERENCIA Y SE LLAMA CALLBACK
//esta funcion està lista para recibir cualquier funcion del tipo lambda, la cual serà definida funcionamiento

#endif //BOLETOS_CAMIONCITO_LIBRARY_H
