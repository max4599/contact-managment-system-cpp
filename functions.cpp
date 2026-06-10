#include "functions.h"
void DataIntialization()
{
	ofstream _buf("Buffer.txt");
	if (!_buf)
		cout << "Fehler beim Erstellen der Pufferdatei!" << endl;
	_buf.close();

}
void DataEntry()
{
	string _surname;
	int _phoneNum;
	string _city;
	int n;
	cout << "Geben Sie die Datenmenge ein:";
	cin >> n;
	ofstream record("Buffer.txt", ios::app);
	if (record)
	{
		record << n << endl;
		for (int i = 0; i < n; i++) {
			cout << "Geben Sie Ihren Nachnamen ein:";
			cin >> _surname;
			cout << "Geben Sie Ihre Telefonnummer ein:";
			cin >> _phoneNum;
			cout << "Geben Sie den Namen Ihrer Stadt ein:";
			cin >> _city;
			record << _surname << endl;
			record << _phoneNum << endl;
			if (i < n - 1)
				record << _city << endl;
			else
				record << _city << endl;

			cout << "______________________________" << endl;
		}
	}
	else
		cout << "Fehler beim Öffnen der Datei" << endl;
	record.close();




}
void DataReading(string fileName)
{
	ifstream reading(fileName);
	ofstream record("Buffer.txt", ios::out);
	if (reading)
	{
		if (record) {


			string _surname;
			int _phoneNum;
			string _city;
			int n;

			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++)
			{
				reading >> _surname;
				reading >> _phoneNum;
				reading >> _city;
				record << _surname << endl;
				record << _phoneNum << endl;
				if (i < n - 1)
					record << _city << endl;
				else
					record << _city << endl;

			}
			cout << "Daten gelesen!" << endl;



		}

		else
			cout << "Fehler beim Öffnen des Puffers" << endl;



	}
	else
		cout << "Fehler beim Öffnen der Datei" << endl;

	reading.close();
	record.close();


}
void Print()
{
	ifstream reading("Buffer.txt");
	if (reading)
	{
		string _surname;
		int _phoneNum;
		string _city;
		int n;

		reading >> n;
		cout << "Datenmenge:" << n << endl << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "Informationen über" << i + 1 << endl;
			reading >> _surname;
			cout << "Nachname" << _surname << endl;
			reading >> _phoneNum;
			cout << "Telephonenumer" << _phoneNum << endl;
			reading >> _city;
			cout << "Stadtname" << _city << endl;

			cout << "______________________________________________________________" << endl;

		}

	

	}
	else
		cout << "Fehler beim Öffnen der Datei" << endl;

	reading.close();

}
void DataChange()
{
	Copy();
	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);
	if (reading)
	{
		if (record) {


			string _surname;
			int _phoneNum;
			string _city;
			int n, _n;

			reading >> n;
			cout<<"Wählen Sie die zu ändernde Elementnummer (von 1 bis"<<n<<"):";
			cin >> _n;
			_n--;
			system("cls");
			record << n << endl;
			if (_n >= 0 && _n < n)
			{
				for (int i = 0; i < n; i++)
				{
					if (i != _n)
					{
						reading >> _surname;
						reading >> _phoneNum;
						reading >> _city;
						record << _surname << endl;
						record << _phoneNum << endl;
						if (i < n - 1)
							record << _city << endl;
						else
							record << _city << endl;
					}


					else
					{
						cout << "Geben Sie Ihren Nachnamen ein:";
						cin >> _surname;
						cout << "Geben Sie Ihre Telefonnummer ein:";
						cin >> _phoneNum;
						cout << "Geben Sie den Namen Ihrer Stadt ein:";
						cin >> _city;
						record << _surname << endl;
						record << _phoneNum << endl;
						if (i < n - 1)
							record << _city << endl;
						else
							record << _city << endl;

						reading >> _surname;
						reading >> _phoneNum;
						reading >> _city;


					}
				}

				cout << "Daten geändert!" << endl;
			}
			else
				cout << "Die eingegebene Nummer ist falsch" << endl;


		}
		cout << "Daten gelesen!" << endl;


	}
	cout << "Fehler beim Öffnen der Datei" << endl;
	reading.close();
	record.close();
	remove("Buffer_.txt");


}
	
