use uo; use os; include ":gumps:gumps"; function character_sheet(mobile) var
gump := GFCreateGump(0, 0, 605, 2600); GFDisposable(gump, 0); GFResizePic(gump,
60, 20, 2600, 999, 605); GFResizePic(gump, 100, 70, 9300, 917, 511);
GFTextLine(gump, 500, 40, 0, "Character Sheet"); GFTextLine(gump, 260, 140, 32,
"Class"); GFTextLine(gump, 390, 140, 32, "Alignment"); GFTextLine(gump, 550,
140, 32, "Name"); GFTextLine(gump, 710, 140, 32, "Background"); GFTextLine(gump,
880, 140, 32, "Level"); GFGumpPic(gump, 150, 110, 92); GFGumpPic(gump, 200, 110,
93); GFGumpPic(gump, 310, 110, 93); GFGumpPic(gump, 420, 110, 93);
GFGumpPic(gump, 530, 110, 93); GFGumpPic(gump, 640, 110, 93); GFGumpPic(gump,
750, 110, 93); GFGumpPic(gump, 830, 110, 93); GFGumpPic(gump, 930, 110, 94);
GFTextLine(gump, 230, 220, 1153, "STRENGTH"); GFTextLine(gump, 350, 220, 1153,
"DEXTERITY"); GFTextLine(gump, 460, 220, 1153, "CONSTITUTION"); GFTextLine(gump,
570, 220, 1153, "INTELLIGENCE"); GFTextLine(gump, 700, 220, 1153, "WISDOM");
GFTextLine(gump, 820, 220, 1153, "CHARISMA"); GFResizePic(gump, 240, 180, 5120,
46, 39); GFResizePic(gump, 360, 180, 5120, 46, 39); GFResizePic(gump, 480, 180,
5120, 46, 39); GFResizePic(gump, 590, 180, 5120, 46, 39); GFResizePic(gump, 700,
180, 5120, 46, 39); GFResizePic(gump, 830, 180, 5120, 46, 39); GFResizePic(gump,
820, 380, 9300, 174, 189); GFTextLine(gump, 840, 540, 56, "SAVING THROWS");
GFTextLine(gump, 890, 400, 45, "Strength"); GFTextLine(gump, 890, 420, 45,
"Dexterity"); GFTextLine(gump, 890, 440, 45, "Constitution"); GFTextLine(gump,
890, 460, 45, "Intelligence"); GFTextLine(gump, 890, 480, 45, "Wisdom");
GFTextLine(gump, 890, 500, 45, "Charisma"); GFResizePic(gump, 271, 380, 9300,
546, 190); GFTextLine(gump, 530, 540, 56, "SKILLS"); GFTextLine(gump, 310, 410,
37, "Acrobatics (DEX)"); GFTextLine(gump, 310, 430, 37, "Animal Handling
(WIS)"); GFTextLine(gump, 310, 450, 37, "Arcana (INT)"); GFTextLine(gump, 310,
470, 37, "Athletics (STR)"); GFTextLine(gump, 310, 490, 37, "Deception (CHA)");
GFTextLine(gump, 310, 510, 37, "History (INT)"); GFTextLine(gump, 480, 410, 37,
"Insight (WIS)"); GFTextLine(gump, 480, 430, 37, "Intimidation (CHA)");
GFTextLine(gump, 480, 450, 37, "Investigation (INT)"); GFTextLine(gump, 480,
470, 37, "Medicine (WIS)"); GFTextLine(gump, 480, 490, 37, "Nature (Int)");
GFTextLine(gump, 480, 510, 37, "Perception (WIS)"); GFTextLine(gump, 650, 410,
37, "Performance (CHA)"); GFTextLine(gump, 650, 430, 37, "Persuasion (CHA)");
GFTextLine(gump, 650, 450, 37, "Religion (INT)"); GFTextLine(gump, 650, 470, 37,
"Sleight of Hand (Dex)"); GFTextLine(gump, 650, 490, 37, "Stealth (DEX)");
GFTextLine(gump, 650, 510, 37, "Survival (WIS)"); GFResizePic(gump, 270, 250,
9300, 138, 105); GFTextLine(gump, 320, 290, 116, "HP"); GFTextLine(gump, 285,
260, 116, "MAX HP"); GFTextLine(gump, 280, 320, 116, "TEMP HP");
GFResizePic(gump, 430, 250, 9300, 387, 105); GFGumpPic(gump, 450, 150, 1738);
GFTextLine(gump, 577, 300, 45, "ARMOR"); GFTextLine(gump, 578, 301, 45, "
CLASS"); GFResizePic(gump, 443, 259, 9300, 100, 82); GFTextLine(gump, 467, 317,
56, "HIT DICE"); GFTextLine(gump, 486, 268, 39, "MAX"); GFTextLine(gump, 461,
286, 39, "CURRENT"); GFResizePic(gump, 657, 259, 9300, 147, 82);
GFTextLine(gump, 666, 319, 56, "CONDITIONS & EFFECTS"); GFResizePic(gump, 820,
250, 9300, 172, 106); GFTextLine(gump, 830, 260, 39, "SPELL ATTACK BONUS");
GFTextLine(gump, 830, 290, 39, "SPELL SAVE DC"); GFTextLine(gump, 830, 320, 39,
"CONCENTRATION SAVE"); GFResizePic(gump, 117, 250, 9300, 150, 320);
GFTextLine(gump, 120, 540, 56, "PROFICIENCIES"); GFTextLine(gump, 130, 260, 39,
"ARMOR & WEAPONS"); GFTextLine(gump, 160, 360, 39, "TOOLS"); GFTextLine(gump,
150, 450, 39, "LANGUAGES"); var input := GFSendGump(mobile, gump); if ( input[0]
<= 1 ) SendSysMessage(mobile, "Cancelled."); return 0; endif endfunction