// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Flight.h"
#include "FlightGameMode.h"
#include "FlightPawn.h"

AFlightGameMode::AFlightGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlightPawn::StaticClass();
}
