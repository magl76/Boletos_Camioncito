#include <iostream>
#include <string>
#include <vector>
#include "library.h"

using namespace std;

int accionUsuario, flagAccionUsuario = 0, flagReservarBoleto = 0;
string origen, destino; /*nuevoOrigen, nuevoDestino, nuevaHora, nuevosMinutos, nuevoDia, nuevoMes, nuevoAnno;*/
vector <TBoleto> boletos;

bool FNCompararCiudades(TBoleto &p){
    cout << "Ingrese origen del boleto: ";
    cin >> origen;
    cout << "Ingrese destino del boleto: ";
    cin >> destino;

    if (p.origen == origen && p.destino == destino)
        return true;
    else
        return false;
}

int main() {
    TBoleto boletoA {"Puebla", "Tabasco", 21, 15, 28, Tmes::febrero, 2021,  1050};
    boletos.push_back(boletoA);
    TBoleto boletoB {"Oaxaca", "Tabasco", 21, 15, 28, Tmes::febrero, 2021, 1050};
    boletos.push_back(boletoB);

    while (flagAccionUsuario == 0){

        cout << "Boletos de Autobus" << endl;
        cout << "[0] Reservar un boleto" << endl;
        cout << "[1] Consultar boleto entre dos ciudades" << endl;
        cout << "[2] Salir" << endl;
        cout << "¿Qué desea realizar?: ";
        cin >> accionUsuario;

        switch (accionUsuario) {
            case 0:{
                while (flagReservarBoleto == 0){
                    /*cout << "Ingrese origen del boleto: ";
                    cin >> nuevoOrigen;
                    cout << "Ingrese destino del boleto: ";
                    cin >> nuevoDestino;
                    cout << "Ingrese el día de partida: ";
                    cin >> nuevoDia;
                    cout << "Ingrese la hora de partida: ";
                    cin >> nuevaHora;*/

                    if (FNLimiteVentas(boletos, boletoB) == 25)
                        cout << "Autobus lleno, eliga otro viaje." << endl;
                    else{
                        //Agregar nuevo boleto a vector
                        cout << "Boleto reservado exitosamente." << endl;
                        flagReservarBoleto = 1;
                    }
                }
                break;
            }

            case 1:{
                bool comparacion = fnbuscar(boletos, FNCompararCiudades);
                if (comparacion)
                    cout << "Un boleto entre éstas ciudades ya ha sido reservado." << endl;
                else
                    cout << "No hay boletos reservados entre éstas ciudades." << endl;
                break;
            }

            case 2:
                cout << "¡Gracias!";
                flagAccionUsuario = 1;
                break;

            default:
                cout << "Eliga otra opción.";
                break;
        }

    }

    return 0;
}
