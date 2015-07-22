/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SearchResultRepr.h>
#import <Maps/RAPPlace.h>
#import <Maps/NSCopying.h>
#import <Maps/MKLocatableObject.h>
#import <Maps/MKAnnotation.h>
#import <Maps/MapsSynced.h>

@class NSString, NSData, AddressBookAddress, UIImage, RouteDurationProvider, GEOComposedWaypoint, MSPBookmarkStorage, MSPPinStorage, MKMapItem, NSURL;

@interface SearchResult : SearchResultRepr <RAPPlace, NSCopying, MKLocatableObject, MKAnnotation, MapsSynced> {

	NSString* _singleLineAddress;
	NSString* _singleLineAddressWithHomeCountry;
	char _hasMergedFormattedAddress;
	NSString* _formattedAddress;
	NSString* _formattedAddressMultiline;
	SCD_Struct_RA2 _coordinate;
	char _originatedFromHistory;
	char _originatedFromTrace;
	char _originatedFromBookmarks;
	AddressBookAddress* _address;
	int _appearance;
	unsigned long long _businessID;
	UIImage* _parkingImage;
	RouteDurationProvider* _routeDurationProvider;
	GEOComposedWaypoint* _composedWaypoint;
	MSPBookmarkStorage* _bookmarkStorage;
	MSPPinStorage* _pinStorage;
	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) MSPBookmarkStorage * bookmarkStorage; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_RA2 coordinate;                                    //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,getter=isReverseGeocoded,nonatomic) char reverseGeocoded; 
