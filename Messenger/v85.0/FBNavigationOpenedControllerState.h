/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, UIViewController, FBPopoverInfo;

@interface FBNavigationOpenedControllerState : NSObject {

	NSURL* _openedURL;
	UIViewController* _viewController;
	id _containerController;
	/*^block*/id _onClosedBlock;
	unsigned long long _presentationMethod;
	unsigned long long _presentationOptions;
	FBPopoverInfo* _popoverInfo;
	UIViewController* _presenter;

}

@property (nonatomic,copy) NSURL * openedURL;                                       //@synthesize openedURL=_openedURL - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id containerController;                         //@synthesize containerController=_containerController - In the implementation block
@property (nonatomic,copy) id onClosedBlock;                                        //@synthesize onClosedBlock=_onClosedBlock - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMethod;                 //@synthesize presentationMethod=_presentationMethod - In the implementation block
@property (assign,nonatomic) unsigned long long presentationOptions;                //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (nonatomic,retain) FBPopoverInfo * popoverInfo;                           //@synthesize popoverInfo=_popoverInfo - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presenter;                   //@synthesize presenter=_presenter - In the implementation block
-(id)onClosedBlock;
-(void)setOnClosedBlock:(id)arg1 ;
-(void)setPopoverInfo:(FBPopoverInfo *)arg1 ;
-(FBPopoverInfo *)popoverInfo;
-(unsigned long long)presentationMethod;
-(id)containerController;
-(void)setOpenedURL:(NSURL *)arg1 ;
-(void)setContainerController:(id)arg1 ;
-(void)setPresentationMethod:(unsigned long long)arg1 ;
-(NSURL *)openedURL;
-(id)description;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(unsigned long long)presentationOptions;
-(UIViewController *)presenter;
-(void)setPresenter:(UIViewController *)arg1 ;
@end
