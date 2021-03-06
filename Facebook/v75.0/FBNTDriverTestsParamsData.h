/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class FBNativeTemplateContextData, NSArray;

@interface FBNTDriverTestsParamsData : FBGraphQLInput {

	FBNativeTemplateContextData* _ntContext;
	NSArray* _setNames;

}

@property (nonatomic,copy) FBNativeTemplateContextData * ntContext;              //@synthesize ntContext=_ntContext - In the implementation block
@property (nonatomic,copy) NSArray * setNames;                                   //@synthesize setNames=_setNames - In the implementation block
-(void)setNtContext:(FBNativeTemplateContextData *)arg1 ;
-(FBNativeTemplateContextData *)ntContext;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)setNames;
-(void)setSetNames:(NSArray *)arg1 ;
@end

