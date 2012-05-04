/* 
 * File:   ForeignKey.cpp
 * Author: felix
 * 
 * Created on 4. Mai 2012, 23:19
 */

#include "../header/ForeignKey.h"

ForeignKey::ForeignKey(Column* baseColumn, Table* foreignTable, Column* foreignColumn) {
    this->BaseColumn_ = baseColumn;
    this->ForeignTable_ = foreignTable;
    this->ForeignColumn_ = foreignColumn;
}

ForeignKey::~ForeignKey() {
}

