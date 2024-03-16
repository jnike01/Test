TestProfLab_MapScripts::
# 2 "data/maps/TestProfLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestProfLab_ControlScript_ControlState
	.byte 0


TestProfLab_ControlScript_ControlState::
# 7 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 0
	return


TestProfLab_PersonScript_TestProf::
# 11 "data/maps/TestProfLab/scripts.pory"
	lock
# 12 "data/maps/TestProfLab/scripts.pory"
	faceplayer
# 13 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_1, TestProfLab_PersonScript_TestProf_4
TestProfLab_PersonScript_TestProf_3:
# 29 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_2
TestProfLab_PersonScript_TestProf_1:
# 31 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 32 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_PersonScript_TestProf_2:
# 14 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_0, MSGBOX_YESNO
# 15 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_PersonScript_TestProf_9
# 25 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_1
	goto TestProfLab_PersonScript_TestProf_1

TestProfLab_PersonScript_TestProf_4:
# 13 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_2, TestProfLab_PersonScript_TestProf_6
	goto TestProfLab_PersonScript_TestProf_3

TestProfLab_PersonScript_TestProf_6:
# 13 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_3, TestProfLab_PersonScript_TestProf_2
	goto TestProfLab_PersonScript_TestProf_3

TestProfLab_PersonScript_TestProf_9:
# 16 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_ne TestProfLab_PersonScript_TestProf_13
# 20 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 0
TestProfLab_PersonScript_TestProf_12:
# 22 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_1
	goto TestProfLab_PersonScript_TestProf_1

TestProfLab_PersonScript_TestProf_13:
# 17 "data/maps/TestProfLab/scripts.pory"
	addvar VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto TestProfLab_PersonScript_TestProf_12


TestProfLab_ObjectScript_PokeballOne::
# 37 "data/maps/TestProfLab/scripts.pory"
	lockall
# 38 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_1, TestProfLab_ObjectScript_PokeballOne_4
TestProfLab_ObjectScript_PokeballOne_3:
# 50 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballOne_1:
# 52 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 53 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballOne_2:
# 39 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_9
# 42 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_10
# 45 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_11
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_4:
# 38 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_2, TestProfLab_ObjectScript_PokeballOne_6
	goto TestProfLab_ObjectScript_PokeballOne_3

TestProfLab_ObjectScript_PokeballOne_6:
# 38 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_3, TestProfLab_ObjectScript_PokeballOne_2
	goto TestProfLab_ObjectScript_PokeballOne_3

TestProfLab_ObjectScript_PokeballOne_9:
# 40 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveSquirtle
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_10:
# 43 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveTotodile
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_11:
# 46 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveMudkip
	goto TestProfLab_ObjectScript_PokeballOne_1


TestProfLab_ObjectScript_PokeballTwo::
# 58 "data/maps/TestProfLab/scripts.pory"
	lockall
# 59 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_1, TestProfLab_ObjectScript_PokeballTwo_4
TestProfLab_ObjectScript_PokeballTwo_3:
# 71 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballTwo_1:
# 73 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 74 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballTwo_2:
# 60 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_9
# 63 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_10
# 66 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_11
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_4:
# 59 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_2, TestProfLab_ObjectScript_PokeballTwo_6
	goto TestProfLab_ObjectScript_PokeballTwo_3

TestProfLab_ObjectScript_PokeballTwo_6:
# 59 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_3, TestProfLab_ObjectScript_PokeballTwo_2
	goto TestProfLab_ObjectScript_PokeballTwo_3

TestProfLab_ObjectScript_PokeballTwo_9:
# 61 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveBulbasaur
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_10:
# 64 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveChikorita
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_11:
# 67 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveTreecko
	goto TestProfLab_ObjectScript_PokeballTwo_1


TestProfLab_ObjectScript_PokeballThree::
# 79 "data/maps/TestProfLab/scripts.pory"
	lockall
