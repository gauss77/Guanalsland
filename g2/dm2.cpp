//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "dm2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDMod2 *DMod2 = NULL;
//---------------------------------------------------------------------------
__fastcall TDMod2::TDMod2(TComponent* Owner)
    : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------