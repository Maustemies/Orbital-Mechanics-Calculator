#ifndef PLANETS_H
#define PLANETS_H

typedef struct {
    double      bodymassMultiplier;
    double      base10Power;
} bodymass_t;

typedef struct {
    QString     planetName;
    double      gravity;
    double      sidereal_rotational_period;
    double      equatorial_radius;
    bodymass_t  bodymass;
} planet_t;

planet_t planets[] = {
    { "Kerbol", 17.1, 432000.0, 261600000, { 1.75, 28.0 } },
    { "Moho", 2.7, 1210000.0, 250000, { 2.52, 21.0 } },
    { "Eve", 16.7, 80500.0, 700000, { 1.22, 23.0 } },
    { "Gilly", 0.049, 0, 13000, { 1.24, 17.0 } },
    { "Kerbin", 9.81, 21599.912, 600000, { 5.29, 22.0 } },
    { "Mun", 1.63, 0, 200000, { 9.76, 20.0 } },
    { "Minmus", 0.491, 0, 60000, { 2.64, 19.0 } },
    { "Duna", 2.94, 65517.859, 320000, { 4.51, 21.0 } },
    { "Ike", 1.1, 0, 130000, { 2.78, 20.0 } },
    { "Dres", 1.13, 34800.0, 138000, { 3.21, 20.0 } },
    { "Jool", 7.85, 36000.0, 6000000, { 4.23, 24.0 } },
    { "Laythe", 7.85, 0, 500000, { 2.93, 22.0 } },
    { "Vall", 2.31, 0, 300000, { 3.1, 21.0 } },
    { "Tylo", 7.85, 0, 600000, { 4.23, 22.0 } },
    { "Bop", 0.589, 0, 65000, { 3.72, 19.0 } },
    { "Pol", 0.373, 0, 44000, { 1.08, 19.0 } },
    { "Eeloo", 1.69, 19460.0, 210000, { 1.11, 21.0 } }
};

#endif // PLANETS_H
