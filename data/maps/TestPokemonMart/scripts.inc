TestPokemonMart_MapScripts::
	.byte 0


TestPokemonMart_PersonScript_Employee::
# 4 "data/maps/TestPokemonMart/scripts.pory"
	lock
# 5 "data/maps/TestPokemonMart/scripts.pory"
	faceplayer
# 6 "data/maps/TestPokemonMart/scripts.pory"
	message TestPokemonMart_PersonScript_Employee_Text_0
# 7 "data/maps/TestPokemonMart/scripts.pory"
	waitmessage
# 8 "data/maps/TestPokemonMart/scripts.pory"
	pokemart TestPokemonMart_MartScript
# 9 "data/maps/TestPokemonMart/scripts.pory"
	msgbox TestPokemonMart_PersonScript_Employee_Text_1
# 10 "data/maps/TestPokemonMart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/TestPokemonMart/scripts.pory"
TestPokemonMart_MartScript:
# 15 "data/maps/TestPokemonMart/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 16 "data/maps/TestPokemonMart/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 17 "data/maps/TestPokemonMart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 18 "data/maps/TestPokemonMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 19 "data/maps/TestPokemonMart/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

TestPokemonMart_PersonScript_Employee_Text_0:
# 6 "data/maps/TestPokemonMart/scripts.pory"
	.string "How may I help you?$"

TestPokemonMart_PersonScript_Employee_Text_1:
# 9 "data/maps/TestPokemonMart/scripts.pory"
	.string "Please come again soon!$"
