// chainfunction
#include <iostream>
using namespace std;
class buku
{
    string judul;

public:
    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this;
    }
    string getJudul()
    {
        return this->judul;
    }
} bukunya;

int main()
{
    cout << bukunya.setJudul("Matematika").getJudul();
    return 0;
}

// destruktor
#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;

public:
    angka(int);
    ~angka();
    void cetakData();
    void isiData();
};
// Definisi member function
angka::angka(int i)
{
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka()
{
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat array sudah dilepaskan" << endl;
}

void angka::cetakData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}