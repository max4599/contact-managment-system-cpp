#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>


using namespace std;

void DataIntialization();
void DataEntry();
void DataReading(string filename);
void Print();
bool DataCleaning();
void DataChange();
void Copy();
int  AmoutOfData();
void DeleteData();
void AddData();
void SaveData(string filename);