int AmountData()
{
	ifstream _buf("Buffer.txt");
	int n;
	if (_buf)
	{
		_buf >> n;
	}
	else
		cout<<"Fehler beim Öffnen der Datei" << endl;
	_buf.close();
	return n;







}
void Copy()
	{
		ifstream reading("Buffer_.txt");
		ofstream record("Buffer.txt", ios::out);
		if (reading)
		{
			if (record) {


				string _surname;
				int _phoneNum;
				string _city;
				int n, _n;

				reading >> n;
				record << n << endl;
				for (int i = 0; i < n; i++)
				{
					reading >> _surname;
					record << _surname << endl;
					reading >> _phoneNum;
					record << _phoneNum << endl;
					reading >> _city;
					if (i < n - 1)
						record << _city << endl;
					else
						record << _city << endl;
					
				}
				



			}
			else
			cout << "Daten gelesen!" << endl;
		}

		else
			cout << "Fehler beim Öffnen der Datei" << endl;

		reading.close();
		record.close();

	}



void DeleteData()
{

	Copy();
	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading)
	{
		if (record) {


			string _surname;
			int _phoneNum;
			string _city;
			int n, _n;

			reading >> n;
			int b = n - 1;
			cout << "Wählen Sie die Nummer aus, um die Daten zu löschen (von 1 bis" << n << "):";
			cin >> _n;
			_n--;
			system("cls");
			record << b << endl;
			if (_n >= 0 && _n < n)
			{
				for (int i = 0; i < n; i++)
				{
					if (i != _n)
					{
						reading >> _surname;
						record << _surname << endl;
						reading >> _phoneNum;
						record << _phoneNum << endl;
						reading >> _city;
						if (i < n - 1)
							record << _city << endl;
						else
							record << _city << endl;
						
					}


					else
					{
						

						reading >> _surname;
						reading >> _phoneNum;
						reading >> _city;


					}
				}

				cout << "Löschdaten!" << endl;
			}
			else
				cout << "Die eingegebene Nummer ist falsch" << endl;


		}
		cout << "Daten gelesen!" << endl;


	}
	cout << "Fehler beim Öffnen der Datei" << endl;
	reading.close();
	record.close();
	remove("Buffer_.txt");

	














}
void AddData()
{

	string _surname;
	int _phoneNum;
	string _city;
	int n = AmountData() + 1;
	ofstream record("Buffer.txt", ios::app);
	ofstream record_("Buffer.txt", ios::out | ios::in);
	if (record_)
	{
		record_ << n << endl;

	}
	else
		cout << " Fehler beim Öffnen der Datei" << endl;
	if (record)
	{
		record << endl;


		cout << "Geben Sie Ihren Nachnamen ein:";
		cin >> _surname;
		cout << "Geben Sie Ihre Telefonnummer ein:";
		cin >> _phoneNum;
		cout << "Geben Sie den Namen Ihrer Stadt ein:";
		cin >> _city;


		record << _surname;
		record << _phoneNum;
		record << _city;


	}
	else
		cout << " Fehler beim Öffnen der Datei" << endl;

	record.close();
	record_.close();







}
void SaveData(string fileName)

{
	ifstream reading("Buffer.txt");
	ofstream record(fileName, ios::out);
	if (reading)
	{
		if (record) {


			string _surname;
			int _phoneNum;
			string _city;
			int n;

			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++)
			{
				reading >> _surname;
				record << _surname << endl;
				reading >> _phoneNum;
				record << _phoneNum << endl;
				reading >> _city;
				if (i < n - 1)
					record << _city << endl;
				else
					record << _city << endl;

			}
			cout << "Daten gespeichert!" << endl;



		}
		else
			cout << "Fehler beim Öffnen der Pufferdatei!" << endl;
	}
	else
		cout << "Fehler beim Öffnen der Datei" << endl;

	record.close();
	reading.close();
}
bool DataCleaning()
{
	bool clear = false;
	fstream _buf("Buffer.txt", ios::out);
	if (!_buf)
		cout << "Fehler beim Öffnen der Pufferdatei" << endl;
	_buf.clear();
	if (_buf.peek() == EOF)
		clear = true;
	else
		clear = false;
	_buf.close();
	return clear;











}



	
