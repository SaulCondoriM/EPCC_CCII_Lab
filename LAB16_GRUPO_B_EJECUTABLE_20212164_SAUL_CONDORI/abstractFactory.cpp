#include <iostream>
using namespace std;

class WinFactory{
public:
	virtual ~WinFactory(){}
	virtual string Draw() const = 0;
};
class WinButton : public WinFactory{
public:
	string Draw() const override{
		return "Dibujando Button Windows";
	}
};

class WinCheckBox : public WinFactory{
public:
	string Draw() const override{
		return "Dibujando CheckBox Windows";
	}
};


class MacFactory{
public:
	virtual ~MacFactory(){}
	virtual string Draw() const = 0;
	virtual string draw(const WinFactory& colaborador) const = 0;
};

class MacButton : public MacFactory{
public:
	
	string Draw() const override{
		return "Dibujando Button Mac";
	}
	
	string draw(const WinFactory& colaborador) const override{
		const string result = colaborador.Draw();
		return "Dibujando Button Mac con ayuda de " + result;
	}
};
class MacChexBox : public MacFactory{
public:
	
	string Draw() const override{
		return "Dibujando CheckBox Mac";
	}
	
	string draw(const WinFactory& colaborador) const override{
		const string result = colaborador.Draw();
		return "Dibujando CheckBox Mac con ayuda de "+ result;
	}
};

class LinuxFactory{
public:
	
	virtual ~LinuxFactory(){}
	virtual string Draw() const = 0;
};

class LinuxButton : public LinuxFactory{
public:
	
	string Draw() const override{
		return "Dibujando Button Linux";
	}
};
class LinuxCheckBox : public LinuxFactory{
public:
	
	string Draw() const override{
		return "Dibujando CheckBox Linux";
	}
};

class GUIFactory{
public:
	
	virtual WinFactory* CrearControlW() const = 0;
	virtual MacFactory* CrearControlM() const = 0;
	virtual LinuxFactory* CrearControlL() const = 0;
};

class Button : public GUIFactory{
public:
	
	WinFactory* CrearControlW() const override{
		return new WinButton();
	}
	
	MacFactory* CrearControlM() const override{
		return new MacButton();
	}
	
	LinuxFactory* CrearControlL() const override{
		return new LinuxButton();
	}
};

class ChecBox : public GUIFactory{
public:
	WinFactory* CrearControlW() const override{
		return new WinCheckBox();
	}
	
	MacFactory* CrearControlM() const override{
		return new MacChexBox();
	}
	
	LinuxFactory* CrearControlL() const override{
		return new LinuxCheckBox();
	}
};

void Aplication(const GUIFactory& f, int os){
	const WinFactory* producto_windows = f.CrearControlW();
	const MacFactory* producto_mac = f.CrearControlM();
	const LinuxFactory* producto_linux = f.CrearControlL();
	
	if(os == 1){
		cout<<producto_windows->Draw()<<endl;
	}
	else if(os == 2){
		cout<<producto_mac->Draw()<<endl;
	}
	else if(os == 3){
		cout<<producto_linux->Draw()<<endl;
	}
	
	delete producto_windows;
	delete producto_mac;
	delete producto_linux;
}

int main(int argc, char *argv[]) {
	
	cout<<"\nCliente: WINDOWS"<<endl;
	Button* f1 = new Button();
	Aplication(*f1, 1);
	delete f1;
	cout<<endl;
	
	cout<<"\nCliente: MAC"<<endl;
	Button* f2 = new Button();
	Aplication(*f2, 2);
	delete f2;
	cout<<endl;
	
	cout<<"\nCliente: LINUX"<<endl;
	Button* f3 = new Button();
	Aplication(*f3, 3);
	delete f3;
	cout<<endl;
	
	
	
	return 0;
}

