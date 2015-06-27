/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:38 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(NSArray *)addPhotoURLs;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
@end
