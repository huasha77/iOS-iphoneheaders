/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface PUCollectionViewData : NSObject {

	int _cachedPageCount;
	CGRect _currentContentBounds;
	NSMutableArray* _itemLayoutAttributes;
	NSMutableDictionary* _itemLayoutAttributesByIndexPath;

}

@property (nonatomic,readonly) int cachedPageCount;                                                //@synthesize cachedPageCount=_cachedPageCount - In the implementation block
@property (assign,nonatomic) CGRect currentContentBounds;                                          //@synthesize currentContentBounds=_currentContentBounds - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemLayoutAttributes;                              //@synthesize itemLayoutAttributes=_itemLayoutAttributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemLayoutAttributesByIndexPath;              //@synthesize itemLayoutAttributesByIndexPath=_itemLayoutAttributesByIndexPath - In the implementation block
-(id)init;
-(void)invalidate;
-(BOOL)hasReferenceIndexPath;
-(int)cachedPageCount;
-(CGRect)currentContentBounds;
-(void)setCurrentContentBounds:(CGRect)arg1 ;
-(id)itemLayoutAttributes;
-(id)itemLayoutAttributesByIndexPath;
-(void).cxx_destruct;
@end
