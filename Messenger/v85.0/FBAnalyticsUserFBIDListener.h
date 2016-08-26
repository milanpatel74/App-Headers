/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIApplication, FBAnalytics, FBAPISessionStore, FBUserSession;

@interface FBAnalyticsUserFBIDListener : NSObject {

	UIApplication* _application;
	FBAnalytics* _analytics;
	FBAPISessionStore* _sessionStore;
	FBUserSession* _session;

}

@property (nonatomic,retain) FBAPISessionStore * sessionStore;              //@synthesize sessionStore=_sessionStore - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) UIApplication * application;                 //@synthesize application=_application - In the implementation block
@property (assign,nonatomic,__weak) FBAnalytics * analytics;                //@synthesize analytics=_analytics - In the implementation block
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(void)setSessionStore:(FBAPISessionStore *)arg1 ;
-(FBAPISessionStore *)sessionStore;
-(FBAnalytics *)analytics;
-(void)_didChangeCurrentSession:(id)arg1 ;
-(void)unobserveSessionStore;
-(void)observeSessionStore;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIApplication *)application;
-(id)initWithApplication:(id)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
