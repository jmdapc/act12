#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo arreglo;
    arreglo.insertar_final("espero");
    arreglo.insertar_final("obtener");
    arreglo.insertar_final("cien");
    arreglo.insertar_final("en");
    arreglo.insertar_final("esta");
    arreglo.insertar_final("practica");
    arreglo.insertar_final("jaja");
    arreglo.insertar_final("wuu");
    arreglo.insertar_inicio("profe,");
    arreglo.insertar_inicio("hola");
    for(size_t i=0;i<arreglo.size();i++)
    {
        cout<< arreglo[i] << " ";
    }
    return 0;
}