/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SearchBundles/VoiceMemos.searchBundle/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SPSearchResult <NSObject>
@optional
-(const char*)titleUTF8String;
-(const char*)subtitleUTF8String;
-(const char*)auxiliaryTitleUTF8String;
-(const char*)auxiliarySubtitleUTF8String;
-(const char*)summaryUTF8String;
-(const char*)URLUTF8String;
-(BOOL)getBadgeValue:(float*)arg1;
-(const char*)resultDisplayIdentifierUTF8String;

@required
-(int)domain;
-(unsigned long long)identifier;
@end
