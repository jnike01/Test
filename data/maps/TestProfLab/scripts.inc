TestProfLab_MapScripts::
	.byte 0


TestProfLab_PersonScript_TestProf::
# 4 "data/maps/TestProfLab/scripts.pory"
	lockall
# 5 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_0
# 6 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end


TestProfLab_ObjectScript_PokeballOne::
# 11 "data/maps/TestProfLab/scripts.pory"
	lockall
# 12 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 13 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0, MSGBOX_YESNO
# 14 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_2
# 36 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 37 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ObjectScript_PokeballOne_1:
# 39 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 40 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballOne_2:
# 15 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 16 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_5
# 23 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_6
# 31 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 32 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_2
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_5:
# 17 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_1
# 19 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 20 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 21 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_6:
# 24 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_1
# 26 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
# 27 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 28 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ObjectScript_PokeballOne_1


TestProfLab_ObjectScript_PokeballTwo::
# 45 "data/maps/TestProfLab/scripts.pory"
	lockall
# 46 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 47 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballTwo_Text_0, MSGBOX_YESNO
# 48 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_2
# 70 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 71 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ObjectScript_PokeballTwo_1:
# 73 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 74 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballTwo_2:
# 49 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 50 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_5
# 57 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_6
# 65 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 66 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_2
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_5:
# 51 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballTwo_Text_1
# 53 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 54 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 55 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_6:
# 58 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballTwo_Text_1
# 60 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
# 61 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 62 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ObjectScript_PokeballTwo_1


TestProfLab_ObjectScript_PokeballThree::
# 79 "data/maps/TestProfLab/scripts.pory"
	lockall
# 80 "data/maps/TestProfLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 81 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballThree_Text_0, MSGBOX_YESNO
# 82 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_2
# 104 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 105 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
TestProfLab_ObjectScript_PokeballThree_1:
# 107 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 108 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballThree_2:
# 83 "data/maps/TestProfLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 84 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_5
# 91 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_6
# 99 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 100 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_2
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_5:
# 85 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballThree_Text_1
# 87 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 88 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 89 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_6:
# 92 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 93 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballThree_Text_1
# 94 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
# 95 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
# 96 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
	goto TestProfLab_ObjectScript_PokeballThree_1


TestProfLab_ActionScript_NicknamePartyMon::
# 113 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 114 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 115 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknamePartyMon_1
	return

TestProfLab_ActionScript_NicknamePartyMon_1:
# 116 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 117 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


TestProfLab_ActionScript_NicknameBoxMon::
# 122 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 123 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 124 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknameBoxMon_2
TestProfLab_ActionScript_NicknameBoxMon_1:
# 127 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

TestProfLab_ActionScript_NicknameBoxMon_2:
# 125 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto TestProfLab_ActionScript_NicknameBoxMon_1


TestProfLab_PersonScript_TestProf_Text_0:
# 5 "data/maps/TestProfLab/scripts.pory"
	.string "I'm in development...$"

TestProfLab_ObjectScript_PokeballOne_Text_0:
# 13 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

TestProfLab_ObjectScript_PokeballOne_Text_1:
# 18 "data/maps/TestProfLab/scripts.pory"
	.string "Received Totodile!$"

TestProfLab_ObjectScript_PokeballOne_Text_2:
# 32 "data/maps/TestProfLab/scripts.pory"
	.string "No more room.$"

TestProfLab_ObjectScript_PokeballTwo_Text_0:
# 47 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

TestProfLab_ObjectScript_PokeballTwo_Text_1:
# 52 "data/maps/TestProfLab/scripts.pory"
	.string "Received Chikorita!$"

TestProfLab_ObjectScript_PokeballThree_Text_0:
# 81 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

TestProfLab_ObjectScript_PokeballThree_Text_1:
# 86 "data/maps/TestProfLab/scripts.pory"
	.string "Received Cyndaquil!$"

TestProfLab_ActionScript_NicknamePartyMon_Text_0:
# 113 "data/maps/TestProfLab/scripts.pory"
	.string "Give it a nickname?$"

TestProfLab_TextScript_NotChosen::
# 130 "data/maps/TestProfLab/scripts.pory"
	.string "You did not choose the Pokemon.$"
