
namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
        public:
            int x_coordinate;
            int y_coordinate;
            Alien(int x, int y) : x_coordinate(x), y_coordinate(y) { health = 3; }//constructor
            int get_health();
            bool hit();
            bool is_alive();
            bool teleport(int x_new, int y_new);
            bool collision_detection(Alien newAlien);
        private:
            int health;
    };

    int Alien::get_health(){
        return health;
    }

    bool Alien::hit(){
        if(health > 0){
            health--;
            return true;
        }
        return false;
    }

    bool Alien::is_alive(){
        if(health == 0){
            return false;
        }
        return true;
    }

    bool Alien::teleport(int x_new, int y_new){
        x_coordinate = x_new;
        y_coordinate = y_new;
        return true;
    }

    bool Alien::collision_detection(Alien newAlien){
        if(x_coordinate == newAlien.x_coordinate && y_coordinate == newAlien.y_coordinate){
            return true;
        }
        return false;
    }
}  // namespace targets