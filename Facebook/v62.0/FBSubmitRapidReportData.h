/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBSubmitRapidReportData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _rapidReportingPromptNodeToken;
	NSArray* _reportTags;
	NSString* _rawText;

}

@property (nonatomic,copy) NSString * clientMutationId;                           //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                    //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * rapidReportingPromptNodeToken;              //@synthesize rapidReportingPromptNodeToken=_rapidReportingPromptNodeToken - In the implementation block
@property (nonatomic,copy) NSArray * reportTags;                                  //@synthesize reportTags=_reportTags - In the implementation block
@property (nonatomic,copy) NSString * rawText;                                    //@synthesize rawText=_rawText - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(NSArray *)reportTags;
-(void)setRawText:(NSString *)arg1 ;
-(void)setReportTags:(NSArray *)arg1 ;
-(void)setRapidReportingPromptNodeToken:(NSString *)arg1 ;
-(NSString *)rawText;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)rapidReportingPromptNodeToken;
@end
