#include <Box.h>
class Space {
    public:
        Space(int width, int height);
        ~Space();
    private:
        int** coordinates;
};