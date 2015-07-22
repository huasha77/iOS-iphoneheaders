/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIViewElement, SKUINavigationBarViewElement;

@interface SKUIExploreTemplateElement : SKUIViewElement {

	BOOL _usesSplits;

}

@property (nonatomic,readonly) NSArray * childViewElements; 
@property (nonatomic,readonly) SKUIViewElement * leftSplit; 
@property (nonatomic,readonly) SKUIViewElement * rightSplit; 
@property (nonatomic,readonly) SKUINavigationBarViewElement * navigationBarElement; 
@property (nonatomic,readonly) BOOL usesSplits;                                                  //@synthesize usesSplits=_usesSplits - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(SKUINavigationBarViewElement *)navigationBarElement;
-(SKUIViewElement *)leftSplit;
-(SKUIViewElement *)rightSplit;
-(BOOL)usesSplits;
-(NSArray *)childViewElements;
-(void)_getLeftSplit:(id*)arg1 rightSplit:(id*)arg2 ;
@end
