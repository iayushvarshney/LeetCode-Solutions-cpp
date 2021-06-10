class ParkingSystem {
private:
    int a,b,c;
public:
    ParkingSystem(int big, int medium, int small) {
        a=big;
        b=medium;
        c=small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1: if(a!=0){
                        a--;
                        return true; }
                    break;
            case 2: if(b!=0){
                        b--;
                        return true; }
                    break;
            case 3: if(c!=0){
                        c--;
                        return true; }
        }
        
        
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
