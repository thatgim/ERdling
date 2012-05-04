/* 
 * File:   Table.cpp
 * Author: felix
 * 
 * Created on 4. Mai 2012, 21:55
 */

#include "../header/Table.h"

Table::Table(std::string name) 
{
    this->Name_ = name;
}

Table::~Table() {
}

const std::list<Column*>* Table::getColumns()
{
    return &this->Columns_;
}