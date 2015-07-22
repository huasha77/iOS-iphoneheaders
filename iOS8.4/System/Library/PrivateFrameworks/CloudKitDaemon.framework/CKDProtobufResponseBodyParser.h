/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDResponseBodyParser.h>

@protocol OS_dispatch_queue;
@class NSError, NSObject, NSData, NSMutableData, NSString;

@interface CKDProtobufResponseBodyParser : NSObject <CKDResponseBodyParser> {

	BOOL _isParsing;
	Class _messageClass;
	/*^block*/id _objectParsedBlock;
	NSError* _parserError;
	NSObject*<OS_dispatch_queue> _parseQueue;
	NSData* _parserData;
	NSMutableData* _tailParserData;
	unsigned long long _curObjectLength;
	CC_SHA256state_st _mescalSignature;

}

@property (assign,nonatomic) Class messageClass;                                   //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                                   //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
@property (nonatomic,retain) NSError * parserError;                                //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> parseQueue;              //@synthesize parseQueue=_parseQueue - In the implementation block
@property (nonatomic,retain) NSData * parserData;                                  //@synthesize parserData=_parserData - In the implementation block
@property (nonatomic,retain) NSMutableData * tailParserData;                       //@synthesize tailParserData=_tailParserData - In the implementation block
@property (assign,nonatomic) unsigned long long curObjectLength;                   //@synthesize curObjectLength=_curObjectLength - In the implementation block
@property (assign,nonatomic) BOOL isParsing;                                       //@synthesize isParsing=_isParsing - In the implementation block
@property (assign,nonatomic) CC_SHA256state_st mescalSignature;                    //@synthesize mescalSignature=_mescalSignature - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMessageClass:(Class)arg1 ;
-(void)setObjectParsedBlock:(id)arg1 ;
-(void)processData:(id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(id)objectParsedBlock;
-(NSError *)parserError;
-(void)setParserError:(NSError *)arg1 ;
-(NSData *)parserData;
-(void)setParserData:(NSData *)arg1 ;
-(Class)messageClass;
-(unsigned long long)curObjectLength;
-(void)setCurObjectLength:(unsigned long long)arg1 ;
-(BOOL)_parseObjectFromData:(id)arg1 rawData:(id)arg2 ;
-(void)setTailParserData:(NSMutableData *)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(BOOL)isParsing;
-(void)setIsParsing:(BOOL)arg1 ;
-(NSMutableData *)tailParserData;
-(BOOL)_parseObjects:(BOOL)arg1 ;
-(void)setParseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CC_SHA256state_st)mescalSignature;
-(void)setMescalSignature:(CC_SHA256state_st)arg1 ;
@end
