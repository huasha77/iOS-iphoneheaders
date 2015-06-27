/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:22:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMigrationManager, NSURL, NSString;

@interface CoreThemeDefinitionMigrator : NSObject {

	NSMigrationManager* _migrationManager;
	NSURL* _documentURL;
	int _oldVersion;
	int _newVersion;
	NSString* temporaryMigrationPath;

}

@property (copy) NSString * temporaryMigrationPath; 
-(void)dealloc;
-(NSString *)temporaryMigrationPath;
-(void)setTemporaryMigrationPath:(NSString *)arg1 ;
-(char)_checkDiskSpace:(id*)arg1 ;
-(id)mappingModelForMigrationWithError:(id*)arg1 ;
-(char)_updateMetadata:(id*)arg1 ;
-(id)initWithURL:(id)arg1 oldVersion:(int)arg2 newVersion:(int)arg3 ;
-(char)migrateWithError:(id*)arg1 ;
@end
