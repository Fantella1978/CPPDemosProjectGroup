//---------------------------------------------------------------------------

// This software is Copyright (c) 2022 Embarcadero Technologies, Inc.
// You may only use this software if you are an authorized licensee
// of an Embarcadero developer tools product.
// This software is considered a Redistributable as defined under
// the software license agreement that comes with the Embarcadero Products
// and is subject to that software license agreement.

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SampleFormViewerUnicodeBiDi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------

void TfrmUnicodeBiDiViewer::Show(const String ATitle, const String ADescription,
	const String AText, const String ABiDiRegionDescription)
{
	lblResult->Words->ItemByName["Text"]->Caption = "\"" + AText + "\"";
	lblResult->Words->ItemByName["BiDiRegion"]->Caption = ABiDiRegionDescription;
	BackgroundKind = TBackgroundKind::Solid;
	inherited::Show(ATitle, ADescription);
}
//---------------------------------------------------------------------------
