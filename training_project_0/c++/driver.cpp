/**
 *  Creator:	Sean Horner
 *  Date:		03/06/2020
 *  Updated:	05/23/2021
 *  Purpose:	
 *  Requires:	
 **/

#include stdio.h
#include sqlite3.h

int main(int argc, char* argv[]) {
	sqlite3* db;
	char *zErrMsg = 0;
	int rc;
	
	rc = sqlite3_open("tagging.db", &db);
	
	if ( rc ) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return 0;
	} else {
		fprintf(stderr, "Opened database successfully\n");
	}
	sqlite3_close(db);

}
