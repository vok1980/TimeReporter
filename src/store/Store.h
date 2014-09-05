
#pragma once


#include <cstddef>


class Store
{
public:
    Store();
    virtual ~Store();

public:
    enum ReportType
    {
        RT_IN,
        RT_OUT,
    };

    typedef unsigned long t_time;

    bool InitConnection()
    bool SetReportTime(ReportType type, t_time iValue);
    t_time GetReportedForPeriod(t_time iStartBound, t_time iEndBound, ReportType *pLastReprted = NULL);

};
