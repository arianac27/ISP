#include <iostream>
using namespace std;

class Impresora {
public:
	virtual void imprimir() = 0;
	virtual ~Impresora() {
	}
};

class Envio {
public:
	virtual void enviarCorreo() = 0;
	virtual ~Envio() {
	}
};

class Recibo : public Impresora {
public:
	void imprimir() override {
		cout<<"Imprimiendo... "<<endl;
	}
};
class Factura : Impresora, public Envio {
public:
	void imprimir() override {
		cout<<"Imprimiendo... "<<endl;
	}
	void enviarCorreo() override {
		cout<<"Enviando una factura por medio de correo... "<<endl;
	}
};

int main() {
	Recibo r;
	Factura f;
	
	r.imprimir();
	f.imprimir();
	f.enviarCorreo();
	
	return 0;
}
