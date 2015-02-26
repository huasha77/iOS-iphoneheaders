/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, OADBackground, PDAnimation, PDTransition, OADTableStyle, OADShape;

@interface PDSlideBase : NSObject {

	NSString* mName;
	NSArray* mDrawables;
	OADBackground* mBackground;
	PDAnimation* mAnimation;
	PDTransition* mTransition;
	OADTableStyle* mDefaultTableStyle;
	unsigned mIsHidden : 1;
	unsigned mIsDoneWithContent : 1;
	BOOL mCachedSlideNumberShape;
	OADShape* mSlideNumberShape;
	BOOL mCachedSlideNumberPlaceholder;
	OADShape* mSlideNumberPlaceholder;

}

@property (nonatomic,readonly) OADShape * slideNumberShape; 
@property (nonatomic,readonly) OADShape * slideNumberPlaceholder; 
@property (nonatomic,readonly) BOOL hasMappableSlideNumberShape; 
+(int)inheritedPlaceholderType:(int)arg1 ;
-(id)description;
-(void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3 ;
-(void)addSlideNumberPlaceholder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)animation;
-(void)setTransition:(id)arg1 ;
-(id)transition;
-(void)setIsHidden:(BOOL)arg1 ;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(id)colorScheme;
-(id)styleMatrix;
-(id)colorMap;
-(id)defaultTheme;
-(id)fontScheme;
-(id)parentSlideBase;
-(id)drawables;
-(id)drawingTheme;
-(void)doneWithContent;
-(id)defaultTableStyle;
-(void)setDefaultTableStyle:(id)arg1 ;
-(id)parentTextStyleForTables;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3 ;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(BOOL)arg3 overrideIndex:(BOOL)arg4 ;
-(id)placeholders;
-(void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2 ;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(OADShape *)slideNumberShape;
-(OADShape *)slideNumberPlaceholder;
-(BOOL)hasMappableSlideNumberShape;
-(BOOL)hasPpt10Animations;
-(BOOL)hasPpt9Animations;
-(void)generatePpt9Animations:(id)arg1 ;
@end
