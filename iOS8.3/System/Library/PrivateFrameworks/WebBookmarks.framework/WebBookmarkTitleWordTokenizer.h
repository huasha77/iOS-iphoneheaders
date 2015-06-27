/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:14:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebBookmarks/WebBookmarks-Structs.h>
@class NSString, TIWordTokenizer;

@interface WebBookmarkTitleWordTokenizer : NSObject {

	NSString* _string;
	unsigned _stringLength;
	TIWordTokenizer* _wordTokenizer;
	NSRange _rangeOfNextToken;
	unsigned _startOfUnclassifiedRangeBeforeNextToken;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)setString:(id)arg1 ;
-(NSRange)advanceToNextToken;
@end
