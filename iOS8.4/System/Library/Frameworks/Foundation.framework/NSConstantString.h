/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
-(const char*)cString;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned long long)cStringLength;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(const char*)lossyCString;
-(id)retain;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)dealloc;
-(id)copy;
-(id)autorelease;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(oneway void)release;
-(void)finalize;
-(BOOL)canBeConvertedToEncoding:(unsigned long long)arg1 ;
@end
