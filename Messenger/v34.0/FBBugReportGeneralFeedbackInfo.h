/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBBugReportGeneralFeedbackInfo : NSObject {

	NSString* _feedback;
	NSString* _initiationSource;

}

@property (nonatomic,copy) NSString * feedback;                      //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) NSString * initiationSource;              //@synthesize initiationSource=_initiationSource - In the implementation block
-(id)_logInfo;
-(NSString *)initiationSource;
-(void)setInitiationSource:(NSString *)arg1 ;
-(id)init;
-(void)setFeedback:(NSString *)arg1 ;
-(NSString *)feedback;
-(id)parameters;
@end
