/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBNativeTemplateContextData;

@interface FBNativeTemplateAsyncParamsData : FBGraphQLInput {

	NSString* _payload;
	NSString* _clientData;
	FBNativeTemplateContextData* _ntContext;

}

@property (nonatomic,copy) NSString * payload;                                   //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * clientData;                                //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,copy) FBNativeTemplateContextData * ntContext;              //@synthesize ntContext=_ntContext - In the implementation block
-(void)setNtContext:(FBNativeTemplateContextData *)arg1 ;
-(FBNativeTemplateContextData *)ntContext;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)payload;
-(void)setPayload:(NSString *)arg1 ;
-(NSString *)clientData;
-(void)setClientData:(NSString *)arg1 ;
@end
