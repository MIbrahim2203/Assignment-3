#include<iostram>
using namespace std;

class Door{
private:
    bool isopen;
    bool isLocked;
public:
    Door();
    void openDoor();
    //Ibrahim's Function
    void closeDoor();
    //Ibrahim's Function 
    void lockDoor();
    //Laiba's Function
    void unlock();
    //Laiba's Function
    bool isDoorOpen();
    bool isDoorLocked();
};

int main()
{
    return 0;
}