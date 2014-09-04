#ifndef TIMERECORDCONROL_H
#define TIMERECORDCONROL_H

#include <QTime>


class TimeRecordConrol
{
public:
    TimeRecordConrol();
    virtual ~TimeRecordConrol();

public:
    void CangeState(bool bStarted);
    QTime GetTime();
};


#endif // TIMERECORDCONROL_H
