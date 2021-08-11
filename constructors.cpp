#include <iostream>

using namespace std;

class Cars{
    private:
        string name;
        int price;
        
    public:
        Cars(string mname){ 
            //can't put mname as name (this is not python)
            name = mname;
        }
        
        void Display(){
            cout << name <<endl;
        }
};

int main()
{   
    Cars car2("toyota");
    // car2.setData("fe", 12);
    car2.Display();
    cout<<"Hello World!";
    return 0;
}
