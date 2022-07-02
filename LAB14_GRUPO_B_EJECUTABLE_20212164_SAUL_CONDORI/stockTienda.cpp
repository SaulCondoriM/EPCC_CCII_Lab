#include <iostream>
using namespace std;

class stockTienda{
private:
	
	stockTienda *siguiente;
	
	string nombre;
	int codigo;
	float precio;
	int stock;
	
	
public:
	
	stockTienda(){}
	
	void darAlta(string, int, float, int, stockTienda&);
	void darBaja(int, stockTienda&);
	void buscarProductoPorCodigo(int, stockTienda&);
	void buscarProductoPorNombre(string, stockTienda&);
	void modificarProducto(string, int, float, int, stockTienda&);
	void Mostrar(stockTienda&);
	

	
};

void stockTienda::darAlta(string _nombre, int _codigo, float _precio, int _stock, stockTienda &producto){
	stockTienda *temp = new stockTienda;
	stockTienda *temp2 = new stockTienda;
	
	temp->codigo = _codigo;
	temp->nombre = _nombre;
	temp->precio = _precio;
	temp->stock = _stock;
	temp->siguiente = NULL;
	
	if(producto.siguiente == NULL){
		producto.siguiente = temp;
	}
	else{
		temp2 = producto.siguiente;
		while(temp2->siguiente != NULL){
			temp2 = temp2->siguiente;
		}
		temp2->siguiente = temp;
	}
}

void stockTienda::darBaja(int _codigo, stockTienda &producto){
	stockTienda *temp = &producto;
	stockTienda **temp2 = &temp;
	while(temp != NULL){
		if(temp->codigo == _codigo){
			temp->codigo = _codigo;
			temp->precio = 0;
			temp->stock = 0;
		}
		temp = temp->siguiente;
	}
	
}

void stockTienda::buscarProductoPorCodigo(int _codigo, stockTienda &producto){
	stockTienda *temp=&producto;
	while(temp != NULL){
		if(temp->codigo == _codigo){
			cout<<"\nEl producto \"" << temp->nombre <<"\" SI se encontro";
			break;
		}
		else{
			temp = temp->siguiente;
		}
	}
}
void stockTienda::buscarProductoPorNombre(string _nombre, stockTienda &producto){
	stockTienda *temp=&producto;
	while(temp != NULL){
		if(temp->nombre== _nombre){
			cout<<"\nEl producto \"" << temp->nombre <<"\" SI se encontro";
			break;
		}
		else{
			temp = temp->siguiente;
		}
	}
}

void stockTienda::modificarProducto(string _nombre, int _codigo, float _precio, int _stock, stockTienda &producto){
	stockTienda *temp = &producto;
	stockTienda **temp2 = &temp;
	while(*temp2 != NULL){
		if((*temp2)->codigo == _codigo){
			
			(*temp2)->nombre = _nombre;
			(*temp2)->precio = _precio;
			(*temp2)->stock = _stock;
			
			break;
		}
		else{
			temp2 = &((*temp2)->siguiente);
		}
	}
}

void stockTienda::Mostrar(stockTienda &producto){
	stockTienda *temp = &producto;
	stockTienda *temp2 = temp->siguiente;
	while(temp2 != NULL){
		cout<<"\nCodigo: "<<temp2->codigo;
		cout<<"\nNombre: "<<temp2->nombre;
		cout<<"\nPrecio: "<<temp2->precio;
		cout<<"\nStock: "<<temp2->stock;
		
		temp2 = temp2->siguiente;
		
	}
}



int main(int argc, char *argv[]) {
	
	int opc;
	
	string nombre;
	int codigo;
	float precio;
	int stock;
	
	stockTienda *producto = new stockTienda();
	
	cout<<"\n1) Dar de alta un nuevo producto ";
	cout<<"\n2) Dar de baja un producto";
	cout<<"\n3) Buscar un producto por su nombre ";
	cout<<"\n4) Buscar un producto por su codigo";
	cout<<"\n5) Modificar un producto";
	cout<<"\n6) Mostrar productos";
	cout<<"\n0) SALIR DEL MENU ";
	
	do{
		cout<<"\nIngrese una opcion valida: "; cin>>opc;
		switch (opc){
		case 1:
			cout<<"\nIngrese codigo del producto: ";cin>>codigo;
			cout<<"\nIngrese nombre del producto: ";cin>>nombre;
			cout<<"\nIngrese el precio del producto: ";cin>>precio;
			cout<<"\nIngrese el stock del producto: ";cin>>stock;
			
			producto->darAlta(nombre, codigo, precio, stock, *producto);
			
			break;
			
		case 2:
			cout<<"\nIngrese codigo del producto para dar de baja: ";cin>>codigo;
			
			producto->darBaja(codigo, *producto);
			
			break;
			
		case 3:
			
			cout<<"\nIngrese el nombre del producto a buscar: ";cin>>nombre;
			
			producto->buscarProductoPorNombre(nombre, *producto);
			
			break;
			
		case 4:
			cout<<"\nIngrese el codigo del producto a buscar: ";cin>>codigo;
			
			producto->buscarProductoPorCodigo(codigo, *producto);
			
			break;
			
		case 5:
			cout<<"\nIngrese el codigo del producto a modificar: ";cin>>codigo;
			cout<<"\nIngrese el nuevo nombre: ";cin>>nombre;
			cout<<"\nIngrese el nuevo precio: ";cin>>precio;
			cout<<"\nIngrese el nuevo stock: ";cin>>stock;
			
			producto->modificarProducto(nombre,codigo,precio,stock, *producto);
			
			break;
			
		case 6:
			cout<<"\nTodos los productos: ";
			producto->Mostrar(*producto);
			
			break;
			
		}
		
		
	} while(opc != 0);
	
	
	
	
	
	return 0;
}

