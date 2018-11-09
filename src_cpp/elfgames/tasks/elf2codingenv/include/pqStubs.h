/*
 *-----------------------------------------------------------------------------
 *
 * ../generic/pqStubs.h --
 *
 *	Stubs for procedures in pqStubDefs.txt
 *
 * Generated by genExtStubs.tcl: DO NOT EDIT
 * 2015-06-26 12:55:15Z
 *
 *-----------------------------------------------------------------------------
 */

typedef struct pqStubDefs {
  /* Functions from libraries: pq */

  const char* (*pg_encoding_to_charPtr)(int);
  void (*PQclearPtr)(PGresult*);
  int (*PQclientEncodingPtr)(const PGconn*);
  char* (*PQcmdTuplesPtr)(PGresult*);
  PGconn* (*PQconnectdbPtr)(const char*);
  char* (*PQerrorMessagePtr)(const PGconn*);
  PGresult* (*PQdescribePreparedPtr)(PGconn*, const char*);
  PGresult* (*PQexecPtr)(PGconn*, const char*);
  PGresult* (*PQexecPreparedPtr)(
      PGconn*,
      const char*,
      int,
      const char* const*,
      const int*,
      const int*,
      int);
  char* (*PQdbPtr)(const PGconn*);
  void (*PQfinishPtr)(PGconn*);
  char* (*PQfnamePtr)(PGresult*, int);
  int (*PQfnumberPtr)(const PGresult*, const char*);
  Oid (*PQftypePtr)(const PGresult*, int);
  int (*PQgetisnullPtr)(const PGresult*, int, int);
  int (*PQgetlengthPtr)(const PGresult*, int, int);
  char* (*PQgetvaluePtr)(const PGresult*, int, int);
  char* (*PQhostPtr)(const PGconn*);
  int (*PQnfieldsPtr)(const PGresult*);
  int (*PQnparamsPtr)(const PGresult*);
  int (*PQntuplesPtr)(const PGresult*);
  char* (*PQoptionsPtr)(const PGconn*);
  Oid (*PQparamtypePtr)(const PGresult*, int);
  char* (*PQpassPtr)(const PGconn*);
  char* (*PQportPtr)(const PGconn*);
  PGresult* (*PQpreparePtr)(PGconn*, const char*, const char*, int, const Oid*);
  char* (*PQresultErrorFieldPtr)(const PGresult*, int);
  ExecStatusType (*PQresultStatusPtr)(const PGresult*);
  int (*PQsetClientEncodingPtr)(PGconn*, const char*);
  PQnoticeProcessor (
      *PQsetNoticeProcessorPtr)(PGconn*, PQnoticeProcessor, void*);
  ConnStatusType (*PQstatusPtr)(PGconn*);
  char* (*PQuserPtr)(const PGconn*);
  char* (*PQttyPtr)(const PGconn*);
} pqStubDefs;
#define pg_encoding_to_char (pqStubs->pg_encoding_to_charPtr)
#define PQclear (pqStubs->PQclearPtr)
#define PQclientEncoding (pqStubs->PQclientEncodingPtr)
#define PQcmdTuples (pqStubs->PQcmdTuplesPtr)
#define PQconnectdb (pqStubs->PQconnectdbPtr)
#define PQerrorMessage (pqStubs->PQerrorMessagePtr)
#define PQdescribePrepared (pqStubs->PQdescribePreparedPtr)
#define PQexec (pqStubs->PQexecPtr)
#define PQexecPrepared (pqStubs->PQexecPreparedPtr)
#define PQdb (pqStubs->PQdbPtr)
#define PQfinish (pqStubs->PQfinishPtr)
#define PQfname (pqStubs->PQfnamePtr)
#define PQfnumber (pqStubs->PQfnumberPtr)
#define PQftype (pqStubs->PQftypePtr)
#define PQgetisnull (pqStubs->PQgetisnullPtr)
#define PQgetlength (pqStubs->PQgetlengthPtr)
#define PQgetvalue (pqStubs->PQgetvaluePtr)
#define PQhost (pqStubs->PQhostPtr)
#define PQnfields (pqStubs->PQnfieldsPtr)
#define PQnparams (pqStubs->PQnparamsPtr)
#define PQntuples (pqStubs->PQntuplesPtr)
#define PQoptions (pqStubs->PQoptionsPtr)
#define PQparamtype (pqStubs->PQparamtypePtr)
#define PQpass (pqStubs->PQpassPtr)
#define PQport (pqStubs->PQportPtr)
#define PQprepare (pqStubs->PQpreparePtr)
#define PQresultErrorField (pqStubs->PQresultErrorFieldPtr)
#define PQresultStatus (pqStubs->PQresultStatusPtr)
#define PQsetClientEncoding (pqStubs->PQsetClientEncodingPtr)
#define PQsetNoticeProcessor (pqStubs->PQsetNoticeProcessorPtr)
#define PQstatus (pqStubs->PQstatusPtr)
#define PQuser (pqStubs->PQuserPtr)
#define PQtty (pqStubs->PQttyPtr)
MODULE_SCOPE const pqStubDefs* pqStubs;
