#include "point.h"
#include "driver.h"

void Driver::PrintMap(Zoo& Peta, Point& user){
  for (int i = 0; i < Peta.GetPanjang(); i++){
    for (int j = 0; j < Peta.GetLebar(); j++){
      if (i==user.GetY() && j ==user.GetX()){
        cout<<"u";
      } else {
        cout << Peta.GetCell(i, j)->Render();
      }
    }
    cout << endl;
  }
}


void Driver::Tour(Zoo& Peta){
  Point user(Peta.GetEntP(), Peta.GetEntL());
  cout<<Peta.GetEntP()<<Peta.GetEntL()<<endl;
  bool avail=true;
  Peta.GetCell(user.GetY(),user.GetX())->SetBool(true);
  while (avail){
    PrintMap(Peta,user);
    Driver::CheckAround(Peta, user);
    Point temp1(user.GetY(),user.GetX()+1);
    Point temp2(user.GetY(),user.GetX()-1);
    Point temp3(user.GetY()+1,user.GetX());
    Point temp4(user.GetY()-1,user.GetX());
  
  if (Driver::IsValid(Peta,temp1) && 
      Peta.GetCell(temp1.GetY(),temp1.GetX())->Render()=='-' &&
      !Peta.GetCell(temp1.GetY(),temp1.GetX())->IsVisited()){
    Peta.GetCell(temp1.GetY(), temp1.GetX())->SetBool(true);
    user=temp1;
  } else if (Driver::IsValid(Peta,temp2) && 
             Peta.GetCell(temp2.GetY(),temp2.GetX())->Render()=='-' &&
             !Peta.GetCell(temp2.GetY(),temp2.GetX())->IsVisited()){
    Peta.GetCell(temp2.GetY(), temp2.GetX())->SetBool(true);
    user=temp2;
  } else if (Driver::IsValid(Peta,temp3) && 
      Peta.GetCell(temp3.GetY(),temp3.GetX())->Render()=='-' &&
      !Peta.GetCell(temp3.GetY(),temp3.GetX())->IsVisited()){
    Peta.GetCell(temp3.GetY(), temp3.GetX())->SetBool(true);
    user=temp3;
  } else if (Driver::IsValid(Peta,temp4) && 
      Peta.GetCell(temp4.GetY(),temp4.GetX())->Render()=='-' &&
      !Peta.GetCell(temp4.GetY(),temp4.GetX())->IsVisited()){
    Peta.GetCell(temp4.GetY(), temp4.GetX())->SetBool(true);
    user=temp4;
  } else {
    avail=false;
  }
  cin.ignore();
  cout<<endl;
  }
}

void Driver::CheckAround(Zoo& z, Point& p){
  Point temp (p.GetY()-1,p.GetX());
    if (Driver::IsValid(z,temp)){
      z.GetCell(temp.GetY(), temp.GetX())->Interact();
      bool cont=true;
      Point tempz =Point (temp.GetY()-1,temp.GetX());
      while (Driver::IsValid(z,tempz)&&
             z.GetCell(tempz.GetY(),tempz.GetX())->IsCage()){
        z.GetCell(tempz.GetY(), tempz.GetX())->Interact();
        Point tempy(tempz.GetY(), tempz.GetX()-1);
        while (Driver::IsValid(z,tempy) &&
               z.GetCell(tempz.GetY(),tempz.GetX())->IsCage()){
          z.GetCell(tempy.GetY(), tempy.GetX())->Interact();
          tempy.SetX(tempy.GetX()-1);
        }
        tempy = Point(tempz.GetY(), tempz.GetX()+1);
        while (Driver::IsValid(z,tempy) &&
               z.GetCell(tempz.GetY(),tempz.GetX())->IsCage()){
          z.GetCell(tempy.GetY(), tempy.GetX())->Interact();
          tempy.SetX(tempy.GetX()+1);
        }
        tempz.SetY(tempz.GetY()-1);
      }
    }
  temp = Point (p.GetY()+1,p.GetX());
    if (Driver::IsValid(z,temp)){
      z.GetCell(temp.GetY(), temp.GetX())->Interact();
      bool cont=true;
      Point tempz =Point (temp.GetY()-1,temp.GetX());
      while (Driver::IsValid(z,tempz)&&
             z.GetCell(tempz.GetY(),tempz.GetX())->IsCage()){
        z.GetCell(tempz.GetY(), tempz.GetX())->Interact();
        Point tempy(tempz.GetY(), tempz.GetX()-1);
        while (Driver::IsValid(z,tempy) &&
               z.GetCell(tempz.GetY(),tempz.GetX())->IsCage()){
          z.GetCell(tempy.GetY(), tempy.GetX())->Interact();
          tempy.SetX(tempy.GetX()-1);
        }
        tempy = Point(tempz.GetY(), tempz.GetX()+1);
        while (Driver::IsValid(z,tempy) &&
               z.GetCell(tempz.GetY(),tempz.GetX())->IsCage()){
          z.GetCell(tempy.GetY(), tempy.GetX())->Interact();
          tempy.SetX(tempy.GetX()+1);
        }
        tempz.SetY(tempz.GetY()+1);
      }
    }
}

bool Driver::IsValid(Zoo& z, Point& p){
  return (p.GetX()>=0 && p.GetX()<z.GetLebar() && p.GetY()>=0 &&
          p.GetY()<z.GetPanjang());
}
