/* 
 * File:   Column.cpp
 * Author: felix
 * 
 * Created on 28. April 2012, 20:57
 */

#include "../header/Column.h"

Column::Column(std::string name, ColumnType* columntype_) {
    this->ColumnType_ = columntype_;
    this->Name_ = name;
}

Column::~Column() {
}

const ColumnType* Column::getColumnType()
{
    return this->ColumnType_;
}

const std::string* Column::getName()
{
    return &this->Name_;
}

std::string Column::getSQLSpare()
{
    return this->Name_ + " " + this->ColumnType_->getSQLSpare();
}