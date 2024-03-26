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
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_PersonScript_TestProf_2
# 34 "data/maps/TestProfLab/scripts.pory"
	lock
# 35 "data/maps/TestProfLab/scripts.pory"
	faceplayer
# 36 "data/maps/TestProfLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, TestProfLab_PersonScript_TestProf_15
TestProfLab_PersonScript_TestProf_14:
# 46 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_3, MSGBOX_NPC
TestProfLab_PersonScript_TestProf_12:
# 48 "data/maps/TestProfLab/scripts.pory"
	release
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
	goto_if_eq TestProfLab_PersonScript_TestProf_6
# 21 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestProfLab_PersonScript_TestProf_7
# 25 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestProfLab_PersonScript_TestProf_8
TestProfLab_PersonScript_TestProf_5:
# 29 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_1
# 30 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 31 "data/maps/TestProfLab/scripts.pory"
	release
	goto TestProfLab_PersonScript_TestProf_1

TestProfLab_PersonScript_TestProf_6:
# 18 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 19 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto TestProfLab_PersonScript_TestProf_5

TestProfLab_PersonScript_TestProf_7:
# 22 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 23 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto TestProfLab_PersonScript_TestProf_5

TestProfLab_PersonScript_TestProf_8:
# 26 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 27 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto TestProfLab_PersonScript_TestProf_5

TestProfLab_PersonScript_TestProf_13:
# 37 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_2, MSGBOX_YESNO
# 38 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_PersonScript_TestProf_18
# 42 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_3, MSGBOX_NPC
	goto TestProfLab_PersonScript_TestProf_12

TestProfLab_PersonScript_TestProf_15:
# 36 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, TestProfLab_PersonScript_TestProf_13
	goto TestProfLab_PersonScript_TestProf_14

TestProfLab_PersonScript_TestProf_18:
# 39 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_UpgradeToNatDex
	goto TestProfLab_PersonScript_TestProf_12


TestProfLab_ObjectScript_PokeballOne::
# 54 "data/maps/TestProfLab/scripts.pory"
	lock
# 55 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 56 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballOne_2
# 74 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballOne_1:
# 76 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 77 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballOne_2:
# 57 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_5
# 62 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_6
# 67 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_7
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_5:
# 58 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 59 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 60 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_6:
# 63 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 64 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 65 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_7:
# 68 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 69 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 70 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1


TestProfLab_ObjectScript_PokeballTwo::
# 82 "data/maps/TestProfLab/scripts.pory"
	lock
# 83 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 84 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballTwo_2
# 102 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballTwo_1:
# 104 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 105 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballTwo_2:
# 85 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_5
# 90 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_6
# 95 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_7
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_5:
# 86 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 87 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 88 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_6:
# 91 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 92 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 93 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_7:
# 96 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 97 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 98 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1


TestProfLab_ObjectScript_PokeballThree::
# 110 "data/maps/TestProfLab/scripts.pory"
	lock
# 111 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 112 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballThree_2
# 130 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballThree_1:
# 132 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 133 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballThree_2:
# 113 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_5
# 118 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_6
# 123 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_7
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_5:
# 114 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 115 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 116 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_6:
# 119 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 120 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 121 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_7:
# 124 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 125 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 126 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1


TestProfLab_ActionScript_GiveStarter::
# 138 "data/maps/TestProfLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 139 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_0, MSGBOX_YESNO
# 140 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveStarter_1
# 166 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 167 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveStarter_1:
# 141 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 142 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 2
# 143 "data/maps/TestProfLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 5, ITEM_ORAN_BERRY
# 144 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_BallToRemove
# 145 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveStarter_5
# 151 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveStarter_6
# 159 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 160 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_3
TestProfLab_ActionScript_GiveStarter_4:
# 162 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 163 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_InitiatePokedexSequence
	return

TestProfLab_ActionScript_GiveStarter_5:
# 146 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_1
# 148 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_SetBallFlag
# 149 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveStarter_4

TestProfLab_ActionScript_GiveStarter_6:
# 152 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_1
# 154 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_SetBallFlag
# 155 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
# 156 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_2
	goto TestProfLab_ActionScript_GiveStarter_4


