/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface BodyFixedDetectorParameters : PBCodable <NSCopying> {

	unsigned long long _currentWindowNanos;
	unsigned long long _referenceWindowNanos;
	float _maxExcessRadiansPerSecond;
	SCD_Struct_In2 _has;

}

@property (assign,nonatomic) BOOL hasCurrentWindowNanos; 
@property (assign,nonatomic) unsigned long long currentWindowNanos;                //@synthesize currentWindowNanos=_currentWindowNanos - In the implementation block
@property (assign,nonatomic) BOOL hasReferenceWindowNanos; 
@property (assign,nonatomic) unsigned long long referenceWindowNanos;              //@synthesize referenceWindowNanos=_referenceWindowNanos - In the implementation block
@property (assign,nonatomic) BOOL hasMaxExcessRadiansPerSecond; 
@property (assign,nonatomic) float maxExcessRadiansPerSecond;                      //@synthesize maxExcessRadiansPerSecond=_maxExcessRadiansPerSecond - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCurrentWindowNanos:(unsigned long long)arg1 ;
-(void)setHasCurrentWindowNanos:(BOOL)arg1 ;
-(BOOL)hasCurrentWindowNanos;
-(void)setReferenceWindowNanos:(unsigned long long)arg1 ;
-(void)setHasReferenceWindowNanos:(BOOL)arg1 ;
-(BOOL)hasReferenceWindowNanos;
-(void)setMaxExcessRadiansPerSecond:(float)arg1 ;
-(void)setHasMaxExcessRadiansPerSecond:(BOOL)arg1 ;
-(BOOL)hasMaxExcessRadiansPerSecond;
-(unsigned long long)currentWindowNanos;
-(unsigned long long)referenceWindowNanos;
-(float)maxExcessRadiansPerSecond;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
