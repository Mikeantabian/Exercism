#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H
#include <string>
#include <cstdlib>

namespace robot_name {

class robot{
    public:
        robot();
        const std::string name() const;
        void reset();
        robot &operator=(const robot &) = delete;
        robot(const robot &) = delete;
    private:
        std::string RoboName;
};

}  // namespace robot_name

#endif // ROBOT_NAME_H