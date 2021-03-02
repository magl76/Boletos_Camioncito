#include "library.h"
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool fnbuscar(vector <TBoleto> &vec, function <bool (TBoleto&)> callback){

    for(int i=0; i<vec.size();i++){
        TBoleto ticket=vec[i];

        if(callback(ticket)==true){
            return true;
        }
    }
    return false;
}
