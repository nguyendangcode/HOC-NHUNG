#include <iostream>
#include <string>

using namespace std;

enum gioitinh_t
{
 NAM,
 NU
};

ostream& operator<<(ostream& os, gioitinh_t gioi_tinh)
{
 if (gioi_tinh == NAM)
  os << "NAM";
 else
  os << "NU";
 return os;
}

class ThongTinCaNhan
{
public:

private:
 string ten;
 int tuoi;
 gioitinh_t gioi_tinh;
public:
 ThongTinCaNhan()
 {
  ten = "";
  tuoi = 0;
  gioi_tinh = NAM;
 }
 ThongTinCaNhan(string ten, int tuoi, gioitinh_t gioitinh)
 {
  this->ten = ten;
  this->tuoi = tuoi;
  this->gioi_tinh = gioitinh;
 }

 void Set_Ten(string ten)
 {
  this->ten = ten;
 }

 string Get_Ten()
 {
  return ten;
 }

 void Set_Tuoi(int tuoi)
 {
  this->tuoi = tuoi;
 }

 int Get_Tuoi()
 {
  return tuoi;
 }

 void Set_GioiTinh(gioitinh_t GioiTinh)
 {
  this->gioi_tinh = GioiTinh;
 }

 gioitinh_t Get_GioiTinh()
 {
  return gioi_tinh;
 }

 void print()
 {
  cout << "ten: " << this->ten << endl;
  cout << "tuoi: " << this->tuoi << endl;
  cout << "gioi tinh: " << this->gioi_tinh << endl;
 }
};



int main()
{
 ThongTinCaNhan A;
 A.Set_Ten("Nguyen Van A");
 A.Set_GioiTinh(NAM);
 A.Set_Tuoi(18);

 A.print();
 return 0;
}
 