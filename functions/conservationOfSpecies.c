	inletFlux
	{
		type            surfaceFieldValue;
		libs            ("libfieldFunctionObjects.so");
        regionType      patch;
        name            inlet;
		
        writeControl    runTime;
        writeInterval   0.001;

        operation       areaIntegrate;
        fields          (wallFlux);
		
		log             true;
		writeFields     false;
		writeToFile     true;
	}
	
	outletFlux
	{
		type            surfaceFieldValue;
		libs            ("libfieldFunctionObjects.so");
        regionType      patch;
        name            outlet;
		
		writeControl    runTime;
        writeInterval   0.001;

        operation       areaIntegrate;
        fields          (wallFlux);
		
		log             true;
		writeFields     false;
		writeToFile     true;
	}
	
	depositionFlux
    {
        type            surfaceFieldValue;
		libs            ("libfieldFunctionObjects.so");
        regionType      patch;
        name            wall;
		
		writeControl    runTime;
        writeInterval   0.001;

        operation       areaIntegrate;
        fields          (wallFlux);
		
		log             true;
		writeFields     false;
		writeToFile     true;
    }
	
	totalMass
    {
        type            volFieldValue;
        libs            ("libfieldFunctionObjects.so");
		
		writeControl    runTime;
        writeInterval   0.001;

        regionType      all;
        operation       volIntegrate;

        fields          (c);
		
		log             true;
		writeFields     false;
		writeToFile     true;
    }