TestProfLab_ActionScript_BallToRemove::
# 172 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_BallToRemove_2
# 176 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_BallToRemove_5
# 180 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_BallToRemove_7
	return

TestProfLab_ActionScript_BallToRemove_2:
# 173 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
	return

TestProfLab_ActionScript_BallToRemove_5:
# 177 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
	return

TestProfLab_ActionScript_BallToRemove_7:
# 181 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
	return


TestProfLab_ActionScript_SetBallFlag::
# 187 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_2
# 191 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_5
# 195 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_7
	return

TestProfLab_ActionScript_SetBallFlag_2:
# 188 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
	return

TestProfLab_ActionScript_SetBallFlag_5:
# 192 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_2
	return

TestProfLab_ActionScript_SetBallFlag_7:
# 196 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_3
	return


TestProfLab_ActionScript_InitiatePokedexSequence::
# 202 "data/maps/TestProfLab/scripts.pory"
	lock
# 203 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 204 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_TurnToProf
# 205 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_InitiatePokedexSequence_2
TestProfLab_ActionScript_InitiatePokedexSequence_1:
# 208 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_InitiatePokedexSequence_5
TestProfLab_ActionScript_InitiatePokedexSequence_4:
# 211 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_InitiatePokedexSequence_8
TestProfLab_ActionScript_InitiatePokedexSequence_7:
# 214 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 215 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 216 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GivePokedex
# 217 "data/maps/TestProfLab/scripts.pory"
	release
	return

TestProfLab_ActionScript_InitiatePokedexSequence_2:
# 206 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallOne
	goto TestProfLab_ActionScript_InitiatePokedexSequence_1

TestProfLab_ActionScript_InitiatePokedexSequence_5:
# 209 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallTwo
	goto TestProfLab_ActionScript_InitiatePokedexSequence_4

TestProfLab_ActionScript_InitiatePokedexSequence_8:
# 212 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallThree
	goto TestProfLab_ActionScript_InitiatePokedexSequence_7


TestProfLab_ActionScript_GivePokedex::
# 222 "data/maps/TestProfLab/scripts.pory"
	lock
# 223 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_TakePokedex, MSGBOX_DEFAULT
# 224 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 225 "data/maps/TestProfLab/scripts.pory"
	message TestProfLab_ActionScript_GivePokedex_Text_0
# 226 "data/maps/TestProfLab/scripts.pory"
	waitfanfare
# 227 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 228 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 229 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 230 "data/maps/TestProfLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 231 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 232 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 233 "data/maps/TestProfLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 234 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GivePokedex_Text_1, MSGBOX_DEFAULT
# 235 "data/maps/TestProfLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 236 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GivePokedex_Text_2, MSGBOX_DEFAULT
# 237 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 238 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_ActionScript_UpgradeToNatDex::
# 243 "data/maps/TestProfLab/scripts.pory"
	lock
# 244 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/TestProfLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 246 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 247 "data/maps/TestProfLab/scripts.pory"
	waitfanfare
# 248 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 249 "data/maps/TestProfLab/scripts.pory"
	special EnableNationalPokedex
# 250 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 251 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_ActionScript_StarterFade::
# 256 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 257 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 258 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


TestProfLab_ActionScript_NicknamePartyMon::
# 263 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 264 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 265 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknamePartyMon_1
	return

TestProfLab_ActionScript_NicknamePartyMon_1:
# 266 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 267 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


TestProfLab_ActionScript_NicknameBoxMon::
# 272 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 273 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 274 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknameBoxMon_2
TestProfLab_ActionScript_NicknameBoxMon_1:
# 277 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

TestProfLab_ActionScript_NicknameBoxMon_2:
# 275 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto TestProfLab_ActionScript_NicknameBoxMon_1


TestProfLab_TriggerScript_StartStarterSequence::
# 281 "data/maps/TestProfLab/scripts.pory"
	lock
# 282 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_MeetTestProf
# 283 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 284 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_BeginAdventureText
# 285 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 286 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 287 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_ProfMoves
# 288 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 289 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 1
# 290 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_TriggerScript_StartStarterSequence2::
# 294 "data/maps/TestProfLab/scripts.pory"
	lock
