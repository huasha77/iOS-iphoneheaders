/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_chr.bundle/TextInput_chr
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_chr/TextInput_chr-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_chr : TIKeyboardInputManagerZephyr
-(TIInputManagerZephyr*)initImplementation;
-(BOOL)doesComposeText;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
@end
