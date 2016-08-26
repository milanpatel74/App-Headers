/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBPromptData : FBGraphQLInput {

	NSString* _promptId;
	NSString* _promptType;
	NSString* _promptTrackingString;

}

@property (nonatomic,copy) NSString * promptId;                          //@synthesize promptId=_promptId - In the implementation block
@property (nonatomic,copy) NSString * promptType;                        //@synthesize promptType=_promptType - In the implementation block
@property (nonatomic,copy) NSString * promptTrackingString;              //@synthesize promptTrackingString=_promptTrackingString - In the implementation block
-(NSString *)promptTrackingString;
-(NSString *)promptType;
-(void)setPromptType:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setPromptId:(NSString *)arg1 ;
-(void)setPromptTrackingString:(NSString *)arg1 ;
-(NSString *)promptId;
@end
