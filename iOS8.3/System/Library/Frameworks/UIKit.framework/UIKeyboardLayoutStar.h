/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayout.h>
#import <UIKit/UIKBEmojiHitTestResponder.h>

@class UIKBTree, NSString, UIKBKeyplaneView, UIKBBackgroundView, NSMutableDictionary, NSMutableSet, UISwipeGestureRecognizer, UIKeyboardKeyplaneTransition, UIKeyboardSplitTransitionView, CADisplayLink, UIDelayedAction, UIView, NSTimer, _UIKeyboardTypingSpeedLogger, UIKBRenderConfig;

@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder> {

	UIKBTree* _keyboard;
	UIKBTree* _keyplane;
	NSString* _keyboardName;
	NSString* _keyplaneName;
	int _appearance;
	UIKBTree* _activeKey;
	UIKBTree* _inactiveLanguageIndicator;
	UIKBKeyplaneView* _keyplaneView;
	UIKBBackgroundView* _backgroundView;
	double _prevTouchUpTime;
	double _prevTouchDownTime;
	unsigned long long _prevUpActions;
	NSMutableDictionary* _keyboards;
	NSMutableDictionary* _allKeyplaneViews;
	NSMutableSet* _allKeyplaneKeycaps;
	NSMutableSet* _validInputStrings;
	NSString* _localizedInputKey;
	CFDictionaryRef _extendedTouchInfoMap;
	int _preferredTrackingChangeCount;
	int _shiftTrackingChangeCount;
	NSMutableSet* _accentInfo;
	NSMutableSet* _hasAccents;
	id _spaceTarget;
	SEL _spaceAction;
	SEL _spaceLongAction;
	id _returnTarget;
	SEL _returnAction;
	SEL _returnLongAction;
	id _deleteTarget;
	SEL _deleteAction;
	SEL _deleteLongAction;
	char _shift;
	char _autoshift;
	char _settingShift;
	char _didLongPress;
	NSString* _preTouchKeyplaneName;
	char _revertKeyplaneAfterTouch;
	char _wasShifted;
	char _swipeDetected;
	char _showIntlKey;
	char _showDictationKey;
	char _suppressDeactivateKeys;
	char _shiftLockReady;
	double _shiftLockFirstTapTime;
	UISwipeGestureRecognizer* _rightSwipeRecognizer;
	UISwipeGestureRecognizer* _leftSwipeRecognizer;
	UISwipeGestureRecognizer* _upSwipeRecognizer;
	UIKeyboardKeyplaneTransition* _keyplaneTransition;
	UIKeyboardSplitTransitionView* _transitionView;
	float _initialSplitProgress;
	float _finalSplitProgress;
	float _initialPinchSeparation;
	float _pinchSeparationValues[4];
	char _pinchDetected;
	double _autoSplitLastUpdate;
	float _autoSplitElapsedTime;
	CADisplayLink* _displayLink;
	char _ghostKeysEnabled;
	UIDelayedAction* _delayedCentroidUpdate;
	char _isRebuilding;
	int _initialBias;
	int _transitionTargetBias;
	char _edgeSwipeDetected;
	float _initialEdgeTranslation;
	float _edgeSwipeProgress;
	float _edgeSwipeVelocity;
	NSString* _layoutTag;
	char _preRotateShift;
	NSString* _preRotateKeyplaneName;
	UIDelayedAction* _multitapAction;
	char _unshiftAfterMultitap;
	int _multitapCount;
	UIKBTree* _multitapKey;
	UIView* _flickPopupView;
	NSMutableDictionary* _compositeImages;
	NSTimer* _flickPopuptimer;
	id _touchInfo;
	UIView* _dimKeyboardImageView;
	char _keyboardImageViewIsDim;
	char _isOutOfBounds;
	NSMutableSet* _keysUnderIndicator;
	_UIKeyboardTypingSpeedLogger* _typingSpeedLogger;
	int playKeyClickSoundOn;
	UIKBRenderConfig* _renderConfig;
	UIView* _modalDisplayView;

}