# 295 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_MeetTestProf2
# 296 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 297 "data/maps/TestProfLab/scripts.pory"
	goto TestProfLab_TriggerScript_StartStarterSequence
	return


TestProfLab_TriggerScript_StopLeaving::
# 301 "data/maps/TestProfLab/scripts.pory"
	lockall
# 302 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TriggerScript_StopLeaving_Text_0
# 303 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_DoNotLeave
# 304 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 305 "data/maps/TestProfLab/scripts.pory"
	releaseall
	return


# 308 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MeetTestProf:
# 309 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 309 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 309 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 309 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

# 312 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MeetTestProf2:
# 313 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 316 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_ProfMoves:
# 317 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 318 "data/maps/TestProfLab/scripts.pory"
	walk_right
# 318 "data/maps/TestProfLab/scripts.pory"
	walk_right
# 319 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 320 "data/maps/TestProfLab/scripts.pory"
	face_down
	step_end

# 323 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallOne:
# 324 "data/maps/TestProfLab/scripts.pory"
	walk_left
# 324 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 327 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallTwo:
# 328 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 331 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallThree:
# 332 "data/maps/TestProfLab/scripts.pory"
	face_left
	step_end

# 335 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_TurnToProf:
# 336 "data/maps/TestProfLab/scripts.pory"
	face_right
	step_end

# 339 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_DoNotLeave:
# 340 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

TestProfLab_PersonScript_TestProf_Text_0:
# 14 "data/maps/TestProfLab/scripts.pory"
	.string "Hello, would you like to see more?$"

TestProfLab_PersonScript_TestProf_Text_1:
# 29 "data/maps/TestProfLab/scripts.pory"
	.string "Choose wisely...$"

TestProfLab_PersonScript_TestProf_Text_2:
# 37 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to upgrade to the National\n"
	.string "Dex?$"

TestProfLab_PersonScript_TestProf_Text_3:
# 42 "data/maps/TestProfLab/scripts.pory"
	.string "Please take care of your Pokemon.$"

TestProfLab_ObjectScript_PokeballOne_Text_0:
# 74 "data/maps/TestProfLab/scripts.pory"
	.string "Don't Take Another.$"

TestProfLab_ActionScript_GiveStarter_Text_0:
# 139 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

TestProfLab_ActionScript_GiveStarter_Text_1:
# 147 "data/maps/TestProfLab/scripts.pory"
	.string "Received {STR_VAR_1}!$"

TestProfLab_ActionScript_GiveStarter_Text_2:
# 156 "data/maps/TestProfLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

TestProfLab_ActionScript_GiveStarter_Text_3:
# 160 "data/maps/TestProfLab/scripts.pory"
	.string "No more room for Pokemon!$"

TestProfLab_ActionScript_GivePokedex_Text_0:
# 225 "data/maps/TestProfLab/scripts.pory"
	.string "{PLAYER} received the Pokedex!$"

TestProfLab_ActionScript_GivePokedex_Text_1:
# 234 "data/maps/TestProfLab/scripts.pory"
	.string "Also take these with you...$"

TestProfLab_ActionScript_GivePokedex_Text_2:
# 236 "data/maps/TestProfLab/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex.$"

TestProfLab_ActionScript_NicknamePartyMon_Text_0:
# 263 "data/maps/TestProfLab/scripts.pory"
	.string "Give it a nickname?$"

TestProfLab_TriggerScript_StopLeaving_Text_0:
# 302 "data/maps/TestProfLab/scripts.pory"
	.string "You need to choose a Pokemon!$"

TestProfLab_TextScript_BeginAdventureText::
# 343 "data/maps/TestProfLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}TestProf:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is\n"
	.string "TestProf. This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now choose wisely.\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.$"

TestProfLab_TextScript_TakePokedex::
# 353 "data/maps/TestProfLab/scripts.pory"
	.string "Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this Pokedex.$"

TestProfLab_TextScript_NotChosen::
# 359 "data/maps/TestProfLab/scripts.pory"
	.string "You did not choose {STR_VAR_1}.$"
