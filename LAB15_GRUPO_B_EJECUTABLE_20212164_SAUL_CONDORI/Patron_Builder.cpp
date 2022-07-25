#include "iostream"
#include "vector"

using namespace std;

struct Pieza{
	string nombre;
	string color;
};
class Producto1 {
public:
	vector<Pieza> elementos;
	void Mostrar()const {
		cout<<"\n-----MOSTRANDO PIEZAS DEL CARRO:-----"<<endl;
		for (size_t i = 0; i < elementos.size(); i++) {
			cout<<"\nPieza: "<<elementos[i].nombre;
			cout<<"\tColor: "<<elementos[i].color;
			cout<<endl;
		}
		cout<<"\n-----AUTOMOVIL CONSTRUIDO-----"<<endl;
	}
};

class IBuilder {
public:
	virtual ~IBuilder() {}
	virtual void ProducirMotor() = 0;
	virtual void ProducirTimon() = 0;
	virtual void ProducirPuertas() = 0;
	virtual void ProducirLlantas() = 0;
	virtual void ProducirTecho() = 0;
	virtual void ProducirAsientos() = 0;
	virtual void ProducirRetrovisor() = 0;
	virtual void ProducirVidrios() = 0;
	virtual void ProducirLuces() = 0;
};

class BuilderEspecifico : public IBuilder {
private:
	Producto1* producto;
	string colorObj;
public:
	
	BuilderEspecifico() {
		this->Reset();
	}
	~BuilderEspecifico() {
		delete producto;
	}
	void Reset() {
		this->producto = new Producto1();
	}
	void color(string _pieza, string _color){
		Pieza *pieza = new Pieza();
		pieza->nombre = _pieza;
		pieza->color = _color;
		this->producto->elementos.push_back(*pieza);
	}
		void ProducirMotor() override {
			string colorObj;
			cout<<"Color del Motor: "; cin>>colorObj;
			color("Motor",colorObj);
		}
		void ProducirTimon() override {
			string colorObj;
			cout<<"Color del Timon: "; cin>>colorObj;
			color("Timon",colorObj);
		}
		void ProducirPuertas() override {
			string colorObj;
			cout<<"Color de las Puertas: "; cin>>colorObj;
			Pieza *pieza = new Pieza();
			color("Puertas",colorObj);
		}
		void ProducirLlantas() override {
			string colorObj;
			cout<<"Color de las Llantas: "; cin>>colorObj;
			color("Llantas",colorObj);
		}
		void ProducirTecho() override {
			string colorObj;
			cout<<"Color del Techo: "; cin>>colorObj;
			color("Techo",colorObj);
		}
		void ProducirAsientos() override {
			string colorObj;
			cout<<"Color de los Asientos: "; cin>>colorObj;
			color("Asientos",colorObj);
		}
		void ProducirRetrovisor() override {
			string colorObj;
			cout<<"Color del Retrovisor: "; cin>>colorObj;
			color("Retrovisor",colorObj);
		}
		void ProducirVidrios() override {
			string colorObj;
			cout<<"Color de los Vidrios: "; cin>>colorObj;
			color("Vidrios",colorObj);
		}
		void ProducirLuces() override {
			string colorObj;
			cout<<"Color de las Luces: "; cin>>colorObj;
			color("Luces",colorObj);
		}
		
		Producto1* GetProducto() {
			Producto1* resultado = this->producto;
			this->Reset();
			return resultado;
		}
};

class Director {
private:
	IBuilder* builder;
public:
	void set_builder(IBuilder* builder) {
		this->builder = builder;
	}
	void CrearProductoBasico() {
		
		this->builder->ProducirTimon();
		this->builder->ProducirPuertas();
		this->builder->ProducirLlantas();
		this->builder->ProducirAsientos();
		this->builder->ProducirMotor();
	}
	void CrearProductoCompleto() {
		
		this->builder->ProducirTimon();
		this->builder->ProducirPuertas();
		this->builder->ProducirLlantas();
		this->builder->ProducirAsientos();
		this->builder->ProducirMotor();
		this->builder->ProducirTecho();
		this->builder->ProducirLuces();
		this->builder->ProducirRetrovisor();
		this->builder->ProducirVidrios();
	}
};
void ClienteCode(Director& director)
{
	int opc;
	BuilderEspecifico* builder = new BuilderEspecifico();
	director.set_builder(builder);
	Producto1* p = builder->GetProducto();
	
	do{
		cout<<"\n-----MI AUTOMOVIL-----"<<endl;
		cout<<"\n1. Producir un automovil BASICO (Timon, Puertas, LLantas, Asiento, Motor)";
		cout<<"\n2. Producir un automovil COMPLETO (Timon, Puertas, LLantas, Asiento, Motor, Techo, Luces, Retrovisor, Vidrios)";
		cout<<"\n3. Producir un automovil PERSONALIZADO (Elegir piezas a su gusto)";
		cout<<"\n4.SALIR"<<endl;
		cout<<"\nIngrese una opcion valida: ";cin>>opc;
		
		if(opc==1){
			director.CrearProductoBasico();
			p = builder->GetProducto();
			p->Mostrar();
			delete p;
		}
		
		else if(opc==2){
			director.CrearProductoCompleto();
			p = builder->GetProducto();
			p->Mostrar();
			delete p;
		}
		
		else if(opc==3){
			int _opc;
			do{
				cout<<"\n1.Producir Motor";
				cout<<"\n2.Producir Timon";
				cout<<"\n3.Producir Puertas";
				cout<<"\n4.Producir Llantas";
				cout<<"\n5.Producir Techo";
				cout<<"\n6.Producir Asientos";
				cout<<"\n7.Producir Retrovisor";
				cout<<"\n8.Producir Vidrios";
				cout<<"\n9.Producir Luces";
				cout<<"\n10.Terminar Construccion"<<endl;
				cout<<"\nSelecciones una opcion valida: "; cin>>_opc;
				
				if(_opc == 1){
					builder->ProducirMotor();
				}
				else if(_opc == 2) {
					builder->ProducirTimon();
				}
				else if(_opc== 3) {
					builder->ProducirPuertas();
				}
				else if(_opc== 4) {
					builder->ProducirLlantas();
				}
				else if(_opc== 5) {
					builder->ProducirTecho();
				}
				else if(_opc== 6) {
					builder->ProducirAsientos();
				}
				else if(_opc== 7) {
					builder->ProducirRetrovisor();
				}
				else if(_opc== 8) {
					builder->ProducirVidrios();
				}
				else if(_opc== 9) {
					builder->ProducirLuces();
				}
				else if(_opc== 10) {
					cout<<"\nTerminando Automovil"<<endl;
				}
				else {
					cout<<"\nPieza no encontrada"<<endl;
				}
				
			}while(_opc!=10);
			p = builder->GetProducto();
			p->Mostrar();
			delete p;
			
		}else if(opc==4){
			
			cout<<"\nFIN PROGRAMA"<<endl;
			
		}else{
			
			cout<<"\nOPCION INCORRECTA"<<endl;
		}
		
	}while(opc!=4);
	
	
	delete builder;
}

int main() {
	
	Director* director = new Director();
	ClienteCode(*director);
	delete director;
	return 0;
	
}
