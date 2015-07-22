/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface CloudLoadBulkArtworkInfoOperation : CloudLibraryOperation {

	NSArray* _cloudIDs;
	BOOL _useLongIDs;
	unsigned char _itemKind;
	NSArray* _cloudArtworkInfoDictionaries;

}

@property (nonatomic,readonly) BOOL useLongIDs;                                     //@synthesize useLongIDs=_useLongIDs - In the implementation block
@property (nonatomic,readonly) unsigned char itemKind;                              //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,readonly) NSArray * cloudArtworkInfoDictionaries;              //@synthesize cloudArtworkInfoDictionaries=_cloudArtworkInfoDictionaries - In the implementation block
-(BOOL)useLongIDs;
-(id)initWithCloudIDs:(id)arg1 ;
-(NSArray *)cloudArtworkInfoDictionaries;
-(void)main;
-(unsigned char)itemKind;
@end
