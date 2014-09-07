
#include <QSqlDatabase>

#include "Store.h"


Store::Store()
{}


Store::~Store()
{}


bool Store::InitConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "sqlite");
    db.setDatabaseName("timereport");
    db.open();
    bool bSuccess = db.isOpen();
    return bSuccess;
}


bool Store::SetReportTime(ReportType type, t_time iValue)
{
    return false;
}


Store::t_time Store::GetReportedForPeriod(t_time iStartBound, t_time iEndBound, ReportType *pLastReprted /*= NULL*/)
{
    return -1;
}

