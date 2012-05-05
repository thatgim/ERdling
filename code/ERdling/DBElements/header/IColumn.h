/* 
 * File:   Column.h
 * Author: felix
 *
 * Created on 28. April 2012, 20:57
 */

#ifndef ICOLUMN_H
#define	ICOLUMN_H

#include <iostream>

class IColumnType;

class IColumn {
public:
    IColumn(std::string, IColumnType*);
    virtual ~IColumn();
    
    const std::string* getName();
    const IColumnType* getColumnType();
private:
    IColumnType* ColumnType_;
    std::string Name_;
};

#endif	/* ICOLUMN_H */

