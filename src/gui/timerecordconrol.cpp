
#include "timerecordconrol.h"



TimeRecordConrol::TimeRecordConrol()
{
}


TimeRecordConrol::~TimeRecordConrol()
{
}


QTime TimeRecordConrol::GetTime()
{
    static int i = 0;
    QTime time(1, i++, 3);
    return time;
}


void TimeRecordConrol::CangeState(bool bStarted)
{
    int a = 56;
}

