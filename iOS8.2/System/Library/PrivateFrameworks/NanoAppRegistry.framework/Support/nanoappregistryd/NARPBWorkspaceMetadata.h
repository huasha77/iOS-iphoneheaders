/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanoappregistryd/nanoappregistryd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanoappregistryd/SYObject.h>
#import <nanoappregistryd/NSCopying.h>

@class NSString;

@interface NARPBWorkspaceMetadata : PBCodable <SYObject, NSCopying> {

	unsigned _sequenceNumber;
	NSString* _uUID;
	SCD_Struct_NA1 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;               //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) char hasUUID; 
@property (nonatomic,retain) NSString * uUID;                       //@synthesize uUID=_uUID - In the implementation block
-(NSString *)uUID;
-(char)hasUUID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)syncId;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(unsigned)sequenceNumber;
-(void)setUUID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
