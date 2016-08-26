/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxInterstitial.h>

@protocol FBLocationServicesAlwaysNUXDataSource, FBLocationServicesAlwaysNUXControllerDelegate, FBLocationServicesAlwaysNUXStepDelegate;
@class FBLocationServicesAlwaysNUXView, FBUserSession, NSString;

@interface FBLocationServicesAlwaysNUXStep : FBNuxInterstitial {

	FBLocationServicesAlwaysNUXView* _nuxView;
	FBUserSession* _session;
	id<FBLocationServicesAlwaysNUXDataSource> _dataSource;
	id<FBLocationServicesAlwaysNUXControllerDelegate> _controllerDelegate;
	id<FBLocationServicesAlwaysNUXStepDelegate> _stepDelegate;
	NSString* _surface;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBLocationServicesAlwaysNUXDataSource> dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<FBLocationServicesAlwaysNUXControllerDelegate> controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBLocationServicesAlwaysNUXStepDelegate> stepDelegate;                            //@synthesize stepDelegate=_stepDelegate - In the implementation block
@property (nonatomic,readonly) NSString * surface;                                                                       //@synthesize surface=_surface - In the implementation block
-(void)_didTapCloseButton;
-(void)_didTapLearnMoreButton;
-(void)_didTapActionButton;
-(void)setStepDelegate:(id<FBLocationServicesAlwaysNUXStepDelegate>)arg1 ;
-(void)_didTapSettingsButton;
-(void)addFaceAnimationView:(id)arg1 ;
-(id)initWithSession:(id)arg1 dataSource:(id)arg2 controllerDelegate:(id)arg3 surface:(id)arg4 ;
-(void)configureInterstitialView:(id)arg1 ;
-(void)reloadNUXView;
-(id<FBLocationServicesAlwaysNUXStepDelegate>)stepDelegate;
-(void)dealloc;
-(id<FBLocationServicesAlwaysNUXDataSource>)dataSource;
-(id<FBLocationServicesAlwaysNUXControllerDelegate>)controllerDelegate;
-(Class)viewControllerClass;
-(FBUserSession *)session;
-(NSString *)surface;
@end
