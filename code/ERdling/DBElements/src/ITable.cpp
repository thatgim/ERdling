/* 
 * File:   Table.cpp
 * Author: felix
 * 
 * Created on 4. Mai 2012, 21:55
 */

#include "../header/ITable.h"

ITable::ITable(std::string name) 
{
    this->Name_ = name;
}

ITable::~ITable() {
}

const std::list<IColumn*>* ITable::getColumns()
{
    return &this->Columns_;
}