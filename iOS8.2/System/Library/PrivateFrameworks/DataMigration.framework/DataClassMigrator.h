/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface DataClassMigrator : NSObject {

	NSDictionary* _context;
	char _didUpgrade;

}

@property (nonatomic,retain) NSDictionary * context;                                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char didUpgrade;                                         //@synthesize didUpgrade=_didUpgrade - In the implementation block
@property (nonatomic,readonly) char didRestoreFromBackup; 
@property (nonatomic,readonly) char didMigrateBackupFromDifferentDevice; 
@property (nonatomic,readonly) char didRestoreFromCloudBackup; 
@property (nonatomic,readonly) char shouldPreserveSettingsAfterRestore; 
@property (nonatomic,readonly) char wasPasscodeSetInBackup; 
-(id)dataClassName;
-(float)estimatedDuration;
-(float)migrationProgress;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(char)didUpgrade;
-(char)didRestoreFromBackup;
-(char)didMigrateBackupFromDifferentDevice;
-(char)didRestoreFromCloudBackup;
-(char)shouldPreserveSettingsAfterRestore;
-(char)wasPasscodeSetInBackup;
-(void)setDidUpgrade:(char)arg1 ;
-(char)performMigration;
@end