@property (nonatomic,readonly) char needsReverseGeocodeCheck; 
@property (assign,nonatomic) char originatedFromHistory;                                   //@synthesize originatedFromHistory=_originatedFromHistory - In the implementation block
@property (assign,nonatomic) char originatedFromTrace;                                     //@synthesize originatedFromTrace=_originatedFromTrace - In the implementation block
@property (nonatomic,readonly) char isDynamicCurrentLocation; 
@property (assign,nonatomic) int appearance;                                               //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) unsigned long long businessID; 
@property (nonatomic,readonly) int localSearchProviderID; 
@property (nonatomic,readonly) char isPlaceHolder; 
@property (nonatomic,readonly) NSString * infoCardTitle; 
@property (nonatomic,readonly) NSString * locationTitle; 
@property (nonatomic,readonly) NSString * rawLocationTitle; 
@property (nonatomic,readonly) NSString * disambiguationTitle; 
@property (nonatomic,readonly) NSString * tweetableTitle; 
@property (nonatomic,readonly) NSString * defaultName; 
@property (nonatomic,readonly) NSURL * sharedMapsURL; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * locality; 
@property (nonatomic,retain) GEOComposedWaypoint * composedWaypoint;                       //@synthesize composedWaypoint=_composedWaypoint - In the implementation block
@property (nonatomic,readonly) MSPPinStorage * pinStorage;                                 //@synthesize pinStorage=_pinStorage - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                          //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) RouteDurationProvider * routeDurationProvider; 
@property (nonatomic,retain) NSString * bookmarkTitle; 
@property (nonatomic,retain) AddressBookAddress * address; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
+(id)currentLocationSearchResult;
+(id)customSearchResultWithCoordinate:(SCD_Struct_RA2)arg1 ;
+(id)keyPathsForValuesAffectingLocationTitle;
+(id)keyPathsForValuesAffectingSingleLineAddress;
+(id)keyPathsForValuesAffectingSingleLineAddressWithHomeCountry;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingTitle;
+(id)keyPathsForValuesAffectingSubtitle;
-(char)isDynamicCurrentLocation;
-(char)updateFromSyncData:(id)arg1 ;
-(id)initWithSearchResult:(id)arg1 ;
-(char)isReverseGeocoded;
-(char)isLocationEqual:(id)arg1 withinDistance:(double)arg2 ;
-(void)setAddressFromSearchResult:(id)arg1 ;
-(char)isLooselyEqualToSearchResult:(id)arg1 ;
-(char)looksLikeBusiness;
-(void)markAsOriginatingFromBookmarks;
-(char)originatedFromHistory;
-(char)originatedFromTrace;
-(id)initWithGEOPlace:(id)arg1 ;
-(id)userVisibleTitle;
-(GEOComposedWaypoint *)composedWaypoint;
-(NSString *)defaultName;
-(id)initWithDroppedPin:(id)arg1 ;
-(void)updateWithGEOMapItem:(id)arg1 ;
-(void)setOriginalType:(unsigned)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(MSPBookmarkStorage *)bookmarkStorage;
-(NSString *)bookmarkTitle;
-(void)setBookmarkTitle:(NSString *)arg1 ;
-(NSString *)locationTitle;
-(id)copyForBookmarksWithType:(unsigned)arg1 name:(id)arg2 zoomLevel:(unsigned)arg3 ;
-(void)getEstimatedTravelTimeForTransportType:(unsigned)arg1 getDistanceBasedWalkingRecommendation:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithSearchResult:(id)arg1 address:(id)arg2 ;
-(char)needsReverseGeocodeCheck;
-(void)updateWithReverseGeocodedMapItem:(id)arg1 ticket:(id)arg2 ;
-(id)initWithMapItem:(id)arg1 searchResultType:(unsigned)arg2 traits:(id)arg3 addressBookAddress:(id)arg4 resultIndex:(int)arg5 ;
-(SCD_Struct_RA2)_offsetCoordinate:(float)arg1 ;
-(id)singleLineAddressWithHomeCountry;
-(id)unknownContact;
-(void)clearLocationInformation;
-(void)_syncGEOPlaceWithCoordinate;
-(void)setReverseGeocoded:(char)arg1 ;
-(id)initWithBookmarkRepresentation:(id)arg1 ;
-(char)requiresAdditionalNavData;
-(id)externalAccessoryRepresentationWithError:(out id*)arg1 ;
-(char)canDropAPin;
-(void)becomeDefaultTypeIfCustomType;
-(char)isInMapRect:(SCD_Struct_RA6)arg1 ;
-(id)initWithComposedWaypoint:(id)arg1 ;
-(id)siriRepresentation;
-(void)setComposedWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setOriginatedFromTrace:(char)arg1 ;
-(id)initWithMapItem:(id)arg1 searchResultType:(unsigned)arg2 ticket:(id)arg3 resultIndex:(int)arg4 ;
-(char)isAddressBookResult;
-(NSString *)infoCardTitle;
-(char)isEqualToSearchResult:(id)arg1 ;
-(void)setOriginatedFromHistory:(char)arg1 ;
-(void)_updateETAWithMapItem:(id)arg1 etaCoordinate:(SCD_Struct_RA2)arg2 etaTransportType:(int)arg3 ;
-(id)initWithMapItem:(id)arg1 searchResultType:(unsigned)arg2 etaCoordinate:(SCD_Struct_RA2)arg3 etaTransportType:(int)arg4 addressBookAddress:(id)arg5 resultIndex:(int)arg6 ;
-(void)updateWithReverseGeocodedMapItem:(id)arg1 traits:(id)arg2 ;
-(void)_updateETAWithMapItem:(id)arg1 traits:(id)arg2 ;
-(void)clearAddressCache;
-(RouteDurationProvider *)routeDurationProvider;
-(NSString *)disambiguationTitle;
-(char)hasOriginatedFromBookmarks;
-(char)shouldUpdateEstimatedTravelTimeForNewOrigin:(SCD_Struct_RA2)arg1 transportType:(unsigned)arg2 ;
-(void)_updateTypeAndOriginalTypeIfNeeded;
-(MSPPinStorage *)pinStorage;
-(char)_isEqualToSearchResult:(id)arg1 loose:(char)arg2 ;
-(void)setCoordinate:(SCD_Struct_RA2)arg1 preserveLocationInfo:(char)arg2 ;
-(char)updateFromBookmarkRepresentation:(id)arg1 ;
-(id)_formattedAddressWithSeparator:(id)arg1 ;
-(char)_hasUID;
-(id)coordinateString;
-(id)_locationTitleNeedsRaw:(char)arg1 ;
-(id)_formattedAddressMultiline;
-(id)_structuredAddressDictionaryWithHomeCounty:(char)arg1 ;
-(id)_formattedAddress;
-(char)isEstimatedTravelTimeValidForOrigin:(SCD_Struct_RA2)arg1 transportType:(unsigned)arg2 ;
-(void)setEstimatedTravelTime:(double)arg1 distance:(double)arg2 fromOrigin:(SCD_Struct_RA2)arg3 transportType:(unsigned)arg4 ;
-(id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2 ;
-(id)copyWithType:(unsigned)arg1 ;
-(id)copyWithCoordinate:(SCD_Struct_RA2)arg1 ;
-(id)bookmarkRepresentation;
-(NSURL *)sharedMapsURL;
-(NSString *)rawLocationTitle;
-(NSString *)tweetableTitle;
-(char)_hasStructuredAddress;
-(char)isInMapRegion:(id)arg1 ;
-(id)routableAddress;
-(id)singleLineAddress;
-(void)_setRecord:(void*)arg1 property:(int)arg2 stringValue:(id)arg3 label:(id)arg4 ;
-(char)isPlaceHolder;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(AddressBookAddress *)address;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)name;
-(void)setType:(unsigned)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)_commonInit;
-(id)initWithType:(unsigned)arg1 ;
-(int)appearance;
-(NSString *)subtitle;
-(int)source;
-(id)addressDictionary;
-(void)setAddress:(AddressBookAddress *)arg1 ;
-(id)mapsURL;
-(int)localSearchProviderID;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithGEOMapItem:(id)arg1 ;
-(NSString *)locality;
-(NSString *)countryCode;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SCD_Struct_RA2)coordinate;
-(void)setCoordinate:(SCD_Struct_RA2)arg1 ;
-(unsigned long long)businessID;
-(NSData *)syncData;
-(void)setAppearance:(int)arg1 ;
@end
