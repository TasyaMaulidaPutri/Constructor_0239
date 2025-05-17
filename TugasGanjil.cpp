#include <iostream>
#include <string>
using namespace std;

class Dosen;
class staff;
class universitas;

class Mahasiswa {
private:
    string nama;
    string NIM;
    float nilai;
public:
    Mahasiswa(string n, string nim) : nama (n), NIM(nim), nilai (0){}
    friend class Dosen;
    void showMahasiswa()
    {
        cout << "Mahasiswa :" << nama << "NIM :" << "nilai :" << nilai << endl;
    }
   
};

class Dosen {
private:
    string nama;
    string NIDN;
    string pangkat;
    float gaji;
public:
    Dosen (string nama, string NIDN, string pangkat, float gaji);

    void showDosen()
    {
        cout << "Dosen :" << nama << "NIDN :" << NIDN << "pangkat :" << pangkat << endl;
    }
};

class Staff{
private:
    friend class Staff;
    friend class Universitas;
    string nama;
    string ID;
    float gaji;
public:
    Staff (string nama, string ID, float gaji);

    void showStaff()
    {
        cout << "staf :" << nama << " ID :" << ID << "gaji :" << gaji << endl;
       
    }

    friend float lihatGajiStaff(Staff* s);
    
};

float lihatGajiStaff(Staff* s)
{
        return s->gaji;
}

class Universitas
{
public:
    void cekGajiStaff()
    {
        cout << "Gaji Staff: " << lihatGajiStaff << endl;
    }
};

int main()
{
    Mahasiswa mhs("Tasya", "12345");
    Dosen dosen("Dr. Mingyu", "D001", "Dekan", 1500);
    Staff staff("Ibu Basna", "S001", 1000);

    Universitas univ;
    Staff;

}
    



