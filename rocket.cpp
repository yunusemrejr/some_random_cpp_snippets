 

#include <iostream>
#include <string>

struct Coordinate {
    float x;
    float y;
};

class Rocket{
    private:
      std::string name;
      float fuel;
      Coordinate point;
      
    public:
      Rocket(const std::string& name, float fuel, Coordinate point) : name(name), fuel(fuel), point(point) {}
      
      std::string getName() const {
          return name;
      }
      
      float getFuel() const {
          return fuel;
      }
      
      Coordinate getPoint() const {
          return point;
      }
      
      void setName(const std::string& newName){
          name = newName;
      }
      
      bool setFuel(float newFuel){
          if(newFuel > 847.33) {
              fuel = newFuel;
          } else{
              std::cerr << "fuel insufficient\n";
              return false;
          }
      }
      
      void setPoint(Coordinate point){
   if (point.x != 0.0f || point.y != 0.0f){
              std::cout << "Point true: "  << "\nCoordinate: (" << point.x << ", " << point.y << ")\n";
          }
      };
      
      void display(){
std::cout << "Listed here: " << name << "\nFuel: " << fuel
          << "\nCoordinate: (" << point.x << ", " << point.y << ")\n";
      }
};

int main()
{
 Rocket rocket("SpaceBoy1",NULL,{3.5f, 7.2f});
 
 bool setFuelCall=rocket.setFuel(984.33);
 
 
 if(setFuelCall){
     std::cout <<"fuel based pass complete";
     rocket.display();
 }else{
     std::cout <<"fuel based err";
     return 0;
 }
 return 0;
}
