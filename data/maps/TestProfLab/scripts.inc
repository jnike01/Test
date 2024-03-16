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
	goto_if_unset FLAG_PROF_BALL_1, TestProfLab_PersonScript_TestProf_4
TestProfLab_PersonScript_TestProf_3:
# 34 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_2, MSGBOX_NPC
TestProfLab_PersonScript_TestProf_1:
	end

TestProfLab_PersonScript_TestProf_2:
# 12 "data/maps/TestProfLab/scripts.pory"
	lock
# 13 "data/maps/TestProfLab/scripts.pory"
	faceplayer
# 14 "data/maps/TestProfLab/scripts.pory"
	message TestProfLab_PersonScript_TestProf_Text_0
# 15 "data/maps/TestProfLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 16 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 17 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestProfLab_PersonScript_TestProf_10
# 21 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestProfLab_PersonScript_TestProf_11
# 25 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestProfLab_PersonScript_TestProf_12
TestProfLab_PersonScript_TestProf_9:
# 29 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_1
# 30 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 31 "data/maps/TestProfLab/scripts.pory"
	release
	goto TestProfLab_PersonScript_TestProf_1

TestProfLab_PersonScript_TestProf_4:
# 11 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_2, TestProfLab_PersonScript_TestProf_6
	goto TestProfLab_PersonScript_TestProf_3

TestProfLab_PersonScript_TestProf_6:
# 11 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_3, TestProfLab_PersonScript_TestProf_2
	goto TestProfLab_PersonScript_TestProf_3

TestProfLab_PersonScript_TestProf_10:
# 18 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 19 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto TestProfLab_PersonScript_TestProf_9

TestProfLab_PersonScript_TestProf_11:
# 22 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 23 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto TestProfLab_PersonScript_TestProf_9

TestProfLab_PersonScript_TestProf_12:
# 26 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 27 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto TestProfLab_PersonScript_TestProf_9


TestProfLab_ObjectScript_PokeballOne::
# 40 "data/maps/TestProfLab/scripts.pory"
	lockall
# 41 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_1, TestProfLab_ObjectScript_PokeballOne_4
TestProfLab_ObjectScript_PokeballOne_3:
# 53 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballOne_1:
# 55 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 56 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballOne_2:
# 42 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_9
# 45 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_10
# 48 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_11
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_4:
# 41 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_2, TestProfLab_ObjectScript_PokeballOne_6
	goto TestProfLab_ObjectScript_PokeballOne_3

TestProfLab_ObjectScript_PokeballOne_6:
# 41 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_3, TestProfLab_ObjectScript_PokeballOne_2
	goto TestProfLab_ObjectScript_PokeballOne_3

TestProfLab_ObjectScript_PokeballOne_9:
# 43 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveSquirtle
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_10:
# 46 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveTotodile
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_11:
# 49 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveMudkip
	goto TestProfLab_ObjectScript_PokeballOne_1


TestProfLab_ObjectScript_PokeballTwo::
# 61 "data/maps/TestProfLab/scripts.pory"
	lockall
# 62 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_1, TestProfLab_ObjectScript_PokeballTwo_4
TestProfLab_ObjectScript_PokeballTwo_3:
# 74 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballTwo_1:
# 76 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 77 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballTwo_2:
# 63 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_9
# 66 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_10
# 69 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_11
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_4:
# 62 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_2, TestProfLab_ObjectScript_PokeballTwo_6
	goto TestProfLab_ObjectScript_PokeballTwo_3

TestProfLab_ObjectScript_PokeballTwo_6:
# 62 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_3, TestProfLab_ObjectScript_PokeballTwo_2
	goto TestProfLab_ObjectScript_PokeballTwo_3

TestProfLab_ObjectScript_PokeballTwo_9:
# 64 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveBulbasaur
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_10:
# 67 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveChikorita
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_11:
# 70 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveTreecko
	goto TestProfLab_ObjectScript_PokeballTwo_1


TestProfLab_ObjectScript_PokeballThree::
# 82 "data/maps/TestProfLab/scripts.pory"
	lockall
