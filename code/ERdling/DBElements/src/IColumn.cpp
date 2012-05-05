/* 
 * File:   Column.cpp
 * Author: felix
 * 
 * Created on 28. April 2012, 20:57
 */

#include "../header/IColumn.h"

IColumn::IColumn(std::string name, IColumnType* columntype_) {
    this->ColumnType_ = columntype_;
    this->Name_ = name;
}

IColumn::~IColumn() {
}

const IColumnType* IColumn::getColumnType()
{
    return this->ColumnType_;
}

const std::string* IColumn::getName()
{
    return &this->Name_;
}