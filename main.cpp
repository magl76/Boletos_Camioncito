#include <iostream>
#include <string>
#include <vector>
#include "library.h"

using namespace std;

int accionUsuario, flagAccionUsuario = 0;
string origen, destino;
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
    TBoleto boletoA {"Puebla", "Tabasco", {28, Tmes::febrero, 2021, 21, 15}, 1050};
    boletos.push_back(boletoA);
    TBoleto boletoB {"Oaxaca", "Tabasco", {28, Tmes::febrero, 2021, 21, 15}, 1050};
    boletos.push_back(boletoB);

    while (true){
        if (flagAccionUsuario == 1)
            break;

        cout << "Boletos de Autobus" << endl;
        //cout << "[0] Comprar un boleto" << endl;
        cout << "[1] Consultar boleto entre dos ciudades" << endl;
        cout << "[2] Salir" << endl;
        cout << "¿Qué desea realizar?: ";
        cin >> accionUsuario;

        switch (accionUsuario) {
            //¿Agregar una nueva estructura de boleto al vector? (preguntar en clase)
            /*case 0:
              cout << "Ingrese origen del boleto: ";
              cin >> nuevo_origen;
              cout << "Ingrese destino del boleto: ";
              cin >> nuevo_destino;
              cout << "Ingrese el día de partida: ";
              cin >> nuevo_dia;
              cout << "Ingrese el mes de partida: ";
              cin >> nuevo_mes;
              cout << "Ingrese el año de partida: ";
              cin >> nuevo_año;
              cout << "Ingrese la hora de partida: ";
              cin >> nueva_hora;
              cout << "Ingrese los minutos de partida: ";
              cin >> nuevos_minutos;

              break;*/

            case 1:{
                bool comparacion = fnbuscar(boletos, FNCompararCiudades);
                if (comparacion)
                    cout << "El boleto entre estas ciudades ha sido vendido." << endl;
                else
                    cout << "Boleto disponible." << endl;
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