# 83 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_1, TestProfLab_ObjectScript_PokeballThree_4
TestProfLab_ObjectScript_PokeballThree_3:
# 95 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballThree_1:
# 97 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 98 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballThree_2:
# 84 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_9
# 87 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_10
# 90 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_11
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_4:
# 83 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_2, TestProfLab_ObjectScript_PokeballThree_6
	goto TestProfLab_ObjectScript_PokeballThree_3

TestProfLab_ObjectScript_PokeballThree_6:
# 83 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_PROF_BALL_3, TestProfLab_ObjectScript_PokeballThree_2
	goto TestProfLab_ObjectScript_PokeballThree_3

TestProfLab_ObjectScript_PokeballThree_9:
# 85 "data/maps/TestProfLab/scripts.pory"
	call TestProfLAb_ActionScript_GiveCharmander
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_10:
# 88 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveCyndaquil
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_11:
# 91 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveTorchic
	goto TestProfLab_ObjectScript_PokeballThree_1


TestProfLab_ActionScript_GiveSquirtle::
# 103 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 104 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_0, MSGBOX_YESNO
# 105 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveSquirtle_2
# 129 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 130 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveSquirtle_1:
# 132 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveSquirtle_2:
# 106 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_ORAN_BERRY
# 107 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveSquirtle_5
# 115 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveSquirtle_6
# 124 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 125 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveSquirtle_1

TestProfLab_ActionScript_GiveSquirtle_5:
# 108 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_1
# 110 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 111 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 112 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 113 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveSquirtle_1

TestProfLab_ActionScript_GiveSquirtle_6:
# 116 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_1
# 118 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 119 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 120 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 121 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveSquirtle_1


TestProfLab_ActionScript_GiveTotodile::
# 136 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 137 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTotodile_Text_0, MSGBOX_YESNO
# 138 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveTotodile_1
# 162 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 163 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveTotodile_1:
# 139 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 140 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveTotodile_4
# 148 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveTotodile_5
# 157 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 158 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	return

TestProfLab_ActionScript_GiveTotodile_4:
# 141 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTotodile_Text_1
# 143 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 144 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 145 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 146 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	return

TestProfLab_ActionScript_GiveTotodile_5:
# 149 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 150 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTotodile_Text_1
# 151 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 152 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 153 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 154 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	return


TestProfLab_ActionScript_GiveMudkip::
# 168 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 169 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveMudkip_Text_0, MSGBOX_YESNO
# 170 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveMudkip_2
# 194 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 195 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveMudkip_1:
# 197 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveMudkip_2:
# 171 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_ORAN_BERRY
# 172 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveMudkip_5
# 180 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveMudkip_6
# 189 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 190 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveMudkip_1

TestProfLab_ActionScript_GiveMudkip_5:
# 173 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 174 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveMudkip_Text_1
# 175 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 176 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 177 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 178 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveMudkip_1

TestProfLab_ActionScript_GiveMudkip_6:
# 181 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 182 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveMudkip_Text_1
# 183 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 184 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 185 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 186 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveMudkip_1


TestProfLab_ActionScript_GiveBulbasaur::
# 201 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 202 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveBulbasaur_Text_0, MSGBOX_YESNO
# 203 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveBulbasaur_2
# 227 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 228 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveBulbasaur_1:
# 230 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveBulbasaur_2:
# 204 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, ITEM_ORAN_BERRY
# 205 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveBulbasaur_5
# 213 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveBulbasaur_6
# 222 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 223 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveBulbasaur_1

TestProfLab_ActionScript_GiveBulbasaur_5:
# 206 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 207 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveBulbasaur_Text_1
# 208 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 209 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 210 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 211 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveBulbasaur_1

TestProfLab_ActionScript_GiveBulbasaur_6:
# 214 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 215 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveBulbasaur_Text_1
# 216 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 217 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 218 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 219 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveBulbasaur_1


