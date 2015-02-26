/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3DatabaseConnection;

@interface ML3AccountCacheDatabase : NSObject {

	ML3DatabaseConnection* _databaseConnection;

}
-(id)init;
-(id)_databasePath;
-(BOOL)_internalSetAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(BOOL)_clearCacheDatabase;
-(BOOL)_openDatabase;
-(BOOL)_closeDatabase;
-(BOOL)_openDatabaseIsRetry:(BOOL)arg1 ;
-(BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(id)appleIDForDSID:(unsigned long long)arg1 ;
@end
