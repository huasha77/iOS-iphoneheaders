/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBIconAnimatorDelegate;
@class NSMutableArray, SBFolderControllerAnimationContext, NSString, SBIconAnimationSettings, SBFolderController, UIView;

@interface SBIconAnimator : NSObject {

	double _fraction;
	BOOL _startAnimationAfterRotationEnds;
	BOOL _windowIsRotating;
	BOOL _cleanedUp;
	NSMutableArray* _pendedAnimationContexts;
	SBFolderControllerAnimationContext* _animationContext;
	NSString* _instanceIdentifier;
	BOOL _invalidated;
	BOOL _animatesInnerFolderViews;
	id<SBIconAnimatorDelegate> _delegate;
	SBIconAnimationSettings* _settings;
	SBFolderController* _folderController;

}

@property (assign,nonatomic) id<SBIconAnimatorDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBIconAnimationSettings * settings;                                          //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                            //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) BOOL animatesInnerFolderViews;                                               //@synthesize animatesInnerFolderViews=_animatesInnerFolderViews - In the implementation block
@property (nonatomic,retain,readonly) SBFolderController * folderController;                              //@synthesize folderController=_folderController - In the implementation block
@property (nonatomic,retain,readonly) SBFolderControllerAnimationContext * animationContext;              //@synthesize animationContext=_animationContext - In the implementation block
@property (nonatomic,retain,readonly) UIView * referenceView; 
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithFolderController:(id)arg1 ;
-(SBFolderController *)folderController;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)centralAnimationFactory;
-(void)setFraction:(double)arg1 ;
-(void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_windowFinishedRotating;
-(void)_allowRotationOnMainWindowIfNecessary:(BOOL)arg1 ;
-(void)_invalidateCompletions;
-(void)_animateToFractionFromContext:(id)arg1 ;
-(BOOL)animatesInnerFolderViews;
-(void)_animateToFractionFromPendingContexts;
-(BOOL)_isDelayedForRotation;
-(id)_centralAnimationFactory;
-(void)setAnimatesInnerFolderViews:(BOOL)arg1 ;
-(BOOL)invalidated;
-(void)dealloc;
-(void)setDelegate:(id<SBIconAnimatorDelegate>)arg1 ;
-(id<SBIconAnimatorDelegate>)delegate;
-(SBIconAnimationSettings *)settings;
-(void)setSettings:(SBIconAnimationSettings *)arg1 ;
-(void)cleanup;
-(SBFolderControllerAnimationContext *)animationContext;
-(UIView *)referenceView;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)prepare;
@end
