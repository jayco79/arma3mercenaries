private _randomSpawnPos = aHelipad_1 getPos [(random 20) + 1,random 359];
_mercenary = "I_E_Officer_F" createUnit [_randomSpawnPos, (group player), "", 0.5];