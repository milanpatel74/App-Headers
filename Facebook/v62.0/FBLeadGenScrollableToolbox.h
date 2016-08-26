/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBUserSession, NSMutableDictionary, FBLeadGenQuestionHighlightController, NSArray, FBLeadGenNormalFlowFunnelLogger, NSMutableArray, LPPhoneNumber, NSString;

@interface FBLeadGenScrollableToolbox : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _dataController;
	FBLeadGenQuestionHighlightController* _highlightController;
	NSMutableDictionary* _validationErrorTracker;
	NSMutableDictionary* _fieldEditingTracker;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSArray* _trackingCodes;
	id<FBIntentHandler> _intentHandler;
	FBLeadGenNormalFlowFunnelLogger* _normalFlowFunnelLogger;
	NSMutableArray* _disclaimerResponses;
	LPPhoneNumber* _phoneNumber;
	NSString* _countryCode;

}

@property (nonatomic,readonly) FBUserSession * session;                                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * dataController;                                  //@synthesize dataController=_dataController - In the implementation block
@property (nonatomic,retain) FBLeadGenQuestionHighlightController * highlightController;                   //@synthesize highlightController=_highlightController - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * validationErrorTracker;                          //@synthesize validationErrorTracker=_validationErrorTracker - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * fieldEditingTracker;                             //@synthesize fieldEditingTracker=_fieldEditingTracker - In the implementation block
@property (nonatomic,__weak,readonly) id<FBNavigationCoordinator> navigationCoordinator;                   //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                               //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (assign,nonatomic,__weak) id<FBIntentHandler> intentHandler;                                     //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,copy,readonly) FBLeadGenNormalFlowFunnelLogger * normalFlowFunnelLogger;              //@synthesize normalFlowFunnelLogger=_normalFlowFunnelLogger - In the implementation block
@property (nonatomic,retain) NSMutableArray * disclaimerResponses;                                         //@synthesize disclaimerResponses=_disclaimerResponses - In the implementation block
@property (nonatomic,retain) LPPhoneNumber * phoneNumber;                                                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                                         //@synthesize countryCode=_countryCode - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(NSArray *)trackingCodes;
-(NSMutableArray *)disclaimerResponses;
-(FBLeadGenNormalFlowFunnelLogger *)normalFlowFunnelLogger;
-(NSMutableDictionary *)fieldEditingTracker;
-(void)setDisclaimerResponses:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)validationErrorTracker;
-(FBLeadGenQuestionHighlightController *)highlightController;
-(void)setHighlightController:(FBLeadGenQuestionHighlightController *)arg1 ;
-(id)initWithSession:(id)arg1 dataController:(id)arg2 highlightController:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 trackingCodes:(id)arg6 ;
-(LPPhoneNumber *)phoneNumber;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setPhoneNumber:(LPPhoneNumber *)arg1 ;
-(NSMutableDictionary *)dataController;
-(FBUserSession *)session;
@end
