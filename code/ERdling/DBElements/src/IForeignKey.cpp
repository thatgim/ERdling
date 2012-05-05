/* 
 * File:   ForeignKey.cpp
 * Author: felix
 * 
 * Created on 4. Mai 2012, 23:19
 */

#include "../header/ForeignKey.h"

IForeignKey::IForeignKey(IColumn* baseColumn, ITable* foreignTable, IColumn* foreignColumn) {
    this->BaseColumn_ = baseColumn;
    this->ForeignTable_ = foreignTable;
    this->ForeignColumn_ = foreignColumn;
}

IForeignKey::~IForeignKey() {
}

