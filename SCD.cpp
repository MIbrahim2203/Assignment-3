#include<iostram>
using namespace std;

class Door{
private:
    bool isopen;
    bool isLocked;
public:
    Door();
    void openDoor();
    //Ibrahim's
    void closeDoor();
    //Ibrahim's
    void lockDoor();
    void unlock();
    bool isDoorOpen();
    bool isDoorLocked();
};

int main()
{
    return 0;
}