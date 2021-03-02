#ifndef BOLETOS_CAMIONCITO_LIBRARY_H
#define BOLETOS_CAMIONCITO_LIBRARY_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

enum Tmes{enero, febrero, marzo, abril ,mayo, junio, julio, agosto, septiembre, octubre, noviembre, diciembre};

/*struct Tfecha{
    short dia;
    Tmes mes;
    unsigned anno;
    short hora, min;
};*/

struct TBoleto{
    string origen, destino;
    short hora, min;
    int dia;
    Tmes mes;
    int anno;
    int precio;
};

bool fnbuscar(vector <TBoleto> &vec, function <bool (TBoleto&)> callback);//funcion que recibe UN VECTOR POR REFERENCIA LLAMADO vec, y una funcion tipo BOOL QUE RECIBE COMO PARÀMETRO UN TTICKET POR REFERENCIA Y SE LLAMA CALLBACK
//esta funcion està lista para recibir cualquier funcion del tipo lambda, la cual serà definida funcionamiento

//sobrecarga de operadores para boleto y fecha
bool operator==(TBoleto&, TBoleto&);
//bool operator==(Tfecha&, Tfecha&);

//definicion de sobrecarga para boleto y fecha
/*bool Tfecha::operator==(Tfecha & f2){
    return dia==f2.dia && mes==f2.mes && anno==f2.anno && hora==f2.hora && min==f2.min;
}*/
bool TBoleto::operator==(TBoleto & b2){
    return origen==b2.origen && destino==b2.destino &&  dia==b2.dia && mes==b2.mes && anno==b2.anno && hora==b2.hora && min==b2.min;
}

#endif //BOLETOS_CAMIONCITO_LIBRARY_H