TestProfLab_ActionScript_GiveChikorita::
# 234 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 235 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveChikorita_Text_0, MSGBOX_YESNO
# 236 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveChikorita_1
# 260 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 261 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveChikorita_1:
# 237 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 238 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveChikorita_4
# 246 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveChikorita_5
# 255 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 256 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	return

TestProfLab_ActionScript_GiveChikorita_4:
# 239 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 240 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveChikorita_Text_1
# 241 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 242 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 243 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 244 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	return

TestProfLab_ActionScript_GiveChikorita_5:
# 247 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveChikorita_Text_1
# 249 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 250 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 251 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 252 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	return


TestProfLab_ActionScript_GiveTreecko::
# 266 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 267 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTreecko_Text_0, MSGBOX_YESNO
# 268 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveTreecko_2
# 292 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 293 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveTreecko_1:
# 295 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveTreecko_2:
# 269 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_TREECKO, 5, ITEM_ORAN_BERRY
# 270 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveTreecko_5
# 278 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveTreecko_6
# 287 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 288 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveTreecko_1

TestProfLab_ActionScript_GiveTreecko_5:
# 271 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTreecko_Text_1
# 273 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 274 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 275 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 276 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveTreecko_1

TestProfLab_ActionScript_GiveTreecko_6:
# 279 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 280 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTreecko_Text_1
# 281 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 282 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 283 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 284 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveTreecko_1


TestProfLAb_ActionScript_GiveCharmander::
# 299 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 300 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLAb_ActionScript_GiveCharmander_Text_0, MSGBOX_YESNO
# 301 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLAb_ActionScript_GiveCharmander_2
# 325 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 326 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLAb_ActionScript_GiveCharmander_1:
# 328 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLAb_ActionScript_GiveCharmander_2:
# 302 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_ORAN_BERRY
# 303 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLAb_ActionScript_GiveCharmander_5
# 311 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLAb_ActionScript_GiveCharmander_6
# 320 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 321 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLAb_ActionScript_GiveCharmander_1

TestProfLAb_ActionScript_GiveCharmander_5:
# 304 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 305 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLAb_ActionScript_GiveCharmander_Text_1
# 306 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 307 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 308 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 309 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLAb_ActionScript_GiveCharmander_1

TestProfLAb_ActionScript_GiveCharmander_6:
# 312 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 313 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLAb_ActionScript_GiveCharmander_Text_1
# 314 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 315 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 316 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 317 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLAb_ActionScript_GiveCharmander_1


TestProfLab_ActionScript_GiveCyndaquil::
# 332 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 333 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveCyndaquil_Text_0, MSGBOX_YESNO
# 334 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveCyndaquil_1
# 358 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 359 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveCyndaquil_1:
# 335 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 336 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveCyndaquil_4
# 344 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveCyndaquil_5
# 353 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 354 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	return

TestProfLab_ActionScript_GiveCyndaquil_4:
# 337 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 338 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveCyndaquil_Text_1
# 339 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 340 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 341 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 342 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	return

TestProfLab_ActionScript_GiveCyndaquil_5:
# 345 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 346 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveCyndaquil_Text_1
# 347 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 348 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 349 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 350 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	return


TestProfLab_ActionScript_GiveTorchic::
# 364 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 365 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTorchic_Text_0, MSGBOX_YESNO
# 366 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveTorchic_2
# 390 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 391 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ActionScript_GiveTorchic_1:
# 393 "data/maps/TestProfLab/scripts.pory"
	waitmessage
	return

TestProfLab_ActionScript_GiveTorchic_2:
# 367 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_ORAN_BERRY
# 368 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveTorchic_5
# 376 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveTorchic_6
# 385 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 386 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveSquirtle_Text_2
	goto TestProfLab_ActionScript_GiveTorchic_1

TestProfLab_ActionScript_GiveTorchic_5:
# 369 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 370 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTorchic_Text_1
# 371 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 372 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 373 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 374 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveTorchic_1

TestProfLab_ActionScript_GiveTorchic_6:
# 377 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 378 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveTorchic_Text_1
# 379 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 380 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 381 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 382 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ActionScript_GiveTorchic_1


TestProfLab_ActionScript_StarterFade::
# 397 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 398 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 399 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


