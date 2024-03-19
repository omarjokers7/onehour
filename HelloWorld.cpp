#include <iostream>
#include <vector>
#include <string>
using namespace std;

int icindevarmi(vector<int> aranilanyer, int aranilansayi, int baslangicnoktasi, int bitisnoktasi)
{

    int middle = ((bitisnoktasi - baslangicnoktasi) + baslangicnoktasi) / 2;
    if (aranilanyer[middle] == aranilansayi)
    {
        return middle;
    }
    if (aranilanyer[middle] < bitisnoktasi)
    {
        return icindevarmi(aranilanyer, aranilansayi, baslangicnoktasi, middle);
    }
    if (aranilanyer[middle] > baslangicnoktasi)
    {
        return icindevarmi(aranilanyer, aranilansayi, middle, bitisnoktasi);
    }

    return -1;
}
int rastsayi(int minV, int maxV)
{
    int sayi = rand() % (maxV - minV + 1) + minV;
    return sayi;
}
int main()
{
    vector<int> sayilar;
    srand(time(0));
    int sayisiniri = 100;
    for (int i = 0; i < sayisiniri; i++)
    {
        
        if (rastsayi(0, 1) < 1)
        {
            cout << sayilar.size() << " ";
            cout << i << " " << endl;
            sayilar.push_back(i);
        }
    }
    int secilen = sayilar[rastsayi(0, sayilar.size())];
    cout << "Secilen Sayi :" << secilen << endl; 
    cout << "Bulunan index:" << endl;
    cout << "Bulunan index:" << icindevarmi(sayilar, secilen, 0, sayilar.size());
}