#include "queen_attack.h"
#include <stdexcept>

namespace queen_attack {
    
    chess_board::chess_board(std::pair<int,int> white,std::pair<int,int> black): White(white), Black(black){
        if(White.first < 0 || Black.first < 0 || White.second < 0 || Black.second < 0 || White.first > 7 || Black.first > 7 || White.second > 7 || Black.second > 7){
            throw std::domain_error("negative input is invalid");
        }
        else if(White == Black){
            throw std::domain_error("Two queens can't be in the same position");
        }
    }

    bool chess_board::can_attack() const{
        int rowDiff = abs(White.first - Black.first);
        int colDiff = abs(White.second - Black.second);
        if(White.first == Black.first || White.second == Black.second){
            return true;
        } else if(rowDiff == colDiff){
            return true;
        }
        return false;
    }
    
    std::pair<int,int> chess_board::white() const{
        return White;
    }


    std::pair<int,int> chess_board::black()const{
        return Black;
    }
}  // namespace queen_attack