@property (nonatomic,readonly) UIKBTree * keyboard;                          //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyplane;                          //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,copy) NSString * keyboardName;                          //@synthesize keyboardName=_keyboardName - In the implementation block
@property (nonatomic,copy) NSString * keyplaneName;                          //@synthesize keyplaneName=_keyplaneName - In the implementation block
@property (nonatomic,readonly) NSString * localizedInputMode; 
@property (nonatomic,copy) NSString * localizedInputKey;                     //@synthesize localizedInputKey=_localizedInputKey - In the implementation block
@property (nonatomic,retain) UIKBTree * activeKey;                           //@synthesize activeKey=_activeKey - In the implementation block
@property (assign,nonatomic) char shift;                                     //@synthesize shift=_shift - In the implementation block
@property (assign,nonatomic) char autoShift;                                 //@synthesize autoshift=_autoshift - In the implementation block
@property (assign,nonatomic) char didLongPress;                              //@synthesize didLongPress=_didLongPress - In the implementation block
@property (getter=isRotating,nonatomic,readonly) char rotating; 
@property (nonatomic,readonly) char showsInternationalKey;                   //@synthesize showIntlKey=_showIntlKey - In the implementation block
@property (nonatomic,readonly) char showsDictationKey;                       //@synthesize showDictationKey=_showDictationKey - In the implementation block
@property (nonatomic,copy) NSString * preTouchKeyplaneName;                  //@synthesize preTouchKeyplaneName=_preTouchKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) NSString * layoutTag;                           //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,retain) UIView * modalDisplayView;                      //@synthesize modalDisplayView=_modalDisplayView - In the implementation block
@property (assign,nonatomic) int playKeyClickSoundOn; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_subclassForScreenTraits:(id)arg1 ;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 ;
+(void)accessibilitySensitivityChanged;
+(id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2 ;
+(id)keyboardWithName:(id)arg1 screenTraits:(id)arg2 ;
+(id)sharedRivenKeyplaneGenerator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setShift:(char)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIKBRenderConfig *)renderConfig;
-(char)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)deactivateActiveKey;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(double)lastTouchUpTimestamp;
-(id)scriptingInfoWithChildren;
-(char)isRotating;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)logHandwritingData;
-(id)candidateList;
-(void)clearUnusedObjects:(char)arg1 ;
-(void)clearTransientState;
-(void)deactivateActiveKeys;
-(char)hasCandidateKeys;
-(char)hasAccentKey;
-(char)canMultitap;
-(char)isAlphabeticPlane;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(CGSize)dragGestureSize;
-(char)pinchDetected;
-(void)setSplitProgress:(float)arg1 ;
-(char)pinchSplitGestureEnabled;
-(void)showSplitTransitionView:(char)arg1 ;
-(char)shouldShowIndicator;
-(id)activationIndicatorView;
-(void)setHideKeysUnderIndicator:(char)arg1 ;
-(char)keyplaneContainsEmojiKey;
-(UIKBTree *)keyboard;
-(void)willRotate;
-(void)didRotate;
-(char)performReturnAction;
-(id)currentKeyplane;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)setAutoshift:(char)arg1 ;
-(void)fadeWithInvocation:(id)arg1 ;
-(void)_resizeForKeyplaneSize:(CGSize)arg1 splitWidthsChanged:(char)arg2 ;
-(void)deleteHandwritingStrokesAtIndexes:(id)arg1 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)updateKeyCentroids;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(unsigned)textEditingKeyMask;
-(void)setTextEditingTraits:(id)arg1 ;
-(char)usesAutoShift;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(void)didClearInput;
-(void)restoreDefaultsForAllKeys;
-(void)updateBackgroundCorners;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)longPressAction;
-(char)canProduceString:(id)arg1 ;
-(float)hitBuffer;
-(void)setReturnKeyEnabled:(char)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(char)ignoresShiftState;
-(char)isShiftKeyPlaneChooser;
-(char)isShiftKeyBeingHeld;
-(void)updateLocalizedKeys:(char)arg1 ;
-(void)setSplit:(char)arg1 animated:(char)arg2 ;
-(void)finishSplitTransitionWithProgress:(float)arg1 ;
-(NSString *)keyplaneName;
-(NSString *)keyboardName;
-(NSString *)localizedInputMode;
-(void)setDisableInteraction:(char)arg1 ;
-(void)setPasscodeOutlineAlpha:(float)arg1 ;
-(id)baseKeyForString:(id)arg1 ;
-(id)keyplaneForKey:(id)arg1 ;
-(id)keyplaneNamed:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(char)arg3 baseKeyForVariants:(char)arg4 ;
-(SEL)handlerForNotification:(id)arg1 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(char)canForceTouchCommit:(id)arg1 ;
-(void)didFinishScreenGestureRecognition;
-(unsigned)targetEdgesForScreenGestureRecognition;
-(void)didRecognizeGestureOnEdge:(unsigned)arg1 withDistance:(float)arg2 ;
-(char)performSpaceAction;
-(void)deactivateActiveKeysClearingTouchInfo:(char)arg1 clearingDimming:(char)arg2 ;
-(void)installGestureRecognizers;
-(CGImageRef)renderedImageWithToken:(id)arg1 ;
-(char)showsInternationalKey;
-(char)showsDictationKey;
-(UIKBTree *)keyplane;
-(void)refreshForDictationAvailablityDidChange;
-(void)nextToUseInputModeDidChange:(id)arg1 ;
-(void)uninstallGestureRecognizers;
-(void)cancelMultitapTimer;
-(void)accessibilitySensitivityChanged;
-(UIView *)modalDisplayView;
-(void)setModalDisplayView:(UIView *)arg1 ;
-(void)cancelDelayedCentroidUpdate;
-(void)clearAllTouchInfo;
-(void)handleDismissFlickView:(id)arg1 ;
-(void)setActiveKey:(UIKBTree *)arg1 ;
-(void)setPreTouchKeyplaneName:(NSString *)arg1 ;
-(void)flushKeyCache:(id)arg1 ;
-(id)defaultNameForKeyplaneName:(id)arg1 ;
-(id)splitNameForKeyplaneName:(id)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2 ;
-(int)visualStyleForKeyboardIfSplit:(char)arg1 ;
-(void)updateBackgroundIfNeeded;
-(void)setLocalizedInputKey:(NSString *)arg1 ;
-(void)setKeyplaneName:(NSString *)arg1 ;
-(void)refreshForRivenPreferences;
-(void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg1 withInputMode:(id)arg2 ;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(int)displayTypeHintForShiftKey;
-(int)displayTypeHintForMoreKey;
-(void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)updateLocalizedKeysOnKeyplane:(id)arg1 ;
-(CGImageRef)cachedCompositeImageWithCacheKey:(id)arg1 ;
-(CGImageRef)renderedImageWithStateFallbacksForToken:(id)arg1 ;
-(int)stateForKey:(id)arg1 ;
-(char)shouldShowDictationKey;
-(char)canReuseKeyplaneView;
-(id)splitNameForKeyplane:(id)arg1 ;
-(char)useScaledGeometrySet;
-(void)updateKeyboardForKeyplane:(id)arg1 ;
-(void)updateMoreAndInternationalKeys;
-(id)cacheTokenForKeyplane:(id)arg1 ;
-(id)cacheIdentifierForKeyplaneNamed:(id)arg1 ;
-(id)defaultKeyplaneForKeyplane:(id)arg1 ;
-(int)stateForShiftKey:(id)arg1 ;
-(int)stateForKeyplaneSwitchKey:(id)arg1 ;
-(int)stateForMultitapReverseKey:(id)arg1 ;
-(int)stateForDictationKey:(id)arg1 ;
-(int)stateForStylingKey:(id)arg1 ;
-(int)stateForManipulationKey:(id)arg1 ;
-(void)updateLayoutTags;
-(void)updateCachedKeyplaneKeycaps;
-(void)updateGlobeKeyDisplayString;
-(void)rebuildSplitTransitionView;
-(void)updateTransitionWithFlags:(unsigned long long)arg1 ;
-(id)keyWithRepresentedString:(id)arg1 ;
-(char)supportStylingWithKey:(id)arg1 ;
-(id)highlightedVariantListForStylingKey:(id)arg1 ;
-(char)shouldMergeKey:(id)arg1 ;
-(void)setKeyboardName:(id)arg1 appearance:(int)arg2 ;
-(id)initialKeyplaneNameWithKBStarName:(id)arg1 ;
-(void)setKeyboardDim:(char)arg1 ;
-(UIKBTree *)activeKey;
-(char)shouldHitTestKey:(id)arg1 ;
-(id)keyViewHitTestForPoint:(CGPoint)arg1 ;
-(id)keyHitTestContainingPoint:(CGPoint)arg1 ;
-(id)keyHitTestClosestToPoint:(CGPoint)arg1 ;
-(id)keyHitTestWithoutCharging:(CGPoint)arg1 ;
-(id)keyHitTest:(CGPoint)arg1 ;
-(char)shouldPreventInputManagerHitTestingForKey:(id)arg1 ;
-(int)keycodeForKey:(id)arg1 ;
-(char)isLongPressedKey:(id)arg1 ;
-(char)handwritingPlane;
-(id)multitapCompleteKeys;
-(void)multitapInterrupted;
-(void)multitapExpired;
-(void)handleMultitapTimerFired;
-(id)activeMultitapCompleteKey;
-(void)clearHandwritingStrokesIfNeededAndNotify:(char)arg1 ;
-(unsigned long long)downActionFlagsForKey:(id)arg1 ;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(id)touchForKey:(id)arg1 ;
-(void)showMenu:(id)arg1 forKey:(id)arg2 ;
-(id)_keyplaneVariantsKeyForString:(id)arg1 ;
-(int)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 ;
-(void)setKeyboardDim:(char)arg1 amount:(float)arg2 withDuration:(float)arg3 ;
-(int)biasForKeyboard:(id)arg1 ;
-(id)keyboardLayoutWithBias:(int)arg1 ;
-(char)edgeSwipeGestureEnabled;
-(int)currentKeyboardBias;
-(void)rebuildKeyplaneTransitionWithTargetBias:(int)arg1 ;
-(void)finishHandBiasTransition;
-(void)prepareForSplitTransition;
-(void)setPlayKeyClickSoundOn:(int)arg1 ;
-(float)interpretPinchSeparationValues;
-(void)finishSplit;
-(void)finishSplitTransition;
-(void)_autoSplit:(id)arg1 ;
-(id)generateInfoForTouch:(id)arg1 ;
-(void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3 ;
-(void)clearInfoForTouch:(id)arg1 ;
-(id)flickPopupStringForKey:(id)arg1 withString:(id)arg2 ;
-(void)handlePopupView:(id)arg1 ;
-(void)touchDownWithKey:(id)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(int)playKeyClickSoundOn;
-(char)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)hideMenu:(id)arg1 forKey:(id)arg2 ;
-(void)updateSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 withPoint:(CGPoint)arg3 ;
-(void)playKeyClickSound;
-(char)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned)arg1 ;
-(void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned)arg2 executionContext:(id)arg3 ;
-(id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 isPopupVariant:(char)arg3 isMultitap:(char)arg4 isFlick:(char)arg5 ;
-(void)incrementPunctuationIfNeeded:(id)arg1 ;
-(void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned)arg2 executionContext:(id)arg3 ;
-(NSString *)preTouchKeyplaneName;
-(id)keyplaneNameForRevertAfterTouch;
-(void)downActionShiftWithKey:(id)arg1 ;
-(id)infoForTouch:(id)arg1 ;
-(void)completeDeleteActionForTouchDownWithActions:(unsigned)arg1 executionContext:(id)arg2 ;
-(void)interpretTouchesForSplit;
-(char)touchPassesDragThreshold:(id)arg1 ;
-(void)handleFlick:(id)arg1 ;
-(void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2 ;
-(unsigned long long)upActionFlagsForKey:(id)arg1 ;
-(char)predictionGestureDetectedForTouchInfo:(id)arg1 ;
-(void)refreshGhostKeyState;
-(char)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2 ;
-(id)activeTouchForInteraction:(int)arg1 ;
-(void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4 ;
-(char)shouldSendTouchUpToInputManager:(id)arg1 ;
-(char)shouldSendTouchUpToRecorder:(id)arg1 ;
-(void)touchMultitapTimer;
-(char)shouldSendStringForFlick:(id)arg1 ;
-(id)flickStringForInputKey:(id)arg1 direction:(int)arg2 ;
-(void)completeSendStringActionForTouchUp:(id)arg1 withActions:(int)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(char)arg5 prevActions:(int)arg6 executionContext:(id)arg7 ;
-(char)shouldYieldToControlCenterForFlickWithInitialPoint:(CGPoint)arg1 finalPoint:(CGPoint)arg2 ;
-(void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(int)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(char)arg5 prevActions:(int)arg6 executionContext:(id)arg7 ;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 ;
-(void)upActionShift;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(float)arg3 ;
-(void)handleKeyboardMenusForTouch:(id)arg1 ;
-(void)updateShiftKeyState;
-(void)swipeDetected:(id)arg1 ;
-(void)cancelTouchIfNecessaryForInfo:(id)arg1 ;
-(char)keyHasAccentedVariants:(id)arg1 ;
-(CGPoint)applyError:(CGPoint)arg1 toKey:(id)arg2 ;
-(CGImageRef)renderedKeyplaneWithToken:(id)arg1 split:(char)arg2 ;
-(void)handleDelayedCentroidUpdate;
-(id)currentKeyplaneView;
-(void)setKeyboardName:(NSString *)arg1 ;
-(char)shift;
-(char)autoShift;
-(void)setAutoShift:(char)arg1 ;
-(char)didLongPress;
-(void)setDidLongPress:(char)arg1 ;
-(NSString *)localizedInputKey;
-(CGRect)frameForKeyWithRepresentedString:(id)arg1 ;
-(CGRect)frameForLastKeyWithRepresentedString:(id)arg1 ;
-(id)popupKeyViews;
-(void)setKeyForTouchInfo:(id)arg1 key:(id)arg2 ;
-(void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(char)arg4 ;
-(void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3 ;
-(void)populateFlickPopupsForKey:(id)arg1 ;
-(void)handlePopupView;
-(void)handleDismissFlickView;
@end
