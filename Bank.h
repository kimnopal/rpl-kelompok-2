#ifndef BANK_H
#define BANK_H

class Bank {

private:
	string nama;
	string alamat;

public:
	void verifikasiPin();

	void transfer();

	void getDataNasabah();

	void updateDataNasabah();
};

#endif
