/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBAdInterfacesPromotion, FBAdInterfacesAdminInfo, NSDictionary;

@interface FBAdInterfacesInitializationResponse : FBValueObject <NSCopying> {

	FBAdInterfacesPromotion* _promotion;
	FBAdInterfacesAdminInfo* _adminInfo;
	NSDictionary* _extraData;

}

@property (nonatomic,copy,readonly) FBAdInterfacesPromotion * promotion;              //@synthesize promotion=_promotion - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesAdminInfo * adminInfo;              //@synthesize adminInfo=_adminInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraData;                         //@synthesize extraData=_extraData - In the implementation block
-(FBAdInterfacesAdminInfo *)adminInfo;
-(FBAdInterfacesPromotion *)promotion;
-(id)initWithPromotion:(id)arg1 adminInfo:(id)arg2 extraData:(id)arg3 ;
-(NSDictionary *)extraData;
@end
