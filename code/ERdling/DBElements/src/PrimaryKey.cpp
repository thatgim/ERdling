/* 
 * File:   PrimaryKey.cpp
 * Author: felix
 * 
 * Created on 4. Mai 2012, 22:08
 */

#include "../header/PrimaryKey.h"

PrimaryKey::PrimaryKey(Column* column) 
{
    this->Columns_ = std::list<Column*>();
    Columns_.push_back(column);
}

PrimaryKey::PrimaryKey(std::list<Column*> columns)
{
    this->Columns_ = columns;
}

PrimaryKey::~PrimaryKey() 
{
}

const std::list<Column*>* PrimaryKey::getColumns()
{
    return &this->Columns_;
}