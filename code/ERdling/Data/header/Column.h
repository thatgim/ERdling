/* 
 * File:   Column.h
 * Author: felix
 *
 * Created on 28. April 2012, 20:57
 */

#ifndef COLUMN_H
#define	COLUMN_H

class ColumnType;

class Column {
public:
    Column(*ColumnType);
    virtual ~Column();
    
    ColumnType* getColumnType();
private:
    ColumnType ColumnType_;
};

#endif	/* COLUMN_H */

