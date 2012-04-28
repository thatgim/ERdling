/* 
 * File:   Column.h
 * Author: felix
 *
 * Created on 28. April 2012, 20:57
 */

#ifndef COLUMN_H
#define	COLUMN_H

#include "../header/ColumnType.h"

class Column {
public:
    Column(ColumnType);
    virtual ~Column();
    
    ColumnType *getColumnType():
    
private:
    ColumnType _ColumnType;
};

#endif	/* COLUMN_H */

