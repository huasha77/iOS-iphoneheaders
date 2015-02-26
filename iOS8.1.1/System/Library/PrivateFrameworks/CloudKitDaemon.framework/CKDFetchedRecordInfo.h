/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKRecord, NSError;

@interface CKDFetchedRecordInfo : NSObject {

	CKRecord* _record;
	NSError* _error;

}

@property (nonatomic,retain) CKRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                //@synthesize error=_error - In the implementation block
+(id)infoWithRecord:(id)arg1 error:(id)arg2 ;
+(id)infoWithRecord:(id)arg1 ;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
