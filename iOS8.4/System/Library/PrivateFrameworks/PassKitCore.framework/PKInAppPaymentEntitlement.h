/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {

	NSArray* _merchantIdentifiers;
	BOOL _ignoreMerchantIdentifiers;

}

@property (nonatomic,readonly) BOOL ignoreMerchantIdentifiers;              //@synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantIdentifiers; 
-(void)dealloc;
-(void)_probeEntitlementsWithToken:(SCD_Struct_PK6)arg1 ;
-(id)initWithToken:(SCD_Struct_PK6)arg1 ;
-(BOOL)hasMerchantIdentifier:(id)arg1 ;
-(BOOL)hasMerchantIdentifiers;
-(BOOL)ignoreMerchantIdentifiers;
@end
