#include "library.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int evaluar_boletos(vector <TBoleto> &vec2,TBoleto &boleto_alipi){
    int contador;
    for(int i=0; i=vec2.size(); i++){
        if(vec2[i] == boleto_alipi){ //miBoletoA.operator==(miBoletoB)
            contador++;
        }
    }
}

/*bool evaluar_fecha(Tfecha fecha1&, Tfecha fecha2&){
    if(fecha1 == fecha2){
        return true;
    }
}*/

bool fnbuscar(vector <TBoleto> &vec, function <bool (TBoleto&)> callback){

    for(int i=0; i<vec.size();i++){
        TBoleto ticket=vec[i];

        if(callback(ticket)==true){
            return true;
        }
    }
    return false;
}
