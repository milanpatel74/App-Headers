/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSString;

@interface FBWebRTCEndCallInfo : NSObject {

	FBWebRTCLogWrapper* _logger;
	BOOL _submitted;
	NSMutableDictionary* _analyticsExtra;
	BOOL _surveyShown;
	BOOL _ratingShown;
	BOOL _hasConnectedWithVideo;
	unsigned long long _callId;
	unsigned long long _starRating;
	NSString* _endCallSummary;
	NSString* _callabilityStatus;
	NSString* _surveyChoice;
	NSString* _surveyFeedback;
	long long _batteryStart;
	long long _batteryEnd;
	long long _videoDurationWithFilterEnabled;

}

@property (assign,nonatomic) unsigned long long callId;                             //@synthesize callId=_callId - In the implementation block
@property (assign,nonatomic) unsigned long long starRating;                         //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,copy) NSString * endCallSummary;                               //@synthesize endCallSummary=_endCallSummary - In the implementation block
@property (nonatomic,copy) NSString * callabilityStatus;                            //@synthesize callabilityStatus=_callabilityStatus - In the implementation block
@property (nonatomic,copy) NSString * surveyChoice;                                 //@synthesize surveyChoice=_surveyChoice - In the implementation block
@property (nonatomic,copy) NSString * surveyFeedback;                               //@synthesize surveyFeedback=_surveyFeedback - In the implementation block
@property (assign,nonatomic) BOOL surveyShown;                                      //@synthesize surveyShown=_surveyShown - In the implementation block
@property (assign,nonatomic) BOOL ratingShown;                                      //@synthesize ratingShown=_ratingShown - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedWithVideo;                            //@synthesize hasConnectedWithVideo=_hasConnectedWithVideo - In the implementation block
@property (assign,nonatomic) long long batteryStart;                                //@synthesize batteryStart=_batteryStart - In the implementation block
@property (assign,nonatomic) long long batteryEnd;                                  //@synthesize batteryEnd=_batteryEnd - In the implementation block
@property (assign,nonatomic) long long videoDurationWithFilterEnabled;              //@synthesize videoDurationWithFilterEnabled=_videoDurationWithFilterEnabled - In the implementation block
-(id)endCallJson;
-(NSString *)endCallSummary;
-(BOOL)surveyShown;
-(NSString *)surveyChoice;
-(NSString *)surveyFeedback;
-(BOOL)ratingShown;
-(NSString *)callabilityStatus;
-(long long)batteryStart;
-(long long)batteryEnd;
-(long long)videoDurationWithFilterEnabled;
-(id)initWithLogger:(FBWebRTCLogWrapper*)arg1 ;
-(void)setAnalyticsValue:(id)arg1 forKey:(id)arg2 ;
-(void)addAnalyticsExtra:(id)arg1 ;
-(void)setEndCallSummary:(NSString *)arg1 ;
-(void)setCallabilityStatus:(NSString *)arg1 ;
-(void)setSurveyChoice:(NSString *)arg1 ;
-(void)setSurveyFeedback:(NSString *)arg1 ;
-(void)setSurveyShown:(BOOL)arg1 ;
-(void)setRatingShown:(BOOL)arg1 ;
-(BOOL)hasConnectedWithVideo;
-(void)setHasConnectedWithVideo:(BOOL)arg1 ;
-(void)setBatteryStart:(long long)arg1 ;
-(void)setBatteryEnd:(long long)arg1 ;
-(void)setVideoDurationWithFilterEnabled:(long long)arg1 ;
-(void)submit;
-(void)setStarRating:(unsigned long long)arg1 ;
-(void)setCallId:(unsigned long long)arg1 ;
-(unsigned long long)callId;
-(unsigned long long)starRating;
@end
