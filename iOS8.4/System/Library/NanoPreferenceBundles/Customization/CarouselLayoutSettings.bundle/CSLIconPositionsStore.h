/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSLIconPostionsStoreDelegate;
@class NPSManager;

@interface CSLIconPositionsStore : NSObject {

	NPSManager* _syncManager;
	BOOL _initialSyncComplete;
	id<CSLIconPostionsStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSLIconPostionsStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_loadLocalPositionsUsingKey:(id)arg1 ;
-(void)_saveLocalPositions:(id)arg1 usingKey:(id)arg2 ;
-(id)loadDefaultPositions;
-(void)_savePositions:(id)arg1 usingKey:(id)arg2 ;
-(void)savePositions:(id)arg1 ;
-(id)_loadPositionsUsingKey:(id)arg1 ;
-(void)actionsOnInitialSyncComplete;
-(void)positionsChanged;
-(id)loadPositions;
-(void)saveTargetPositions:(id)arg1 ;
-(id)loadTargetPositions;
-(void)initialSyncComplete;
-(void)dealloc;
-(void)setDelegate:(id<CSLIconPostionsStoreDelegate>)arg1 ;
-(id)init;
-(id<CSLIconPostionsStoreDelegate>)delegate;
@end
