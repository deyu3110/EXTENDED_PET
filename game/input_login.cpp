

/* ���� �� */
	if (g_noticeBattleZone)
	{
		if (FN_is_battle_zone(ch))
		{
			ch->ChatPacket(CHAT_TYPE_NOTICE, LC_TEXT("? ??? ???? ??? ??? ? ????."));
			ch->ChatPacket(CHAT_TYPE_NOTICE, LC_TEXT("? ??? ???? ???"));
			ch->ChatPacket(CHAT_TYPE_NOTICE, LC_TEXT("??? ?? ? ???? ????? ????."));
		}
	}

/* ��� ��� */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
	ch->CheckPet();
#endif