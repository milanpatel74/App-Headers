/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:15 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBStoryCreateInputDataLogging : FBGraphQLInput {

	NSString* _composerSessionId;
	NSString* _audienceExperiment;
	NSString* _specificPeopleChosen;

}

@property (nonatomic,copy) NSString * composerSessionId;                 //@synthesize composerSessionId=_composerSessionId - In the implementation block
@property (nonatomic,copy) NSString * audienceExperiment;                //@synthesize audienceExperiment=_audienceExperiment - In the implementation block
@property (nonatomic,copy) NSString * specificPeopleChosen;              //@synthesize specificPeopleChosen=_specificPeopleChosen - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)composerSessionId;
-(void)setComposerSessionId:(NSString *)arg1 ;
-(NSString *)audienceExperiment;
-(void)setAudienceExperiment:(NSString *)arg1 ;
-(NSString *)specificPeopleChosen;
-(void)setSpecificPeopleChosen:(NSString *)arg1 ;
@end
