/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate.h>
#import <StoreKitUI/SKUIOfferViewDelegate.h>
#import <StoreKitUI/SKUIPerspectiveView.h>
#import <StoreKitUI/SKUIViewElementView.h>

@class NSMapTable, SKUIProductLockupLayout, SKUILockupViewElement, SKUIGradientView, NSMutableArray, NSString;

@interface SKUIProductLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIPerspectiveView, SKUIViewElementView> {

	NSMapTable* _elementViews;
	SKUIProductLockupLayout* _layout;
	SKUILockupViewElement* _lockup;
	SKUIGradientView* _offerConfirmationGradientView;
	int _offerMetadataPosition;
	NSMutableArray* _segmentedControlControllers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(float)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
+(id)_attributedStringForButton:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(void)_requestLayoutForViewElements:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)_buttonAction:(id)arg1 ;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)_imageTapAction:(id)arg1 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(id)_viewElementForView:(id)arg1 ;
-(CGRect)_stackElements:(id)arg1 alignment:(int)arg2 inRect:(CGRect)arg3 ;
-(CGRect)_stackBottomRightElements:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1 ;
-(void)_prepareOfferConfirmationGradientForView:(id)arg1 ;
-(CGRect)_frameForSection:(int)arg1 ;
-(void)_layoutConfirmationGradientRelativeToSection:(int)arg1 alpha:(float)arg2 ;
-(char)offerViewAnimateTransition:(id)arg1 ;
-(void)offerViewDidAnimateTransition:(id)arg1 ;
-(void)offerViewWillAnimateTransition:(id)arg1 ;
@end
