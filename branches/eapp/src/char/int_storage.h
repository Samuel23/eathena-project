// $Id: int_storage.h,v 1.1.1.1 2004/09/10 17:26:51 MagicalTux Exp $
#ifndef _INT_STORAGE_H_
#define _INT_STORAGE_H_

int inter_storage_init(void);
void inter_storage_final();

int inter_storage_delete(uint32 account_id);
int inter_guild_storage_delete(uint32 guild_id);

int inter_storage_parse_frommap(int fd);


#endif
