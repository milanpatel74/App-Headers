/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRapidFeedbackSurveyManagerDelegate.h>

@class FBUserSession, FBRapidFeedbackController, FBRapidFeedbackSurveyManager, NSString;

@interface FBProductionLockoutSurveyCoordinator : NSObject <FBRapidFeedbackSurveyManagerDelegate> {

	FBUserSession* _session;
	FBRapidFeedbackController* _rapidFeedbackController;
	/*^block*/id _presentationBlock;
	/*^block*/id _dismissalBlock;
	FBRapidFeedbackSurveyManager* _surveyManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 presentationBlock:(/*^block*/id)arg2 dismissalBlock:(/*^block*/id)arg3 ;
-(void)showSnoozeSurvey;
-(void)surveyManager:(id)arg1 shouldDismiss:(BOOL)arg2 ;
-(void)_showSnoozeSurveyAfterDismissal;
-(void)_presentFetchedSurvey:(id)arg1 ;
@end
