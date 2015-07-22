/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Maps/NSCopying.h>

@class NSString;

@interface PersistentAddressBookAddress : PBCodable <NSCopying> {

	double _position;
	int _addressID;
	int _recordID;
	NSString* _syncIdentifier;
	SCD_Struct_Di9 _has;

}

@property (assign,nonatomic) char hasRecordID; 
@property (assign,nonatomic) int recordID;                           //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) char hasAddressID; 
@property (assign,nonatomic) int addressID;                          //@synthesize addressID=_addressID - In the implementation block
@property (nonatomic,readonly) char hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;              //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) double position;                        //@synthesize position=_position - In the implementation block
-(NSString *)syncIdentifier;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(char)hasSyncIdentifier;
-(void)setHasAddressID:(char)arg1 ;
-(void)setHasRecordID:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(char)hasRecordID;
-(int)recordID;
-(void)setRecordID:(int)arg1 ;
-(void)setAddressID:(int)arg1 ;
-(char)hasAddressID;
-(int)addressID;
-(char)hasPosition;
-(void)setHasPosition:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
