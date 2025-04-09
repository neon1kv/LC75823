/*#include <LC75823.h>

byte waitingAnimationSegments = 0;

void LC75823::animation(enum _animations anim, int pos)
{
    switch (anim)
    {
    case WAITING:
        if (isTimeToUpdate(t2, 300))
        {
            switch (waitingAnimationSegments)
            {
            case (0):
                getClearScreen();
                segmentA(pos);
                segmentH(pos);
                segmentI(pos);
                segmentJ(pos);
                segmentM(pos);
                segmentL(pos);
                segmentK(pos);
                segmentD(pos);
                break;
            case (1):
                getClearScreen();
                segmentF(pos);
                segmentE(pos);
                segmentM(pos);
                segmentH(pos);
                segmentJ(pos);
                segmentK(pos);
                segmentB(pos);
                segmentC(pos);
                break;
            }
            waitingAnimationSegments = !waitingAnimationSegments;
        }
        break;
    }
}
    */