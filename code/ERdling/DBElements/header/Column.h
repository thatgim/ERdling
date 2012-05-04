/* 
 * File:   Column.h
 * Author: felix
 *
 * Created on 28. April 2012, 20:57
 */

#ifndef COLUMN_H
#define	COLUMN_H

#include <iostream>

class ColumnType;

class Column {
public:
    Column(std::string, ColumnType*);
    virtual ~Column();
    
    const std::string* getName();
    const ColumnType* getColumnType();
private:
    ColumnType* ColumnType_;
    std::string Name_;
};

#endif	/* COLUMN_H */

