#include <iostream>
using namespace std;

class mahasiswa
{
private:
    static int totalMahasiswa;

public:
    string nama;
    string status;
    int age;

    mahasiswa(string pNama, int pAge)
    {
        nama = pNama;
        age = pAge;
        status = "mahasiswa baru";
        ++totalMahasiswa;
        cout << nama << "Create" << " Status " << status << endl;
    }

    ~mahasiswa()
    {
        cout << nama << "Destroyed" << endl;
        --totalMahasiswa;
        cout << endl;
    }

    static int getTotalMahasiswa()
    {
        return totalMahasiswa;
    }

    static void setTotalMahasiswa(int a)
    {
        totalMahasiswa = a;
    }
};

int mahasiswa::totalMahasiswa = 0;

int main()
{

    cout << "totalMahasiswa" << mahasiswa::getTotalMahasiswa() << endl;
    mahasiswa mhs1("Maman", 40);
    mahasiswa mhs2("Agus", 34);
    mahasiswa::setTotalMahasiswa(10);
    cout << "totalMahasiswa" << mahasiswa::getTotalMahasiswa() << endl;
    {
        mahasiswa mhs3("Budi", 19);
        mahasiswa mhs4("Caca", 21);
        cout << "totalMahasiswa" << mahasiswa::getTotalMahasiswa() << endl;
    }
    cout << "totalMahasiswa" << mahasiswa::getTotalMahasiswa() << endl;
    return 0;
}