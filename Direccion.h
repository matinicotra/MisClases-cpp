#ifndef DIRECCION_H_INCLUDED
#define DIRECCION_H_INCLUDED

#pragma once
#include <cstring>

class Domicilio {
    private:
        char _calle[20];
        int _altura;
        int _piso;
        int _departamento;
        char _localidad[20];
        char _codigoPostal[5];
        char _provincia[20];


    public:
        Domicilio(const char *c, int a, int p, int d, const char* l, const char *cp, const char *pcia) {
            strcpy(_calle, c);
            _altura = a;
            _piso = p;
            _departamento = d;
            strcpy(_codigoPostal, cp);
            strcpy(_localidad, l);
            strcpy(_provincia, pcia);
        }

        void setCalle(const char *c) { strcpy(_calle, c); }
        void setAltura(int a) { _altura = a; }
        void setPiso(int a) { _altura = a; }
        void setDepartamento(int a) { _altura = a; }
        void setLocalidad(const char *l) { strcpy(_localidad, l); }
        void setCodigoPostal(const char *cp) { strcpy(_codigoPostal, cp); }
        void setProvincia(const char *pcia) { strcpy(_calle, pcia); }

        const char *getCalle() { return _calle; }
        int getAltura() { return _altura; }
        int getPiso() { return _piso; }
        int getDepartamento() { return _departamento; }
        const char *getLocalidad() { return _localidad; }
        const char *getCodigoPostal() {return _codigoPostal; }
        const char *getProvincia() { return _provincia; }

        void Cargar() {
            cout << "Calle: ";
            cargarCadena(_calle, 19);
            cout << "Altura: ";
            cin >> _altura;
            cout << "Piso: ";
            cin >> _piso;
            cout << "Departamento: ";
            cin >> _departamento;
            cout << "Localidad: ";
            cargarCadena(_localidad, 19);
            cout << "Codigo Postal: ";
            cargarCadena(_codigoPostal, 4);
            cout << "Provincia: ";
            cargarCadena(_provincia, 19);
        }

        void Mostrar() {
            cout << "Calle: " << _calle << endl;
            cout << "Altura: " << _altura << endl;
            cout << "Piso: " << _piso << endl;
            cout << "Departamento: " << _departamento << endl;
            cout << "Localidad: " << _localidad << endl;
            cout << "Codigo Postal: " << _codigoPostal << endl;
            cout << "Provincia: " << _provincia << endl;
        }
};



#endif // DIRECCION_H_INCLUDED