# 80 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_1, TestProfLab_ObjectScript_PokeballThree_4
TestProfLab_ObjectScript_PokeballThree_3:
# 92 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballThree_1:
# 94 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 95 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballThree_2:
# 81 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_9
# 84 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_10
# 87 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_11
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_4:
# 80 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_2, TestProfLab_ObjectScript_PokeballThree_6
	goto TestProfLab_ObjectScript_PokeballThree_3

TestProfLab_ObjectScript_PokeballThree_6:
# 80 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_3, TestProfLab_ObjectScript_PokeballThree_2
	goto TestProfLab_ObjectScript_PokeballThree_3

TestProfLab_ObjectScript_PokeballThree_9:
# 82 "data/maps/TestProfLab/scripts.pory"
	call TestProfLAb_ActionScript_GiveCharmander
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_10:
# 85 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveCyndaquil
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_11:
# 88 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveTorchic
	goto TestProfLab_ObjectScript_PokeballThree_1


TestProfLab_ActionScript_GiveSquirtle::
# 100 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 101 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_0, MSGBOX_YESNO
# 102 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveSquirtle_2
# 126 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 127 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveSquirtle_1:
# 129 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveSquirtle_2:
# 103 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_ORAN_BERRY
# 104 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveSquirtle_5
# 112 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveSquirtle_6
# 121 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 122 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveSquirtle_1

TestProfLab_ActionScript_GiveSquirtle_5:
# 105 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_1
# 107 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 108 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 109 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 110 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveSquirtle_1

TestProfLab_ActionScript_GiveSquirtle_6:
# 113 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_1
# 115 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 116 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 117 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 118 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveSquirtle_1


TestProfLab_ActionScript_GiveTotodile::
# 133 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 134 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTotodile_Text_0, MSGBOX_YESNO
# 135 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveTotodile_1
# 159 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 160 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveTotodile_1:
# 136 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 137 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveTotodile_4
# 145 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveTotodile_5
# 154 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 155 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	return

TestProfLab_ActionScript_GiveTotodile_4:
# 138 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTotodile_Text_1
# 140 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 141 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 142 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 143 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	return

TestProfLab_ActionScript_GiveTotodile_5:
# 146 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTotodile_Text_1
# 148 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 149 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 150 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 151 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	return


TestProfLab_ActionScript_GiveMudkip::
# 165 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 166 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveMudkip_Text_0, MSGBOX_YESNO
# 167 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveMudkip_2
# 191 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 192 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveMudkip_1:
# 194 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveMudkip_2:
# 168 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_ORAN_BERRY
# 169 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveMudkip_5
# 177 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveMudkip_6
# 186 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 187 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveMudkip_1

TestProfLab_ActionScript_GiveMudkip_5:
# 170 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 171 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveMudkip_Text_1
# 172 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 173 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 174 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 175 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveMudkip_1

TestProfLab_ActionScript_GiveMudkip_6:
# 178 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveMudkip_Text_1
# 180 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 181 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 182 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 183 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveMudkip_1


TestProfLab_ActionScript_GiveBulbasaur::
# 198 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 199 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveBulbasaur_Text_0, MSGBOX_YESNO
# 200 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveBulbasaur_2
# 224 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 225 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveBulbasaur_1:
# 227 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveBulbasaur_2:
# 201 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, ITEM_ORAN_BERRY
# 202 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveBulbasaur_5
# 210 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveBulbasaur_6
# 219 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 220 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveBulbasaur_1

TestProfLab_ActionScript_GiveBulbasaur_5:
# 203 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveBulbasaur_Text_1
# 205 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 206 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 207 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 208 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveBulbasaur_1

TestProfLab_ActionScript_GiveBulbasaur_6:
# 211 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 212 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveBulbasaur_Text_1
# 213 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 214 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 215 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 216 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveBulbasaur_1


