/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/KeyboardMigrator.migrator/KeyboardMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class CPBitmapStore;

@interface KeyboardMigrator : DataClassMigrator {

	CPBitmapStore* _store;

}

@property (readonly) CPBitmapStore * store; 
-(id)dataClassName;
-(float)estimatedDuration;
-(CPBitmapStore *)store;
-(void)dealloc;
-(BOOL)performMigration;
@end
