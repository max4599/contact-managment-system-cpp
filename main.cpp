#include "functions.h"
int _stateMenu;

void Menu()
{
	cout << "Wählen Sie eine Aktion aus" << endl
		<< "(0) Beenden Sie das Programm " << endl
		<< "(1) Daten eingeben" << endl
		<< "(2) Datenausgabe" << endl
		<< "(3) Änderung der Daten" << endl
		<< "(4) Daten entfernen" << endl
		<< "(5) Daten hinzufügen" << endl
		<< "(6) Daten speichern " << endl;
cin >> _stateMenu;
}

void main()
{
   
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	void DataIntialization();

	Menu();
	int _actions;
	string fileName;
	while (_stateMenu != 0)
	{
		switch (_stateMenu)
		{
		case 1:
			system("cls");
			cout << "Eingabe manuell oder aus Datei?:";
			cin >> _actions;
			system("cls");
			if (_actions == 1)
			{
				DataEntry();
			}
			else
			{
				cout << "Geben Sie den Dateinamen ein:";
				cin >> fileName;
				DataReading(fileName);
			}
			system("pause");
			system("cls");
			Menu();
			break;

		case 2:
			system("cls");
			Print();
			system("pause");
			system("cls");
			Menu();
			break;

		case 3:
			
			system("cls");
			DataChange();
			system("pause");
			system("cls");
			
			Menu();
			break;

		case 4:
			system("cls");
			DeleteData();
			system("pause");
			system("cls");
			Menu();
			break;

		case 5:
			system("cls");
			AddData();
			

			system("pause");
			system("cls");
			Menu();
			break;


		case 6:

			system("cls");
			cout << "Geben Sie den Dateinamen ein:";
			cin >>fileName;
			system("cls");
			SaveData(fileName);
			system("pause");
			system("cls");
			
			break;
		default:
			cout << "Falsche Auswahl des Menüpunkts" << endl;
			break;

		}
		
	}
	system("cls");
	if (DataCleaning())
		cout << "Daten gelöscht" << endl;
	else
		cout << "Daten nicht gelöscht" << endl;

	cout << "Arbeit abgeschlossen" << endl;
	system("pause");

}

