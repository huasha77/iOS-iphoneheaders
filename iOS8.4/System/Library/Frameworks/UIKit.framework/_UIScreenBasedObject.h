/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIScreen, NSDictionary;


@protocol _UIScreenBasedObject <NSObject>
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
@required
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2;
-(BOOL)_matchingOptions:(id)arg1;
-(UIScreen *)_intendedScreen;

@end
