private _randomSpawnPos = aHelipad_2 getPos [(random 20) + 1,random 359];
_mercenary = "I_E_soldier_UGV_02_Science_F" createUnit [_randomSpawnPos, (group player), "", 0.5];