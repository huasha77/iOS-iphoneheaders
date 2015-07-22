/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class JaliscoImporter, NSString, NSDictionary;

@interface JaliscoUpdateOperation : CloudLibraryOperation {

	long long _reason;
	JaliscoImporter* _importer;
	BOOL _initialImport;
	NSString* _powerEventBeginName;
	NSString* _powerEventEndName;
	NSDictionary* _powerEventPayload;

}

@property (getter=isInitialImport,nonatomic,readonly) BOOL initialImport;              //@synthesize initialImport=_initialImport - In the implementation block
@property (nonatomic,readonly) float updateProgress; 
@property (copy) NSString * powerEventBeginName;                                       //@synthesize powerEventBeginName=_powerEventBeginName - In the implementation block
@property (copy) NSString * powerEventEndName;                                         //@synthesize powerEventEndName=_powerEventEndName - In the implementation block
@property (copy) NSDictionary * powerEventPayload;                                     //@synthesize powerEventPayload=_powerEventPayload - In the implementation block
-(long long)localDatabaseRevision;
-(void)setInitialImport:(BOOL)arg1 ;
-(id)queryFilterPercentEscaped;
-(id)newImporter;
-(BOOL)preflightImport;
-(void)beginPerformUpdate;
-(void)endPerformUpdate;
-(void)handleSuccess:(long long)arg1 ;
-(unsigned)_serverDatabaseRevision:(unsigned)arg1 ;
-(NSString *)powerEventBeginName;
-(void)setPowerEventBeginName:(NSString *)arg1 ;
-(NSString *)powerEventEndName;
-(void)setPowerEventEndName:(NSString *)arg1 ;
-(NSDictionary *)powerEventPayload;
-(void)setPowerEventPayload:(NSDictionary *)arg1 ;
-(BOOL)isInitialImport;
-(void)cancel;
-(id)initWithReason:(long long)arg1 ;
-(void)main;
-(float)updateProgress;
-(BOOL)includeHiddenItems;
-(void)setReason:(long long)arg1 ;
-(void)performUpdate;
@end
