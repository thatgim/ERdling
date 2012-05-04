/* 
 * File:   Column.cpp
 * Author: felix
 * 
 * Created on 28. April 2012, 20:57
 */

#include "../header/Column.h"

Column::Column(std::string, ColumnType*) {
}

Column::~Column() {
}

const ColumnType* Column::getColumnType()
{
    return this->ColumnType_;
}

const std::string* Column::getName()
{
    return this->Name;
}

const std::string Column::getSQLSpare()
{
    return this->Name + " " + this->ColumnType_->getSQLSpare();
}