TestProfLab_ActionScript_GiveChikorita::
# 231 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 232 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveChikorita_Text_0, MSGBOX_YESNO
# 233 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveChikorita_1
# 257 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 258 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveChikorita_1:
# 234 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 235 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveChikorita_4
# 243 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveChikorita_5
# 252 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 253 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	return

TestProfLab_ActionScript_GiveChikorita_4:
# 236 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 237 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveChikorita_Text_1
# 238 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 239 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 240 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 241 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	return

TestProfLab_ActionScript_GiveChikorita_5:
# 244 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveChikorita_Text_1
# 246 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 247 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 248 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 249 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	return


TestProfLab_ActionScript_GiveTreecko::
# 263 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 264 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTreecko_Text_0, MSGBOX_YESNO
# 265 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveTreecko_2
# 289 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 290 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveTreecko_1:
# 292 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveTreecko_2:
# 266 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_TREECKO, 5, ITEM_ORAN_BERRY
# 267 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveTreecko_5
# 275 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveTreecko_6
# 284 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 285 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveTreecko_1

TestProfLab_ActionScript_GiveTreecko_5:
# 268 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 269 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTreecko_Text_1
# 270 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 271 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 272 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 273 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveTreecko_1

TestProfLab_ActionScript_GiveTreecko_6:
# 276 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 277 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTreecko_Text_1
# 278 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 279 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 280 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 281 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveTreecko_1


TestProfLAb_ActionScript_GiveCharmander::
# 296 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 297 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLAb_ActionScript_GiveCharmander_Text_0, MSGBOX_YESNO
# 298 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLAb_ActionScript_GiveCharmander_2
# 322 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 323 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLAb_ActionScript_GiveCharmander_1:
# 325 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLAb_ActionScript_GiveCharmander_2:
# 299 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_ORAN_BERRY
# 300 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLAb_ActionScript_GiveCharmander_5
# 308 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLAb_ActionScript_GiveCharmander_6
# 317 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 318 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLAb_ActionScript_GiveCharmander_1

TestProfLAb_ActionScript_GiveCharmander_5:
# 301 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 302 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLAb_ActionScript_GiveCharmander_Text_1
# 303 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 304 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 305 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 306 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLAb_ActionScript_GiveCharmander_1

TestProfLAb_ActionScript_GiveCharmander_6:
# 309 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 310 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLAb_ActionScript_GiveCharmander_Text_1
# 311 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 312 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 313 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 314 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLAb_ActionScript_GiveCharmander_1


TestProfLab_ActionScript_GiveCyndaquil::
# 329 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 330 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveCyndaquil_Text_0, MSGBOX_YESNO
# 331 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveCyndaquil_1
# 355 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 356 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveCyndaquil_1:
# 332 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 333 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveCyndaquil_4
# 341 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveCyndaquil_5
# 350 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 351 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	return

TestProfLab_ActionScript_GiveCyndaquil_4:
# 334 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 335 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveCyndaquil_Text_1
# 336 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 337 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 338 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 339 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	return

TestProfLab_ActionScript_GiveCyndaquil_5:
# 342 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 343 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveCyndaquil_Text_1
# 344 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 345 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 346 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 347 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	return


TestProfLab_ActionScript_GiveTorchic::
# 361 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 362 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTorchic_Text_0, MSGBOX_YESNO
# 363 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveTorchic_2
# 387 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 388 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveTorchic_1:
# 390 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveTorchic_2:
# 364 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_ORAN_BERRY
# 365 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveTorchic_5
# 373 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveTorchic_6
# 382 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 383 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveTorchic_1

TestProfLab_ActionScript_GiveTorchic_5:
# 366 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTorchic_Text_1
# 368 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 369 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 370 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 371 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveTorchic_1

TestProfLab_ActionScript_GiveTorchic_6:
# 374 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 375 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTorchic_Text_1
# 376 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 377 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 378 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 379 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveTorchic_1


TestProfLab_ActionScript_NicknamePartyMon::
# 394 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 395 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 396 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknamePartyMon_1
	return