TestProfLab_ActionScript_NicknamePartyMon::
# 404 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 405 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 406 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknamePartyMon_1
	return

TestProfLab_ActionScript_NicknamePartyMon_1:
# 407 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 408 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


TestProfLab_ActionScript_NicknameBoxMon::
# 413 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 414 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 415 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknameBoxMon_2
TestProfLab_ActionScript_NicknameBoxMon_1:
# 418 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

TestProfLab_ActionScript_NicknameBoxMon_2:
# 416 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto TestProfLab_ActionScript_NicknameBoxMon_1


TestProfLab_PersonScript_TestProf_Text_0:
# 14 "data/maps/TestProfLab/scripts.pory"
	.string "Hello, would you like to see more?$"

TestProfLab_PersonScript_TestProf_Text_1:
# 29 "data/maps/TestProfLab/scripts.pory"
	.string "Choose wisely...$"

TestProfLab_PersonScript_TestProf_Text_2:
# 34 "data/maps/TestProfLab/scripts.pory"
	.string "Please take care of your Pokemon.$"

TestProfLab_ObjectScript_PokeballOne_Text_0:
# 53 "data/maps/TestProfLab/scripts.pory"
	.string "Don't Take Another.$"

TestProfLab_ActionScript_GiveSquirtle_Text_0:
# 104 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

TestProfLab_ActionScript_GiveSquirtle_Text_1:
# 109 "data/maps/TestProfLab/scripts.pory"
	.string "Received Squirtle!$"

TestProfLab_ActionScript_GiveSquirtle_Text_2:
# 125 "data/maps/TestProfLab/scripts.pory"
	.string "No more room.$"

TestProfLab_ActionScript_GiveTotodile_Text_0:
# 137 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

TestProfLab_ActionScript_GiveTotodile_Text_1:
# 142 "data/maps/TestProfLab/scripts.pory"
	.string "Received Totodile!$"

TestProfLab_ActionScript_GiveMudkip_Text_0:
# 169 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

TestProfLab_ActionScript_GiveMudkip_Text_1:
# 174 "data/maps/TestProfLab/scripts.pory"
	.string "Received Mudkip!$"

TestProfLab_ActionScript_GiveBulbasaur_Text_0:
# 202 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

TestProfLab_ActionScript_GiveBulbasaur_Text_1:
# 207 "data/maps/TestProfLab/scripts.pory"
	.string "Received Bulbasaur!$"

TestProfLab_ActionScript_GiveChikorita_Text_0:
# 235 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

TestProfLab_ActionScript_GiveChikorita_Text_1:
# 240 "data/maps/TestProfLab/scripts.pory"
	.string "Received Chikorita!$"

TestProfLab_ActionScript_GiveTreecko_Text_0:
# 267 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

TestProfLab_ActionScript_GiveTreecko_Text_1:
# 272 "data/maps/TestProfLab/scripts.pory"
	.string "Received Treecko!$"

TestProfLAb_ActionScript_GiveCharmander_Text_0:
# 300 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

TestProfLAb_ActionScript_GiveCharmander_Text_1:
# 305 "data/maps/TestProfLab/scripts.pory"
	.string "Received Charmander!$"

TestProfLab_ActionScript_GiveCyndaquil_Text_0:
# 333 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

TestProfLab_ActionScript_GiveCyndaquil_Text_1:
# 338 "data/maps/TestProfLab/scripts.pory"
	.string "Received Cyndaquil!$"

TestProfLab_ActionScript_GiveTorchic_Text_0:
# 365 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

TestProfLab_ActionScript_GiveTorchic_Text_1:
# 370 "data/maps/TestProfLab/scripts.pory"
	.string "Received Torchic!$"

TestProfLab_ActionScript_NicknamePartyMon_Text_0:
# 404 "data/maps/TestProfLab/scripts.pory"
	.string "Give it a nickname?$"

TestProfLab_TextScript_NotChosen::
# 421 "data/maps/TestProfLab/scripts.pory"
	.string "You did not choose the Pokemon.$"
