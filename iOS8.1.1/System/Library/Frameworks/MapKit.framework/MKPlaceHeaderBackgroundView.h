/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/MKPlaceHeaderViewCinematics.h>

@protocol MKPlaceHeaderBackgroundViewDelegate;
@class MKMapItem, NSString;

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics> {

	long long _backgroundType;
	MKMapItem* _mapItem;
	id<MKPlaceHeaderBackgroundViewDelegate> _delegate;
	long long _preparationState;

}

@property (assign,nonatomic,__weak) id<MKPlaceHeaderBackgroundViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long backgroundType;                                             //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) long long preparationState;                                           //@synthesize preparationState=_preparationState - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForBackgroundType:(long long)arg1 ;
+(long long)backgroundTypeForMapItem:(id)arg1 ;
+(id)backgroundViewForBackgroundType:(long long)arg1 mapItem:(id)arg2 headerView:(id)arg3 ;
+(id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(void)setBackgroundType:(long long)arg1 ;
-(void)prepareForPresentation;
-(long long)preparationState;
-(void)setPreparationState:(long long)arg1 ;
-(long long)backgroundType;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MKPlaceHeaderBackgroundViewDelegate>)arg1 ;
-(id<MKPlaceHeaderBackgroundViewDelegate>)delegate;
-(void)resume;
-(void)reset;
-(void)present;
-(void)pause;
@end
