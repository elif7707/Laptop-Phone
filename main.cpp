//
//  main.cpp
//  Laptop-Phone
//
//  Created by Elif Zeynep Çetinkaya on 11.08.2024.
//

#include <iostream>
using namespace std;

class Phone{
private:
    
    string name;
    int battery;
    
public:
    
    Phone(string n, int b){
        
        name = n;
        battery = b;
        cout << "Phone created: " << name << " with battery " << battery << endl;
    }
    
    Phone(string n) : battery(200){
        
        name = n;
        cout << "Phone created: " << name << " with battery " << battery << endl;
    }
    
    ~Phone(){
        cout << "Phone destroyed: " << name << endl;
    }
    
    void charge(){
        cout << name << " is charging." << endl;
        battery += 20;
    }
    
    void use(){
        cout  << name << " is being used." << endl;
        battery -= 30;
    }
    
    void print(){
        cout << "Phone: " << name << ", Battery: " << battery << endl;
    }
    
    int getBattery(){
        return battery;
    }
};

class Laptop{
private:
    
    string name;
    int battery;
    
public:
    
    Laptop(string n, int b){
        name = n;
        battery = b;
        cout << "Laptop created: " << name << " with battery " << battery << endl;
    }
    
    Laptop(string n) : battery(300){
        name = n;
        cout << "Laptop created: " << name << " with battery " << battery << endl;
    }
    
    ~Laptop(){
        cout << "Laptop destroyed: " << name << endl;
    }
    
    void charge(){
        cout << name << " is charging" << endl;
        battery += 30;
    }
    
    void use(){
        cout << name << " is being used" << endl;
        battery -= 40;
    }
    
    void print(){
        cout << "Phone: " << name << ", Battery: " << battery << endl;
    }
};

int main(){
    
    Phone p1("IPhone");
    Phone p2("Samsung", 250);
    Laptop l1("MacBook");
    Laptop l2("Lenovo", 350);
    
    char selection;
    
    do {
        cout << "Enter 'c' to charge devices, 'u' to use devices, 'q' to quit: ";
        cin >> selection;
        
    if(selection == 'c'){
        
        p1.charge();
        p2.charge();
        l1.charge();
        l2.charge();
        
    }else if (selection == 'u'){
        
        p1.use();
        p2.use();
        l1.use();
        l2.use();
        
    }else if (selection == 'q'){
    
        break;
        
    }else{
        cout << "INVALID INPUT. Please try again! " << endl;
    }
        
        p1.print();
        p2.print();
        l1.print();
        l2.print();
        
        if(p1.getBattery() + p2.getBattery() >= 400){
            cout << "The phones won! " << endl;
            break;
        }
        
    } while(selection != 'q');
        
    
    return 0;
}
