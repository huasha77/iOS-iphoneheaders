/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:04:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class AceObject;


@protocol SiriUIViewController <NSObject>
@property (nonatomic,retain) AceObject * aceObject; 
@optional
-(float)desiredHeightForWidth:(float)arg1;
-(float)desiredHeight;
-(id)navigationTitle;
-(void)transcriptViewControllerTappedOutsideEditingView;

@required
-(void)siriWillActivateFromSource:(int)arg1;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(AceObject *)aceObject;
-(void)setAceObject:(id)arg1;

@end
