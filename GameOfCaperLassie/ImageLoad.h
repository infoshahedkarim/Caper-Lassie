#ifndef IMAGELOAD_H_INCLUDED
#define IMAGELOAD_H_INCLUDED

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::All The images Are Loaded Here:::::::::::::::::::::::::::
//Image Loading Functions::

void ImageLoad()
{	
	//Images:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
	
	//Background:::::::::::::::::::
	background[0] = iLoadImage("images\\background4.png");
	background[1] = iLoadImage("images\\background3.png");
	background[2] = iLoadImage("images\\jungle5.png");
	background[3] = iLoadImage("images\\level3main.png");
	background[4] = iLoadImage("images\\backgroundlevel5.png");
	background[5] = iLoadImage("images\\backgroundlevel6.png");
	background[6] = iLoadImage("images\\menublurred.png");
	background[7] = iLoadImage("images\\finallevel1.png");

	//MenuPAGE,OptionPage,CreditPage,InstructionPage:::
	menuimage = iLoadImage("images\\menu.jpg");
	instructionimage = iLoadImage("images\\instruction.png");
	creditiimage = iLoadImage("images\\credit.png");


	//Character::::::::::::::::::
	//Boystand
	//Right
	stand[0] = iLoadImage("images\\boy\\boystand (1).png");
	stand[1] = iLoadImage("images\\boy\\boystand (2).png");
	stand[2] = iLoadImage("images\\boy\\boystand (1).png");
	//Left
	standback[0] = iLoadImage("images\\boy\\boystandback (1).png");
	standback[1] = iLoadImage("images\\boy\\boystandback (2).png");
	standback[2] = iLoadImage("images\\boy\\boystandback (1).png");
	//Boywalk::
	//Right
	boy[0] = iLoadImage("images\\boy\\boy (1).png");
	boy[1] = iLoadImage("images\\boy\\boy (2).png");
	boy[2] = iLoadImage("images\\boy\\boy (3).png");
	boy[3] = iLoadImage("images\\boy\\boy (4).png");
	boy[4] = iLoadImage("images\\boy\\boy (5).png");
	boy[5] = iLoadImage("images\\boy\\boy (6).png");
	boy[6] = iLoadImage("images\\boy\\boy (7).png");
	boy[7] = iLoadImage("images\\boy\\boy (8).png");
	//left
	lefto[0] = iLoadImage("images\\boy\\left\\walkleft (1).png");
	lefto[1] = iLoadImage("images\\boy\\left\\walkleft (2).png");
	lefto[2] = iLoadImage("images\\boy\\left\\walkleft (3).png");
	lefto[3] = iLoadImage("images\\boy\\left\\walkleft (4).png");
	lefto[4] = iLoadImage("images\\boy\\left\\walkleft (5).png");
	lefto[5] = iLoadImage("images\\boy\\left\\walkleft (6).png");
	lefto[6] = iLoadImage("images\\boy\\left\\walkleft (7).png");
	lefto[7] = iLoadImage("images\\boy\\left\\walkleft (8).png");
	//life
	boylife[0] = iLoadImage("images\\life.png");
	boylife[1] = iLoadImage("images\\life.png");
	boylife[2] = iLoadImage("images\\life.png");
	boylife[3] = iLoadImage("images\\life.png");
	boylife[4] = iLoadImage("images\\life.png");


	//Object:::::::::::::::::::::
	//Crate
	crate = iLoadImage("images\\crate.gif");
	//Portals
	portal[0] = iLoadImage("images\\portal\\portal (1).png");
	portal[1] = iLoadImage("images\\portal\\portal (2).png");
	portal[2] = iLoadImage("images\\portal\\portal (3).png");
	portal[3] = iLoadImage("images\\portal\\portal (4).png");
	portal[4] = iLoadImage("images\\portal\\portal (5).png");
	portal[5] = iLoadImage("images\\portal\\portal (6).png");
	portal[6] = iLoadImage("images\\portal\\portal (7).png");
	portal[7] = iLoadImage("images\\portal\\portal (8).png");
	portal2[0] = iLoadImage("images\\portal\\portal2 (1).png");
	portal2[1] = iLoadImage("images\\portal\\portal2 (2).png");
	portal2[2] = iLoadImage("images\\portal\\portal2 (3).png");
	portal2[3] = iLoadImage("images\\portal\\portal2 (4).png");
	portal2[4] = iLoadImage("images\\portal\\portal2 (5).png");
	portal2[5] = iLoadImage("images\\portal\\portal2 (6).png");
	portal2[6] = iLoadImage("images\\portal\\portal2 (7).png");
	portal2[7] = iLoadImage("images\\portal\\portal2 (8).png");
	portal3[0] = iLoadImage("images\\portal\\portal3 (1).png");
	portal3[1] = iLoadImage("images\\portal\\portal3 (2).png");
	portal3[2] = iLoadImage("images\\portal\\portal3 (3).png");
	portal3[3] = iLoadImage("images\\portal\\portal3 (4).png");
	portal4[0] = iLoadImage("images\\portal\\portal4 (1).png");
	portal4[1] = iLoadImage("images\\portal\\portal4 (2).png");
	portal4[2] = iLoadImage("images\\portal\\portal4 (3).png");
	portal4[3] = iLoadImage("images\\portal\\portal4 (4).png");
	portal5[0] = iLoadImage("images\\portal\\portal5 (1).png");
	portal5[1] = iLoadImage("images\\portal\\portal5 (2).png");
	portal5[2] = iLoadImage("images\\portal\\portal5 (3).png");
	portal5[3] = iLoadImage("images\\portal\\portal5 (4).png");

	//Birds::
	bird[0] = iLoadImage("images\\birds\\bird (1).png");
	bird[1] = iLoadImage("images\\birds\\bird (2).png");
	bird[2] = iLoadImage("images\\birds\\bird (3).png");
	bird[3] = iLoadImage("images\\birds\\bird (4).png");

	//frog::
	//idle
	frog[0] = iLoadImage("images\\frog\\frog (1).png");
	frog[1] = iLoadImage("images\\frog\\frog (2).png");
	frog[2] = iLoadImage("images\\frog\\frog (3).png");
	frog[3] = iLoadImage("images\\frog\\frog (4).png");
	frog[4] = iLoadImage("images\\frog\\frog (5).png");
	//attack::
	bite[0] = iLoadImage("images\\frog\\Bite\\bite (1).png");
	bite[1] = iLoadImage("images\\frog\\Bite\\bite (2).png");
	bite[2] = iLoadImage("images\\frog\\Bite\\bite (3).png");
	bite[3] = iLoadImage("images\\frog\\Bite\\bite (4).png");
	bite[4] = iLoadImage("images\\frog\\Bite\\bite (5).png");
	bite[5] = iLoadImage("images\\frog\\Bite\\bite (6).png");
	bite[6] = iLoadImage("images\\frog\\Bite\\bite (7).png");
	bite[7] = iLoadImage("images\\frog\\Bite\\bite (8).png");
	bite[8] = iLoadImage("images\\frog\\Bite\\bite (9).png");
	bite[9] = iLoadImage("images\\frog\\Bite\\bite (10).png");
	bite[10] = iLoadImage("images\\frog\\Bite\\bite (1).png");

	//rock
	rock = iLoadImage("images\\rock.png");
	//chain
	chain[0] = iLoadImage("images\\chainclosed.png");
	chain[1] = iLoadImage("images\\chainopened.png");

	//trigger
	triggers[0] = iLoadImage("images\\trigger.png");
	triggers[4] = iLoadImage("images\\triggered2.png");

	//Cannibal Tree::
	Tree[0] = iLoadImage("images\\Tree\\tree (1).png");
	Tree[1] = iLoadImage("images\\Tree\\tree (2).png");
	Tree[2] = iLoadImage("images\\Tree\\tree (3).png");
	Tree[3] = iLoadImage("images\\Tree\\tree (4).png");
	Tree[4] = iLoadImage("images\\Tree\\tree (5).png");
	Tree[5] = iLoadImage("images\\Tree\\tree (6).png");
	Tree[6] = iLoadImage("images\\Tree\\tree (7).png");
	Tree[7] = iLoadImage("images\\Tree\\tree (8).png");

	//sword
	sword[0] = iLoadImage("images\\swordstand.png");
	sword[1] = iLoadImage("images\\swordfly.png");

	

	//buttons
	//home
	button[1] = iLoadImage("images\\button\\home.png");
	button[0] = iLoadImage("images\\button\\home2.png");
	//play
	button[2] = iLoadImage("images\\button\\play.png");
	button[3] = iLoadImage("images\\button\\play2.png");
	//option
	button[4] = iLoadImage("images\\button\\option.png");
	button[5] = iLoadImage("images\\button\\option2.png");
	//credit
	button[6] = iLoadImage("images\\button\\credit.png");
	button[7] = iLoadImage("images\\button\\credit2.png");
	//tutorial
	button[8] = iLoadImage("images\\button\\tutorial.png");
	button[9] = iLoadImage("images\\button\\tutorial2.png");
	//quit
	button[10] = iLoadImage("images\\button\\quit.png");
	button[11] = iLoadImage("images\\button\\quit2.png");
	//save
	button[12] = iLoadImage("images\\button\\save2.png");
	button[13] = iLoadImage("images\\button\\save.png");
	button[14] = iLoadImage("images\\button\\save3.png");
	//load
	button[15] = iLoadImage("images\\button\\load.png");
	button[16] = iLoadImage("images\\button\\load2.png");
	//music
	button[17] = iLoadImage("images\\button\\music2.png");
	button[18] = iLoadImage("images\\button\\music.png");
	//musicoff
	button[19] = iLoadImage("images\\button\\musicoff.png");
	button[20] = iLoadImage("images\\button\\musicoff2.png");

	 //piranha tree
	monstertrees[0] = iLoadImage("images\\monstertree\\no.png");
	monstertrees[1] = iLoadImage("images\\monstertree\\idle (2).png");
	monstertrees[2] = iLoadImage("images\\monstertree\\idle (3).png");
	monstertrees[3] = iLoadImage("images\\monstertree\\idle (4).png");
	monstertrees[4] = iLoadImage("images\\monstertree\\idle (5).png");
	//Piranha tree attcak
	monstertreebites[0] = iLoadImage("images\\monstertree\\attack (1).png");
	monstertreebites[1] = iLoadImage("images\\monstertree\\attack (1).png");
	monstertreebites[2] = iLoadImage("images\\monstertree\\attack (2).png");
	monstertreebites[3] = iLoadImage("images\\monstertree\\attack (3).png");
	monstertreebites[4] = iLoadImage("images\\monstertree\\attack (4).png");

	//congrats
	congratspic[0] = iLoadImage("images\\congrats.png");
	congratspic[1] = iLoadImage("images\\congrats1.png");
	congratspic[2] = iLoadImage("images\\congrats1.png");

	//Intro Messagwes::
	intromessages[0] = iLoadImage("images\\message1.png");
	intromessages[1] = iLoadImage("images\\messageblank.png");
	intromessages[2] = iLoadImage("images\\messageblank.png");

	intromessages[3] = iLoadImage("images\\message2.png");
	intromessages[4] = iLoadImage("images\\messageblank.png");
	intromessages[5] = iLoadImage("images\\messageblank.png");

	//cutscenes
	cutsceneimage[0] = iLoadImage("images\\cutscenes.png");
	cutsceneimage[2] = iLoadImage("images\\cutscenes2.png");
	cutsceneimage[1] = iLoadImage("images\\skip.png");

	//mushrooms
	mushroom[0] = iLoadImage("images\\mushroom.png");
	mushroom[1] = iLoadImage("images\\mushroom1.png");

	//angry bird

	angrybird[1] = iLoadImage("images\\birds\\angrybird (1).png");
	angrybird[2] = iLoadImage("images\\birds\\angrybird (1).png");
	angrybird[3] = iLoadImage("images\\birds\\angrybird (2).png");
	angrybird[4] = iLoadImage("images\\birds\\angrybird (2).png");
	angrybird[5] = iLoadImage("images\\birds\\angrybird (3).png");
	angrybird[6] = iLoadImage("images\\birds\\angrybird (3).png");
	angrybird[7] = iLoadImage("images\\birds\\angrybird (4).png");
	angrybird[8] = iLoadImage("images\\birds\\angrybird (4).png");
	angrybird[9] = iLoadImage("images\\birds\\angrybird (5).png");
	angrybird[10] = iLoadImage("images\\birds\\angrybird (5).png");
	angrybird[11] = iLoadImage("images\\birds\\angrybird (6).png");
	angrybird[12] = iLoadImage("images\\birds\\angrybird (6).png");
	angrybird[13] = iLoadImage("images\\birds\\angrybird (7).png");
	angrybird[14] = iLoadImage("images\\birds\\angrybird (7).png");
	angrybird[15] = iLoadImage("images\\birds\\angrybird (8).png");
	angrybird[16] = iLoadImage("images\\birds\\angrybird (8).png");
	angrybird[17] = iLoadImage("images\\birds\\angrybird (9).png");
	angrybird[18] = iLoadImage("images\\birds\\angrybird (9).png");
	angrybird[19] = iLoadImage("images\\birds\\angrybird (10).png");
	angrybird[20] = iLoadImage("images\\birds\\angrybird (10).png");
	angrybird[21] = iLoadImage("images\\birds\\angrybird (11).png");
	angrybird[22] = iLoadImage("images\\birds\\angrybird (11).png");
	
	



}
#endif // IMAGELOAD_H_INCLUDED
