#include <Coordinates.h>
class Box {
    public:
    Box(int x, int y, int height, int width, int density);
    ~Box();
    private:
        int width;
        int height;
        int density;
};