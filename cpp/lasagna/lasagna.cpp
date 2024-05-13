// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // Lasagna should stay in the oven for 40 minutes
    return 40;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // Calculates remaining time by substracting the time in oven by the total cooking time required
    int TotalTime = 0, remainingTime = 0;
    TotalTime = ovenTime();
    remainingTime = TotalTime - actualMinutesInOven;
    return remainingTime;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // Calculates the preparation time by multiplying each layer by 2.
    return numberOfLayers*2;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // Call previously defined functions and add resulting times.
    int prepTime = 0, elapsed = 0;
    prepTime = preparationTime(numberOfLayers);
    elapsed = actualMinutesInOven + prepTime;
    return elapsed;
}
