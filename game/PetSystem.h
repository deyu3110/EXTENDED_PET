
/* ������

	void			SetName();

 */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
	void			SetName();
#else
	void			SetName(const char* petName);
#endif


/* ���� �� */
	void		RefreshBuff();

/* ��� ��� */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
	bool			IsActivePet();
#endif
