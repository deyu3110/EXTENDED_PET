
/* ���� �� */
enum EItemTypes
{
	[...]
	/* ��� */
	#ifdef ENABLE_EXTENDED_PET_SYSTEM
	ITEM_PET,				//36
	#endif
};

/* ��� */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
enum EPetSubType
{
	PET_PAY,
	PET_SUBTYPE_MAX,
};
#endif