TestProfLab_ActionScript_NicknamePartyMon_1:
# 397 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 398 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


TestProfLab_ActionScript_NicknameBoxMon::
# 403 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 404 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 405 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknameBoxMon_2
TestProfLab_ActionScript_NicknameBoxMon_1:
# 408 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

TestProfLab_ActionScript_NicknameBoxMon_2:
# 406 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto TestProfLab_ActionScript_NicknameBoxMon_1


TestProfLab_PersonScript_TestProf_Text_0:
# 14 "data/maps/TestProfLab/scripts.pory"
	.string "Hello, would you like to see more?$"

TestProfLab_PersonScript_TestProf_Text_1:
# 22 "data/maps/TestProfLab/scripts.pory"
	.string "Choose your Pokemon wisely.$"

TestProfLab_PersonScript_TestProf_Text_2:
# 29 "data/maps/TestProfLab/scripts.pory"
	.string "Take care of your Pokemon.$"

TestProfLab_ObjectScript_PokeballOne_Text_0:
# 50 "data/maps/TestProfLab/scripts.pory"
	.string "Don't Take Another.$"

TestProfLab_ActionScript_GiveSquirtle_Text_0:
# 101 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

TestProfLab_ActionScript_GiveSquirtle_Text_1:
# 106 "data/maps/TestProfLab/scripts.pory"
	.string "Received Squirtle!$"

TestProfLab_ActionScript_GiveSquirtle_Text_2:
# 122 "data/maps/TestProfLab/scripts.pory"
	.string "No more room.$"

TestProfLab_ActionScript_GiveTotodile_Text_0:
# 134 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

TestProfLab_ActionScript_GiveTotodile_Text_1:
# 139 "data/maps/TestProfLab/scripts.pory"
	.string "Received Totodile!$"

TestProfLab_ActionScript_GiveMudkip_Text_0:
# 166 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

TestProfLab_ActionScript_GiveMudkip_Text_1:
# 171 "data/maps/TestProfLab/scripts.pory"
	.string "Received Mudkip!$"

TestProfLab_ActionScript_GiveBulbasaur_Text_0:
# 199 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

TestProfLab_ActionScript_GiveBulbasaur_Text_1:
# 204 "data/maps/TestProfLab/scripts.pory"
	.string "Received Bulbasaur!$"

TestProfLab_ActionScript_GiveChikorita_Text_0:
# 232 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

TestProfLab_ActionScript_GiveChikorita_Text_1:
# 237 "data/maps/TestProfLab/scripts.pory"
	.string "Received Chikorita!$"

TestProfLab_ActionScript_GiveTreecko_Text_0:
# 264 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

TestProfLab_ActionScript_GiveTreecko_Text_1:
# 269 "data/maps/TestProfLab/scripts.pory"
	.string "Received Treecko!$"

TestProfLAb_ActionScript_GiveCharmander_Text_0:
# 297 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

TestProfLAb_ActionScript_GiveCharmander_Text_1:
# 302 "data/maps/TestProfLab/scripts.pory"
	.string "Received Charmander!$"

TestProfLab_ActionScript_GiveCyndaquil_Text_0:
# 330 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

TestProfLab_ActionScript_GiveCyndaquil_Text_1:
# 335 "data/maps/TestProfLab/scripts.pory"
	.string "Received Cyndaquil!$"

TestProfLab_ActionScript_GiveTorchic_Text_0:
# 362 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

TestProfLab_ActionScript_GiveTorchic_Text_1:
# 367 "data/maps/TestProfLab/scripts.pory"
	.string "Received Torchic!$"

TestProfLab_ActionScript_NicknamePartyMon_Text_0:
# 394 "data/maps/TestProfLab/scripts.pory"
	.string "Give it a nickname?$"

TestProfLab_TextScript_NotChosen::
# 411 "data/maps/TestProfLab/scripts.pory"
	.string "You did not choose the Pokemon.$"
