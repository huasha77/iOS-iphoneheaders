/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOMapItemStorage, NSString, NSData, NSMutableArray;

@interface GEOCompanionRouteDetails : PBCodable <NSCopying> {

	SCD_Struct_GE47* _coordinates;
	SCD_Struct_GE48* _trafficColorOffsets;
	SCD_Struct_GE48* _trafficColors;
	GEOMapItemStorage* _destination;
	NSString* _destinationName;
	unsigned _distance;
	unsigned _historicalDuration;
	NSString* _name;
	GEOMapItemStorage* _origin;
	unsigned _originalDuration;
	NSData* _routeID;
	NSMutableArray* _steps;
	BOOL _canNavigate;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName;                                 //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalDuration; 
@property (assign,nonatomic) unsigned originalDuration;                                  //@synthesize originalDuration=_originalDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                     //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinatesCount; 
@property (nonatomic,readonly) double* coordinates; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                           //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOMapItemStorage * destination;                            //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOMapItemStorage * origin;                                 //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (assign,nonatomic) BOOL hasHistoricalDuration; 
@property (assign,nonatomic) unsigned historicalDuration;                                //@synthesize historicalDuration=_historicalDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCanNavigate; 
@property (assign,nonatomic) BOOL canNavigate;                                           //@synthesize canNavigate=_canNavigate - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                          //@synthesize distance=_distance - In the implementation block
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(BOOL)isSyntheticRoute;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOMapItemStorage *)origin;
-(void)setOrigin:(GEOMapItemStorage *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOMapItemStorage *)destination;
-(void)setDestination:(GEOMapItemStorage *)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(NSString *)destinationName;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)setDestinationName:(NSString *)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)addStep:(id)arg1 ;
-(void)clearSteps;
-(unsigned long long)coordinatesCount;
-(void)clearCoordinates;
-(double)coordinatesAtIndex:(unsigned long long)arg1 ;
-(void)addCoordinates:(double)arg1 ;
-(void)clearTrafficColors;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(void)clearTrafficColorOffsets;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(BOOL)hasDestinationName;
-(void)setOriginalDuration:(unsigned)arg1 ;
-(void)setHasOriginalDuration:(BOOL)arg1 ;
-(BOOL)hasOriginalDuration;
-(double*)coordinates;
-(void)setCoordinates:(double*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHistoricalDuration:(unsigned)arg1 ;
-(void)setHasHistoricalDuration:(BOOL)arg1 ;
-(BOOL)hasHistoricalDuration;
-(void)setCanNavigate:(BOOL)arg1 ;
-(void)setHasCanNavigate:(BOOL)arg1 ;
-(BOOL)hasCanNavigate;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)originalDuration;
-(unsigned)historicalDuration;
-(BOOL)canNavigate;
-(unsigned)distance;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(unsigned long long)trafficColorsCount;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned*)trafficColorOffsets;
-(unsigned*)trafficColors;
-(unsigned long long)stepsCount;
-(NSMutableArray *)steps;
@end
